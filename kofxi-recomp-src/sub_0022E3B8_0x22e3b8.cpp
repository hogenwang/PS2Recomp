#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E3B8
// Address: 0x22e3b8 - 0x22e4e0
void sub_0022E3B8_0x22e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E3B8_0x22e3b8");
#endif

    switch (ctx->pc) {
        case 0x22e3b8u: goto label_22e3b8;
        case 0x22e3bcu: goto label_22e3bc;
        case 0x22e3c0u: goto label_22e3c0;
        case 0x22e3c4u: goto label_22e3c4;
        case 0x22e3c8u: goto label_22e3c8;
        case 0x22e3ccu: goto label_22e3cc;
        case 0x22e3d0u: goto label_22e3d0;
        case 0x22e3d4u: goto label_22e3d4;
        case 0x22e3d8u: goto label_22e3d8;
        case 0x22e3dcu: goto label_22e3dc;
        case 0x22e3e0u: goto label_22e3e0;
        case 0x22e3e4u: goto label_22e3e4;
        case 0x22e3e8u: goto label_22e3e8;
        case 0x22e3ecu: goto label_22e3ec;
        case 0x22e3f0u: goto label_22e3f0;
        case 0x22e3f4u: goto label_22e3f4;
        case 0x22e3f8u: goto label_22e3f8;
        case 0x22e3fcu: goto label_22e3fc;
        case 0x22e400u: goto label_22e400;
        case 0x22e404u: goto label_22e404;
        case 0x22e408u: goto label_22e408;
        case 0x22e40cu: goto label_22e40c;
        case 0x22e410u: goto label_22e410;
        case 0x22e414u: goto label_22e414;
        case 0x22e418u: goto label_22e418;
        case 0x22e41cu: goto label_22e41c;
        case 0x22e420u: goto label_22e420;
        case 0x22e424u: goto label_22e424;
        case 0x22e428u: goto label_22e428;
        case 0x22e42cu: goto label_22e42c;
        case 0x22e430u: goto label_22e430;
        case 0x22e434u: goto label_22e434;
        case 0x22e438u: goto label_22e438;
        case 0x22e43cu: goto label_22e43c;
        case 0x22e440u: goto label_22e440;
        case 0x22e444u: goto label_22e444;
        case 0x22e448u: goto label_22e448;
        case 0x22e44cu: goto label_22e44c;
        case 0x22e450u: goto label_22e450;
        case 0x22e454u: goto label_22e454;
        case 0x22e458u: goto label_22e458;
        case 0x22e45cu: goto label_22e45c;
        case 0x22e460u: goto label_22e460;
        case 0x22e464u: goto label_22e464;
        case 0x22e468u: goto label_22e468;
        case 0x22e46cu: goto label_22e46c;
        case 0x22e470u: goto label_22e470;
        case 0x22e474u: goto label_22e474;
        case 0x22e478u: goto label_22e478;
        case 0x22e47cu: goto label_22e47c;
        case 0x22e480u: goto label_22e480;
        case 0x22e484u: goto label_22e484;
        case 0x22e488u: goto label_22e488;
        case 0x22e48cu: goto label_22e48c;
        case 0x22e490u: goto label_22e490;
        case 0x22e494u: goto label_22e494;
        case 0x22e498u: goto label_22e498;
        case 0x22e49cu: goto label_22e49c;
        case 0x22e4a0u: goto label_22e4a0;
        case 0x22e4a4u: goto label_22e4a4;
        case 0x22e4a8u: goto label_22e4a8;
        case 0x22e4acu: goto label_22e4ac;
        case 0x22e4b0u: goto label_22e4b0;
        case 0x22e4b4u: goto label_22e4b4;
        case 0x22e4b8u: goto label_22e4b8;
        case 0x22e4bcu: goto label_22e4bc;
        case 0x22e4c0u: goto label_22e4c0;
        case 0x22e4c4u: goto label_22e4c4;
        case 0x22e4c8u: goto label_22e4c8;
        case 0x22e4ccu: goto label_22e4cc;
        case 0x22e4d0u: goto label_22e4d0;
        case 0x22e4d4u: goto label_22e4d4;
        case 0x22e4d8u: goto label_22e4d8;
        case 0x22e4dcu: goto label_22e4dc;
        default: break;
    }

    ctx->pc = 0x22e3b8u;

label_22e3b8:
    // 0x22e3b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22e3bc:
    // 0x22e3bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22e3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22e3c0:
    // 0x22e3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22e3c4:
    // 0x22e3c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22e3c8:
    // 0x22e3c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e3cc:
    // 0x22e3cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22e3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22e3d0:
    // 0x22e3d0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x22e3d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_22e3d4:
    // 0x22e3d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22e3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_22e3d8:
    // 0x22e3d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22e3dc:
    if (ctx->pc == 0x22E3DCu) {
        ctx->pc = 0x22E3DCu;
            // 0x22e3dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E3E0u;
        goto label_22e3e0;
    }
    ctx->pc = 0x22E3D8u;
    {
        const bool branch_taken_0x22e3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3D8u;
            // 0x22e3dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3d8) {
            ctx->pc = 0x22E3E8u;
            goto label_22e3e8;
        }
    }
    ctx->pc = 0x22E3E0u;
label_22e3e0:
    // 0x22e3e0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_22e3e4:
    if (ctx->pc == 0x22E3E4u) {
        ctx->pc = 0x22E3E4u;
            // 0x22e3e4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->pc = 0x22E3E8u;
        goto label_22e3e8;
    }
    ctx->pc = 0x22E3E0u;
    {
        const bool branch_taken_0x22e3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3E0u;
            // 0x22e3e4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3e0) {
            ctx->pc = 0x22E458u;
            goto label_22e458;
        }
    }
    ctx->pc = 0x22E3E8u;
label_22e3e8:
    // 0x22e3e8: 0xc08c682  jal         func_231A08
label_22e3ec:
    if (ctx->pc == 0x22E3ECu) {
        ctx->pc = 0x22E3F0u;
        goto label_22e3f0;
    }
    ctx->pc = 0x22E3E8u;
    SET_GPR_U32(ctx, 31, 0x22E3F0u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3F0u; }
        if (ctx->pc != 0x22E3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3F0u; }
        if (ctx->pc != 0x22E3F0u) { return; }
    }
    ctx->pc = 0x22E3F0u;
label_22e3f0:
    // 0x22e3f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22e3f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e3f4:
    // 0x22e3f4: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x22e3f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22e3f8:
    // 0x22e3f8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x22e3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_22e3fc:
    // 0x22e3fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_22e400:
    if (ctx->pc == 0x22E400u) {
        ctx->pc = 0x22E400u;
            // 0x22e400: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x22E404u;
        goto label_22e404;
    }
    ctx->pc = 0x22E3FCu;
    {
        const bool branch_taken_0x22e3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3FCu;
            // 0x22e400: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3fc) {
            ctx->pc = 0x22E42Cu;
            goto label_22e42c;
        }
    }
    ctx->pc = 0x22E404u;
label_22e404:
    // 0x22e404: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x22e404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22e408:
    // 0x22e408: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22e408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_22e40c:
    // 0x22e40c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_22e410:
    if (ctx->pc == 0x22E410u) {
        ctx->pc = 0x22E410u;
            // 0x22e410: 0x2410007f  addiu       $s0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x22E414u;
        goto label_22e414;
    }
    ctx->pc = 0x22E40Cu;
    {
        const bool branch_taken_0x22e40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e40c) {
            ctx->pc = 0x22E410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E40Cu;
            // 0x22e410: 0x2410007f  addiu       $s0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E44Cu;
            goto label_22e44c;
        }
    }
    ctx->pc = 0x22E414u;
label_22e414:
    // 0x22e414: 0xc08b938  jal         func_22E4E0
label_22e418:
    if (ctx->pc == 0x22E418u) {
        ctx->pc = 0x22E418u;
            // 0x22e418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E41Cu;
        goto label_22e41c;
    }
    ctx->pc = 0x22E414u;
    SET_GPR_U32(ctx, 31, 0x22E41Cu);
    ctx->pc = 0x22E418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E414u;
            // 0x22e418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E4E0u;
    if (runtime->hasFunction(0x22E4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22E4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E41Cu; }
        if (ctx->pc != 0x22E41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E4E0_0x22e4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E41Cu; }
        if (ctx->pc != 0x22E41Cu) { return; }
    }
    ctx->pc = 0x22E41Cu;
label_22e41c:
    // 0x22e41c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_22e420:
    if (ctx->pc == 0x22E420u) {
        ctx->pc = 0x22E420u;
            // 0x22e420: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x22E424u;
        goto label_22e424;
    }
    ctx->pc = 0x22E41Cu;
    {
        const bool branch_taken_0x22e41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e41c) {
            ctx->pc = 0x22E420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E41Cu;
            // 0x22e420: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E42Cu;
            goto label_22e42c;
        }
    }
    ctx->pc = 0x22E424u;
label_22e424:
    // 0x22e424: 0x10000009  b           . + 4 + (0x9 << 2)
label_22e428:
    if (ctx->pc == 0x22E428u) {
        ctx->pc = 0x22E428u;
            // 0x22e428: 0x2410007f  addiu       $s0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x22E42Cu;
        goto label_22e42c;
    }
    ctx->pc = 0x22E424u;
    {
        const bool branch_taken_0x22e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E424u;
            // 0x22e428: 0x2410007f  addiu       $s0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e424) {
            ctx->pc = 0x22E44Cu;
            goto label_22e44c;
        }
    }
    ctx->pc = 0x22E42Cu;
label_22e42c:
    // 0x22e42c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e430:
    // 0x22e430: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x22e430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22e434:
    // 0x22e434: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22e434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22e438:
    // 0x22e438: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22e43c:
    // 0x22e43c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e440:
    // 0x22e440: 0x40f809  jalr        $v0
label_22e444:
    if (ctx->pc == 0x22E444u) {
        ctx->pc = 0x22E444u;
            // 0x22e444: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E448u;
        goto label_22e448;
    }
    ctx->pc = 0x22E440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E448u);
        ctx->pc = 0x22E444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E440u;
            // 0x22e444: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E448u; }
            if (ctx->pc != 0x22E448u) { return; }
        }
        }
    }
    ctx->pc = 0x22E448u;
label_22e448:
    // 0x22e448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e44c:
    // 0x22e44c: 0xc08c698  jal         func_231A60
label_22e450:
    if (ctx->pc == 0x22E450u) {
        ctx->pc = 0x22E450u;
            // 0x22e450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E454u;
        goto label_22e454;
    }
    ctx->pc = 0x22E44Cu;
    SET_GPR_U32(ctx, 31, 0x22E454u);
    ctx->pc = 0x22E450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E44Cu;
            // 0x22e450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E454u; }
        if (ctx->pc != 0x22E454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E454u; }
        if (ctx->pc != 0x22E454u) { return; }
    }
    ctx->pc = 0x22E454u;
label_22e454:
    // 0x22e454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22e454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e458:
    // 0x22e458: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e45c:
    // 0x22e45c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e45cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e460:
    // 0x22e460: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22e464:
    // 0x22e464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e468:
    // 0x22e468: 0x3e00008  jr          $ra
label_22e46c:
    if (ctx->pc == 0x22E46Cu) {
        ctx->pc = 0x22E46Cu;
            // 0x22e46c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22E470u;
        goto label_22e470;
    }
    ctx->pc = 0x22E468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E468u;
            // 0x22e46c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E470u;
label_22e470:
    // 0x22e470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22e474:
    // 0x22e474: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22e474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22e478:
    // 0x22e478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22e47c:
    // 0x22e47c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22e47cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e480:
    // 0x22e480: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22e480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22e484:
    // 0x22e484: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22e488:
    // 0x22e488: 0xc08c682  jal         func_231A08
label_22e48c:
    if (ctx->pc == 0x22E48Cu) {
        ctx->pc = 0x22E48Cu;
            // 0x22e48c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E490u;
        goto label_22e490;
    }
    ctx->pc = 0x22E488u;
    SET_GPR_U32(ctx, 31, 0x22E490u);
    ctx->pc = 0x22E48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E488u;
            // 0x22e48c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E490u; }
        if (ctx->pc != 0x22E490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E490u; }
        if (ctx->pc != 0x22E490u) { return; }
    }
    ctx->pc = 0x22E490u;
label_22e490:
    // 0x22e490: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22e490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22e494:
    // 0x22e494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e498:
    // 0x22e498: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22e498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e49c:
    // 0x22e49c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22e4a0:
    // 0x22e4a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22e4a4:
    // 0x22e4a4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x22e4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_22e4a8:
    // 0x22e4a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e4a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e4ac:
    // 0x22e4ac: 0x40f809  jalr        $v0
label_22e4b0:
    if (ctx->pc == 0x22E4B0u) {
        ctx->pc = 0x22E4B0u;
            // 0x22e4b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E4B4u;
        goto label_22e4b4;
    }
    ctx->pc = 0x22E4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22E4B4u);
        ctx->pc = 0x22E4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4ACu;
            // 0x22e4b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E4B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E4B4u; }
            if (ctx->pc != 0x22E4B4u) { return; }
        }
        }
    }
    ctx->pc = 0x22E4B4u;
label_22e4b4:
    // 0x22e4b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22e4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e4b8:
    // 0x22e4b8: 0xc08c698  jal         func_231A60
label_22e4bc:
    if (ctx->pc == 0x22E4BCu) {
        ctx->pc = 0x22E4BCu;
            // 0x22e4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E4C0u;
        goto label_22e4c0;
    }
    ctx->pc = 0x22E4B8u;
    SET_GPR_U32(ctx, 31, 0x22E4C0u);
    ctx->pc = 0x22E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4B8u;
            // 0x22e4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E4C0u; }
        if (ctx->pc != 0x22E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E4C0u; }
        if (ctx->pc != 0x22E4C0u) { return; }
    }
    ctx->pc = 0x22E4C0u;
label_22e4c0:
    // 0x22e4c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22e4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e4c4:
    // 0x22e4c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22e4c8:
    // 0x22e4c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22e4c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e4cc:
    // 0x22e4cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22e4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22e4d0:
    // 0x22e4d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e4d4:
    // 0x22e4d4: 0x3e00008  jr          $ra
label_22e4d8:
    if (ctx->pc == 0x22E4D8u) {
        ctx->pc = 0x22E4D8u;
            // 0x22e4d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x22E4DCu;
        goto label_22e4dc;
    }
    ctx->pc = 0x22E4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E4D4u;
            // 0x22e4d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E4DCu;
label_22e4dc:
    // 0x22e4dc: 0x0  nop
    ctx->pc = 0x22e4dcu;
    // NOP
    ctx->pc = 0x22e4e0u;
}
