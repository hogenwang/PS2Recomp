#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiIopHeapRpcInit
// Address: 0x115098 - 0x115120
void kofxiIopHeapRpcInit_0x115098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiIopHeapRpcInit_0x115098");
#endif

    switch (ctx->pc) {
        case 0x1150b0u: goto label_1150b0;
        case 0x1150b8u: goto label_1150b8;
        case 0x1150ecu: goto label_1150ec;
        default: break;
    }

    ctx->pc = 0x115098u;

    // 0x115098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11509c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1150a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1150a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1150a4: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1150a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1150a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1150A8u;
    {
        const bool branch_taken_0x1150a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A8u;
        // 0x1150ac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150a8) {
            ctx->pc = 0x1150D4u;
            goto label_1150d4;
        }
    }
    ctx->pc = 0x1150B0u;
label_1150b0:
    // 0x1150b0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1150b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1150b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1150b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1150b8:
    // 0x1150b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1150b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1150bc: 0x0  nop
    ctx->pc = 0x1150bcu;
    // NOP
    // 0x1150c0: 0x0  nop
    ctx->pc = 0x1150c0u;
    // NOP
    // 0x1150c4: 0x0  nop
    ctx->pc = 0x1150c4u;
    // NOP
    // 0x1150c8: 0x0  nop
    ctx->pc = 0x1150c8u;
    // NOP
    // 0x1150cc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1150CCu;
    {
        const bool branch_taken_0x1150cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1150cc) {
            ctx->pc = 0x1150B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1150b8;
        }
    }
    ctx->pc = 0x1150D4u;
label_1150d4:
    // 0x1150d4: 0x26309a80  addiu       $s0, $s1, -0x6580
    ctx->pc = 0x1150d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941312));
    // 0x1150d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1150d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1150dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1150dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1150e0: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x1150e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x1150e4: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x1150E4u;
    SET_GPR_U32(ctx, 31, 0x1150ECu);
    ctx->pc = 0x1150E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1150E4u;
    // 0x1150e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x1150E4u, 0x1150ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150ECu;
label_1150ec:
    // 0x1150ec: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1150ECu;
    {
        const bool branch_taken_0x1150ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1150ec) {
            ctx->pc = 0x1150F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1150ECu;
            // 0x1150f0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1150FCu;
            goto label_1150fc;
        }
    }
    ctx->pc = 0x1150F4u;
    // 0x1150f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1150F4u;
    {
        const bool branch_taken_0x1150f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150F4u;
        // 0x1150f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150f4) {
            ctx->pc = 0x11510Cu;
            goto label_11510c;
        }
    }
    ctx->pc = 0x1150FCu;
label_1150fc:
    // 0x1150fc: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1150FCu;
    {
        const bool branch_taken_0x1150fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150FCu;
        // 0x115100: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150fc) {
            ctx->pc = 0x1150B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1150b0;
        }
    }
    ctx->pc = 0x115104u;
    // 0x115104: 0xac408758  sw          $zero, -0x78A8($v0)
    ctx->pc = 0x115104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936408), GPR_U32(ctx, 0));
    // 0x115108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11510c:
    // 0x11510c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11510cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115110: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x115110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115118: 0x3e00008  jr          $ra
    ctx->pc = 0x115118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115118u;
        // 0x11511c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115120u;
}
