#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E3A8
// Address: 0x28e3a8 - 0x28e430
void sub_0028E3A8_0x28e3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E3A8_0x28e3a8");
#endif

    switch (ctx->pc) {
        case 0x28e3a8u: goto label_28e3a8;
        case 0x28e3acu: goto label_28e3ac;
        case 0x28e3b0u: goto label_28e3b0;
        case 0x28e3b4u: goto label_28e3b4;
        case 0x28e3b8u: goto label_28e3b8;
        case 0x28e3bcu: goto label_28e3bc;
        case 0x28e3c0u: goto label_28e3c0;
        case 0x28e3c4u: goto label_28e3c4;
        case 0x28e3c8u: goto label_28e3c8;
        case 0x28e3ccu: goto label_28e3cc;
        case 0x28e3d0u: goto label_28e3d0;
        case 0x28e3d4u: goto label_28e3d4;
        case 0x28e3d8u: goto label_28e3d8;
        case 0x28e3dcu: goto label_28e3dc;
        case 0x28e3e0u: goto label_28e3e0;
        case 0x28e3e4u: goto label_28e3e4;
        case 0x28e3e8u: goto label_28e3e8;
        case 0x28e3ecu: goto label_28e3ec;
        case 0x28e3f0u: goto label_28e3f0;
        case 0x28e3f4u: goto label_28e3f4;
        case 0x28e3f8u: goto label_28e3f8;
        case 0x28e3fcu: goto label_28e3fc;
        case 0x28e400u: goto label_28e400;
        case 0x28e404u: goto label_28e404;
        case 0x28e408u: goto label_28e408;
        case 0x28e40cu: goto label_28e40c;
        case 0x28e410u: goto label_28e410;
        case 0x28e414u: goto label_28e414;
        case 0x28e418u: goto label_28e418;
        case 0x28e41cu: goto label_28e41c;
        case 0x28e420u: goto label_28e420;
        case 0x28e424u: goto label_28e424;
        case 0x28e428u: goto label_28e428;
        case 0x28e42cu: goto label_28e42c;
        default: break;
    }

    ctx->pc = 0x28e3a8u;

label_28e3a8:
    // 0x28e3a8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_28e3ac:
    if (ctx->pc == 0x28E3ACu) {
        ctx->pc = 0x28E3ACu;
            // 0x28e3ac: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28E3B0u;
        goto label_28e3b0;
    }
    ctx->pc = 0x28E3A8u;
    {
        const bool branch_taken_0x28e3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3A8u;
            // 0x28e3ac: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3a8) {
            ctx->pc = 0x28E3C4u;
            goto label_28e3c4;
        }
    }
    ctx->pc = 0x28E3B0u;
label_28e3b0:
    // 0x28e3b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e3b4:
    // 0x28e3b4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_28e3b8:
    if (ctx->pc == 0x28E3B8u) {
        ctx->pc = 0x28E3B8u;
            // 0x28e3b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E3BCu;
        goto label_28e3bc;
    }
    ctx->pc = 0x28E3B4u;
    {
        const bool branch_taken_0x28e3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3B4u;
            // 0x28e3b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3b4) {
            ctx->pc = 0x28E3D0u;
            goto label_28e3d0;
        }
    }
    ctx->pc = 0x28E3BCu;
label_28e3bc:
    // 0x28e3bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_28e3c0:
    if (ctx->pc == 0x28E3C0u) {
        ctx->pc = 0x28E3C4u;
        goto label_28e3c4;
    }
    ctx->pc = 0x28E3BCu;
    {
        const bool branch_taken_0x28e3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3bc) {
            ctx->pc = 0x28E3DCu;
            goto label_28e3dc;
        }
    }
    ctx->pc = 0x28E3C4u;
label_28e3c4:
    // 0x28e3c4: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e3c8:
    // 0x28e3c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e3cc:
    if (ctx->pc == 0x28E3CCu) {
        ctx->pc = 0x28E3CCu;
            // 0x28e3cc: 0x8c4345b8  lw          $v1, 0x45B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
        ctx->pc = 0x28E3D0u;
        goto label_28e3d0;
    }
    ctx->pc = 0x28E3C8u;
    {
        const bool branch_taken_0x28e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3C8u;
            // 0x28e3cc: 0x8c4345b8  lw          $v1, 0x45B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3c8) {
            ctx->pc = 0x28E3D8u;
            goto label_28e3d8;
        }
    }
    ctx->pc = 0x28E3D0u;
label_28e3d0:
    // 0x28e3d0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e3d4:
    // 0x28e3d4: 0x8c4345bc  lw          $v1, 0x45BC($v0)
    ctx->pc = 0x28e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
label_28e3d8:
    // 0x28e3d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28e3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28e3dc:
    // 0x28e3dc: 0x3e00008  jr          $ra
label_28e3e0:
    if (ctx->pc == 0x28E3E0u) {
        ctx->pc = 0x28E3E4u;
        goto label_28e3e4;
    }
    ctx->pc = 0x28E3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E3E4u;
label_28e3e4:
    // 0x28e3e4: 0x0  nop
    ctx->pc = 0x28e3e4u;
    // NOP
label_28e3e8:
    // 0x28e3e8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e3ec:
    // 0x28e3ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e3ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e3f0:
    // 0x28e3f0: 0x8c4245c0  lw          $v0, 0x45C0($v0)
    ctx->pc = 0x28e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17856)));
label_28e3f4:
    // 0x28e3f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e3f8:
    if (ctx->pc == 0x28E3F8u) {
        ctx->pc = 0x28E3F8u;
            // 0x28e3f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28E3FCu;
        goto label_28e3fc;
    }
    ctx->pc = 0x28E3F4u;
    {
        const bool branch_taken_0x28e3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3F4u;
            // 0x28e3f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3f4) {
            ctx->pc = 0x28E41Cu;
            goto label_28e41c;
        }
    }
    ctx->pc = 0x28E3FCu;
label_28e3fc:
    // 0x28e3fc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e400:
    // 0x28e400: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x28e400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_28e404:
    // 0x28e404: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e408:
    // 0x28e408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e40c:
    // 0x28e40c: 0xc0a5648  jal         func_295920
label_28e410:
    if (ctx->pc == 0x28E410u) {
        ctx->pc = 0x28E410u;
            // 0x28e410: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E414u;
        goto label_28e414;
    }
    ctx->pc = 0x28E40Cu;
    SET_GPR_U32(ctx, 31, 0x28E414u);
    ctx->pc = 0x28E410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E40Cu;
            // 0x28e410: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E414u; }
        if (ctx->pc != 0x28E414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E414u; }
        if (ctx->pc != 0x28E414u) { return; }
    }
    ctx->pc = 0x28E414u;
label_28e414:
    // 0x28e414: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e418:
    if (ctx->pc == 0x28E418u) {
        ctx->pc = 0x28E418u;
            // 0x28e418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E41Cu;
        goto label_28e41c;
    }
    ctx->pc = 0x28E414u;
    {
        const bool branch_taken_0x28e414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E414u;
            // 0x28e418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e414) {
            ctx->pc = 0x28E424u;
            goto label_28e424;
        }
    }
    ctx->pc = 0x28E41Cu;
label_28e41c:
    // 0x28e41c: 0x40f809  jalr        $v0
label_28e420:
    if (ctx->pc == 0x28E420u) {
        ctx->pc = 0x28E424u;
        goto label_28e424;
    }
    ctx->pc = 0x28E41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E424u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E424u; }
            if (ctx->pc != 0x28E424u) { return; }
        }
        }
    }
    ctx->pc = 0x28E424u;
label_28e424:
    // 0x28e424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e428:
    // 0x28e428: 0x3e00008  jr          $ra
label_28e42c:
    if (ctx->pc == 0x28E42Cu) {
        ctx->pc = 0x28E42Cu;
            // 0x28e42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28E430u;
        goto label_fallthrough_0x28e428;
    }
    ctx->pc = 0x28E428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E428u;
            // 0x28e42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28e428:
    ctx->pc = 0x28E430u;
    ctx->pc = 0x28e430u;
}
