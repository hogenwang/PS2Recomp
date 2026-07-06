#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F68A0
// Address: 0x2f68a0 - 0x2f6910
void sub_002F68A0_0x2f68a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F68A0_0x2f68a0");
#endif

    switch (ctx->pc) {
        case 0x2f68ccu: goto label_2f68cc;
        case 0x2f68d8u: goto label_2f68d8;
        default: break;
    }

    ctx->pc = 0x2f68a0u;

    // 0x2f68a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f68a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f68a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f68a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f68a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f68a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f68ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f68acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f68b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68b4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F68B4u;
    {
        const bool branch_taken_0x2f68b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F68B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68B4u;
            // 0x2f68b8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68b4) {
            ctx->pc = 0x2F68C4u;
            goto label_2f68c4;
        }
    }
    ctx->pc = 0x2F68BCu;
    // 0x2f68bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F68BCu;
    {
        const bool branch_taken_0x2f68bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F68C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68BCu;
            // 0x2f68c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68bc) {
            ctx->pc = 0x2F68FCu;
            goto label_2f68fc;
        }
    }
    ctx->pc = 0x2F68C4u;
label_2f68c4:
    // 0x2f68c4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F68C4u;
    SET_GPR_U32(ctx, 31, 0x2F68CCu);
    ctx->pc = 0x2F68C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68C4u;
            // 0x2f68c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F68CCu; }
        if (ctx->pc != 0x2F68CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F68CCu; }
        if (ctx->pc != 0x2F68CCu) { return; }
    }
    ctx->pc = 0x2F68CCu;
label_2f68cc:
    // 0x2f68cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f68ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68d0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F68D0u;
    {
        const bool branch_taken_0x2f68d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F68D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68D0u;
            // 0x2f68d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68d0) {
            ctx->pc = 0x2F68FCu;
            goto label_2f68fc;
        }
    }
    ctx->pc = 0x2F68D8u;
label_2f68d8:
    // 0x2f68d8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2f68d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f68dc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f68dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f68e0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f68e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F68E4u;
    {
        const bool branch_taken_0x2f68e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F68E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68E4u;
            // 0x2f68e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68e4) {
            ctx->pc = 0x2F68FCu;
            goto label_2f68fc;
        }
    }
    ctx->pc = 0x2F68ECu;
    // 0x2f68ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f68f0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F68F0u;
    {
        const bool branch_taken_0x2f68f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F68F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F68F0u;
            // 0x2f68f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f68f0) {
            ctx->pc = 0x2F68D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f68d8;
        }
    }
    ctx->pc = 0x2F68F8u;
    // 0x2f68f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f68f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f68fc:
    // 0x2f68fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f68fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6900: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f6900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6908: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6908u;
            // 0x2f690c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6910u;
    ctx->pc = 0x2f6910u;
}
