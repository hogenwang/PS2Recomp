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

// Function: sub_00156070
// Address: 0x156070 - 0x156140
void sub_00156070_0x156070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156070_0x156070");
#endif

    switch (ctx->pc) {
        case 0x1560a8u: goto label_1560a8;
        default: break;
    }

    ctx->pc = 0x156070u;

    // 0x156070: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x156070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x156074: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x156074u;
    {
        const bool branch_taken_0x156074 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x156078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156074u;
        // 0x156078: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156074) {
            ctx->pc = 0x156084u;
            goto label_156084;
        }
    }
    ctx->pc = 0x15607Cu;
    // 0x15607c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x15607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x156080: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x156080u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_156084:
    // 0x156084: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156084u;
    {
        const bool branch_taken_0x156084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156084) {
            ctx->pc = 0x156088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156084u;
            // 0x156088: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156094u;
            goto label_156094;
        }
    }
    ctx->pc = 0x15608Cu;
    // 0x15608c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15608Cu;
    {
        const bool branch_taken_0x15608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15608Cu;
        // 0x156090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15608c) {
            ctx->pc = 0x156138u;
            goto label_156138;
        }
    }
    ctx->pc = 0x156094u;
label_156094:
    // 0x156094: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x156094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x156098: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x156098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15609c: 0x8c44f7b8  lw          $a0, -0x848($v0)
    ctx->pc = 0x15609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965176)));
    // 0x1560a0: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x1560a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1560a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1560a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1560a8:
    // 0x1560a8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1560a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1560ac: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x1560acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1560b0: 0x5420001b  bnel        $at, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1560B0u;
    {
        const bool branch_taken_0x1560b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1560b0) {
            ctx->pc = 0x1560B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1560B0u;
            // 0x1560b4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156120u;
            goto label_156120;
        }
    }
    ctx->pc = 0x1560B8u;
    // 0x1560b8: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1560B8u;
    {
        const bool branch_taken_0x1560b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1560b8) {
            ctx->pc = 0x1560BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1560B8u;
            // 0x1560bc: 0x43082b  sltu        $at, $v0, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1560D0u;
            goto label_1560d0;
        }
    }
    ctx->pc = 0x1560C0u;
    // 0x1560c0: 0x61823  negu        $v1, $a2
    ctx->pc = 0x1560c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1560c4: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x1560c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1560c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1560C8u;
    {
        const bool branch_taken_0x1560c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560C8u;
        // 0x1560cc: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560c8) {
            ctx->pc = 0x156138u;
            goto label_156138;
        }
    }
    ctx->pc = 0x1560D0u;
label_1560d0:
    // 0x1560d0: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1560D0u;
    {
        const bool branch_taken_0x1560d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1560d0) {
            ctx->pc = 0x15611Cu;
            goto label_15611c;
        }
    }
    ctx->pc = 0x1560D8u;
    // 0x1560d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1560d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1560dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1560DCu;
    {
        const bool branch_taken_0x1560dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1560E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560DCu;
        // 0x1560e0: 0xe62821  addu        $a1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560dc) {
            ctx->pc = 0x1560ECu;
            goto label_1560ec;
        }
    }
    ctx->pc = 0x1560E4u;
    // 0x1560e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1560E4u;
    {
        const bool branch_taken_0x1560e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560E4u;
        // 0x1560e8: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560e4) {
            ctx->pc = 0x1560F0u;
            goto label_1560f0;
        }
    }
    ctx->pc = 0x1560ECu;
label_1560ec:
    // 0x1560ec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1560ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1560f0:
    // 0x1560f0: 0x50e40003  beql        $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1560F0u;
    {
        const bool branch_taken_0x1560f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1560f0) {
            ctx->pc = 0x1560F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1560F0u;
            // 0x1560f4: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156100u;
            goto label_156100;
        }
    }
    ctx->pc = 0x1560F8u;
    // 0x1560f8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1560f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1560fc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1560fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_156100:
    // 0x156100: 0x61823  negu        $v1, $a2
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x156104: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x156104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x156108: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x156108u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15610c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x15610cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x156110: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x156110u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x156114: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x156114u;
    {
        const bool branch_taken_0x156114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156114u;
        // 0x156118: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156114) {
            ctx->pc = 0x156138u;
            goto label_156138;
        }
    }
    ctx->pc = 0x15611Cu;
label_15611c:
    // 0x15611c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_156120:
    // 0x156120: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x156120u;
    {
        const bool branch_taken_0x156120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156120) {
            ctx->pc = 0x156124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156120u;
            // 0x156124: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156130u;
            goto label_156130;
        }
    }
    ctx->pc = 0x156128u;
    // 0x156128: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156128u;
    {
        const bool branch_taken_0x156128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156128u;
        // 0x15612c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156128) {
            ctx->pc = 0x156138u;
            goto label_156138;
        }
    }
    ctx->pc = 0x156130u;
label_156130:
    // 0x156130: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x156130u;
    {
        const bool branch_taken_0x156130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156130u;
        // 0x156134: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156130) {
            ctx->pc = 0x1560A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1560a8;
        }
    }
    ctx->pc = 0x156138u;
label_156138:
    // 0x156138: 0x3e00008  jr          $ra
    ctx->pc = 0x156138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156140u;
}
