#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002276D0
// Address: 0x2276d0 - 0x227768
void sub_002276D0_0x2276d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002276D0_0x2276d0");
#endif

    switch (ctx->pc) {
        case 0x227704u: goto label_227704;
        case 0x22770cu: goto label_22770c;
        case 0x227734u: goto label_227734;
        case 0x227738u: goto label_227738;
        case 0x22774cu: goto label_22774c;
        case 0x227754u: goto label_227754;
        default: break;
    }

    ctx->pc = 0x2276d0u;

    // 0x2276d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2276d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2276d4: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x2276d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x2276d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2276d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2276dc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2276dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2276e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2276e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2276e4: 0x240502f9  addiu       $a1, $zero, 0x2F9
    ctx->pc = 0x2276e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 761));
    // 0x2276e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2276e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2276ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2276ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2276f0: 0x25f140d8  addiu       $s1, $t7, 0x40D8
    ctx->pc = 0x2276f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 16600));
    // 0x2276f4: 0x24e740f0  addiu       $a3, $a3, 0x40F0
    ctx->pc = 0x2276f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16624));
    // 0x2276f8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2276f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2276fc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2276FCu;
    SET_GPR_U32(ctx, 31, 0x227704u);
    ctx->pc = 0x227700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2276FCu;
            // 0x227700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227704u; }
        if (ctx->pc != 0x227704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227704u; }
        if (ctx->pc != 0x227704u) { return; }
    }
    ctx->pc = 0x227704u;
label_227704:
    // 0x227704: 0xc0bd278  jal         func_2F49E0
    ctx->pc = 0x227704u;
    SET_GPR_U32(ctx, 31, 0x22770Cu);
    ctx->pc = 0x227708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227704u;
            // 0x227708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F49E0u;
    if (runtime->hasFunction(0x2F49E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F49E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22770Cu; }
        if (ctx->pc != 0x22770Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F49E0_0x2f49e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22770Cu; }
        if (ctx->pc != 0x22770Cu) { return; }
    }
    ctx->pc = 0x22770Cu;
label_22770c:
    // 0x22770c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22770cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227714: 0x24e74108  addiu       $a3, $a3, 0x4108
    ctx->pc = 0x227714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16648));
    // 0x227718: 0x240502fe  addiu       $a1, $zero, 0x2FE
    ctx->pc = 0x227718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 766));
    // 0x22771c: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22771Cu;
    {
        const bool branch_taken_0x22771c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x227720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22771Cu;
            // 0x227720: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22771c) {
            ctx->pc = 0x22774Cu;
            goto label_22774c;
        }
    }
    ctx->pc = 0x227724u;
    // 0x227724: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227728: 0x240502fb  addiu       $a1, $zero, 0x2FB
    ctx->pc = 0x227728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 763));
    // 0x22772c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22772Cu;
    SET_GPR_U32(ctx, 31, 0x227734u);
    ctx->pc = 0x227730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22772Cu;
            // 0x227730: 0x24e74128  addiu       $a3, $a3, 0x4128 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227734u; }
        if (ctx->pc != 0x227734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227734u; }
        if (ctx->pc != 0x227734u) { return; }
    }
    ctx->pc = 0x227734u;
label_227734:
    // 0x227734: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x227734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_227738:
    // 0x227738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22773c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22773cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227744: 0x3e00008  jr          $ra
    ctx->pc = 0x227744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227744u;
            // 0x227748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22774Cu;
label_22774c:
    // 0x22774c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22774Cu;
    SET_GPR_U32(ctx, 31, 0x227754u);
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227754u; }
        if (ctx->pc != 0x227754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227754u; }
        if (ctx->pc != 0x227754u) { return; }
    }
    ctx->pc = 0x227754u;
label_227754:
    // 0x227754: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x227754u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227758: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227758u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x22775c: 0xadeef1d0  sw          $t6, -0xE30($t7)
    ctx->pc = 0x22775cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963664), GPR_U32(ctx, 14));
    // 0x227760: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x227760u;
    {
        const bool branch_taken_0x227760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227760u;
            // 0x227764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227760) {
            ctx->pc = 0x227738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227738;
        }
    }
    ctx->pc = 0x227768u;
    ctx->pc = 0x227768u;
}
