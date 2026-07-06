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

// Function: sub_00265670
// Address: 0x265670 - 0x265700
void sub_00265670_0x265670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265670_0x265670");
#endif

    switch (ctx->pc) {
        case 0x265688u: goto label_265688;
        case 0x2656bcu: goto label_2656bc;
        case 0x2656dcu: goto label_2656dc;
        default: break;
    }

    ctx->pc = 0x265670u;

    // 0x265670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x265674: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x265674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x265678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x265678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26567c: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x26567cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x265680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x265680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x265684: 0x2410007a  addiu       $s0, $zero, 0x7A
    ctx->pc = 0x265684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_265688:
    // 0x265688: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x265688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x26568c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26568Cu;
    {
        const bool branch_taken_0x26568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26568Cu;
        // 0x265690: 0xa3102b  sltu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26568c) {
            ctx->pc = 0x2656CCu;
            goto label_2656cc;
        }
    }
    ctx->pc = 0x265694u;
    // 0x265694: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x265694u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265698: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x265698u;
    {
        const bool branch_taken_0x265698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265698u;
        // 0x26569c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265698) {
            ctx->pc = 0x2656C8u;
            goto label_2656c8;
        }
    }
    ctx->pc = 0x2656A0u;
    // 0x2656a0: 0x304600c0  andi        $a2, $v0, 0xC0
    ctx->pc = 0x2656a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x2656a4: 0x50c0fff8  beql        $a2, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2656A4u;
    {
        const bool branch_taken_0x2656a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656a4) {
            ctx->pc = 0x2656A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2656A4u;
            // 0x2656a8: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265688;
        }
    }
    ctx->pc = 0x2656ACu;
    // 0x2656ac: 0x10c70006  beq         $a2, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2656ACu;
    {
        const bool branch_taken_0x2656ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2656B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656ACu;
        // 0x2656b0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656ac) {
            ctx->pc = 0x2656C8u;
            goto label_2656c8;
        }
    }
    ctx->pc = 0x2656B4u;
    // 0x2656b4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2656B4u;
    SET_GPR_U32(ctx, 31, 0x2656BCu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2656B4u, 0x2656BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656BCu;
label_2656bc:
    // 0x2656bc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2656bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2656c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2656C0u;
    {
        const bool branch_taken_0x2656c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656C0u;
        // 0x2656c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656c0) {
            ctx->pc = 0x2656F0u;
            goto label_2656f0;
        }
    }
    ctx->pc = 0x2656C8u;
label_2656c8:
    // 0x2656c8: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x2656c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2656cc:
    // 0x2656cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2656CCu;
    {
        const bool branch_taken_0x2656cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656cc) {
            ctx->pc = 0x2656D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2656CCu;
            // 0x2656d0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2656ECu;
            goto label_2656ec;
        }
    }
    ctx->pc = 0x2656D4u;
    // 0x2656d4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2656D4u;
    SET_GPR_U32(ctx, 31, 0x2656DCu);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x2656D4u, 0x2656DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656DCu;
label_2656dc:
    // 0x2656dc: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x2656dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2656e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2656e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2656e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2656E4u;
    {
        const bool branch_taken_0x2656e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656E4u;
        // 0x2656e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656e4) {
            ctx->pc = 0x2656F0u;
            goto label_2656f0;
        }
    }
    ctx->pc = 0x2656ECu;
label_2656ec:
    // 0x2656ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2656ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2656f0:
    // 0x2656f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2656f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2656f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2656f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2656f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2656F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2656FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656F8u;
        // 0x2656fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2656F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265700u;
}
