#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A888
// Address: 0x10a888 - 0x10a900
void sub_0010A888_0x10a888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A888_0x10a888");
#endif

    switch (ctx->pc) {
        case 0x10a888u: goto label_10a888;
        case 0x10a88cu: goto label_10a88c;
        case 0x10a890u: goto label_10a890;
        case 0x10a894u: goto label_10a894;
        case 0x10a898u: goto label_10a898;
        case 0x10a89cu: goto label_10a89c;
        case 0x10a8a0u: goto label_10a8a0;
        case 0x10a8a4u: goto label_10a8a4;
        case 0x10a8a8u: goto label_10a8a8;
        case 0x10a8acu: goto label_10a8ac;
        case 0x10a8b0u: goto label_10a8b0;
        case 0x10a8b4u: goto label_10a8b4;
        case 0x10a8b8u: goto label_10a8b8;
        case 0x10a8bcu: goto label_10a8bc;
        case 0x10a8c0u: goto label_10a8c0;
        case 0x10a8c4u: goto label_10a8c4;
        case 0x10a8c8u: goto label_10a8c8;
        case 0x10a8ccu: goto label_10a8cc;
        case 0x10a8d0u: goto label_10a8d0;
        case 0x10a8d4u: goto label_10a8d4;
        case 0x10a8d8u: goto label_10a8d8;
        case 0x10a8dcu: goto label_10a8dc;
        case 0x10a8e0u: goto label_10a8e0;
        case 0x10a8e4u: goto label_10a8e4;
        case 0x10a8e8u: goto label_10a8e8;
        case 0x10a8ecu: goto label_10a8ec;
        case 0x10a8f0u: goto label_10a8f0;
        case 0x10a8f4u: goto label_10a8f4;
        case 0x10a8f8u: goto label_10a8f8;
        case 0x10a8fcu: goto label_10a8fc;
        default: break;
    }

    ctx->pc = 0x10a888u;

label_10a888:
    // 0x10a888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10a888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10a88c:
    // 0x10a88c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a890:
    // 0x10a890: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_10a894:
    // 0x10a894: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_10a898:
    // 0x10a898: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_10a89c:
    if (ctx->pc == 0x10A89Cu) {
        ctx->pc = 0x10A89Cu;
            // 0x10a89c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x10A8A0u;
        goto label_10a8a0;
    }
    ctx->pc = 0x10A898u;
    {
        const bool branch_taken_0x10a898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A898u;
            // 0x10a89c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a898) {
            ctx->pc = 0x10A8E8u;
            goto label_10a8e8;
        }
    }
    ctx->pc = 0x10A8A0u;
label_10a8a0:
    // 0x10a8a0: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x10a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_10a8a4:
    // 0x10a8a4: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_10a8a8:
    if (ctx->pc == 0x10A8A8u) {
        ctx->pc = 0x10A8A8u;
            // 0x10a8a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x10A8ACu;
        goto label_10a8ac;
    }
    ctx->pc = 0x10A8A4u;
    {
        const bool branch_taken_0x10a8a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8A4u;
            // 0x10a8a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8a4) {
            ctx->pc = 0x10A8F0u;
            goto label_10a8f0;
        }
    }
    ctx->pc = 0x10A8ACu;
label_10a8ac:
    // 0x10a8ac: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x10a8acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_10a8b0:
    // 0x10a8b0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_10a8b4:
    if (ctx->pc == 0x10A8B4u) {
        ctx->pc = 0x10A8B4u;
            // 0x10a8b4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x10A8B8u;
        goto label_10a8b8;
    }
    ctx->pc = 0x10A8B0u;
    {
        const bool branch_taken_0x10a8b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8B0u;
            // 0x10a8b4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8b0) {
            ctx->pc = 0x10A8F4u;
            goto label_10a8f4;
        }
    }
    ctx->pc = 0x10A8B8u;
label_10a8b8:
    // 0x10a8b8: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x10a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_10a8bc:
    // 0x10a8bc: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10a8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10a8c0:
    // 0x10a8c0: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x10a8c0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a8c4:
    // 0x10a8c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10a8c8:
    // 0x10a8c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10a8cc:
    // 0x10a8cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10a8d0:
    // 0x10a8d0: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x10a8d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_10a8d4:
    // 0x10a8d4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x10a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_10a8d8:
    // 0x10a8d8: 0xe0f809  jalr        $a3
label_10a8dc:
    if (ctx->pc == 0x10A8DCu) {
        ctx->pc = 0x10A8DCu;
            // 0x10a8dc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x10A8E0u;
        goto label_10a8e0;
    }
    ctx->pc = 0x10A8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x10A8E0u);
        ctx->pc = 0x10A8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8D8u;
            // 0x10a8dc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10A8E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A8E0u; }
            if (ctx->pc != 0x10A8E0u) { return; }
        }
        }
    }
    ctx->pc = 0x10A8E0u;
label_10a8e0:
    // 0x10a8e0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x10a8e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10a8e4:
    // 0x10a8e4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10a8e4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a8e8:
    // 0x10a8e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10a8ec:
    // 0x10a8ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a8f0:
    // 0x10a8f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10a8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10a8f4:
    // 0x10a8f4: 0x3e00008  jr          $ra
label_10a8f8:
    if (ctx->pc == 0x10A8F8u) {
        ctx->pc = 0x10A8F8u;
            // 0x10a8f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x10A8FCu;
        goto label_10a8fc;
    }
    ctx->pc = 0x10A8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8F4u;
            // 0x10a8f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A8FCu;
label_10a8fc:
    // 0x10a8fc: 0x0  nop
    ctx->pc = 0x10a8fcu;
    // NOP
    ctx->pc = 0x10a900u;
}
