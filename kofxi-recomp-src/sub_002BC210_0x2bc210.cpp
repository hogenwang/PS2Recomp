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

// Function: sub_002BC210
// Address: 0x2bc210 - 0x2bc298
void sub_002BC210_0x2bc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC210_0x2bc210");
#endif

    switch (ctx->pc) {
        case 0x2bc260u: goto label_2bc260;
        default: break;
    }

    ctx->pc = 0x2bc210u;

    // 0x2bc210: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2bc210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc214: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2bc214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bc218: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC218u;
    {
        const bool branch_taken_0x2bc218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc218) {
            ctx->pc = 0x2BC230u;
            goto label_2bc230;
        }
    }
    ctx->pc = 0x2BC220u;
    // 0x2bc220: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC220u;
    {
        const bool branch_taken_0x2bc220 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2BC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC220u;
        // 0x2bc224: 0xa3102a  slt         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc220) {
            ctx->pc = 0x2BC230u;
            goto label_2bc230;
        }
    }
    ctx->pc = 0x2BC228u;
    // 0x2bc228: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC228u;
    {
        const bool branch_taken_0x2bc228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc228) {
            ctx->pc = 0x2BC22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC228u;
            // 0x2bc22c: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC238u;
            goto label_2bc238;
        }
    }
    ctx->pc = 0x2BC230u;
label_2bc230:
    // 0x2bc230: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC230u;
        // 0x2bc234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC238u;
label_2bc238:
    // 0x2bc238: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2bc238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2bc23c: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x2bc23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bc240: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bc240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bc244: 0x10a6000f  beq         $a1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2BC244u;
    {
        const bool branch_taken_0x2bc244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BC248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC244u;
        // 0x2bc248: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc244) {
            ctx->pc = 0x2BC284u;
            goto label_2bc284;
        }
    }
    ctx->pc = 0x2BC24Cu;
    // 0x2bc24c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2bc24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2bc250: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BC250u;
    {
        const bool branch_taken_0x2bc250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC250u;
        // 0x2bc254: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc250) {
            ctx->pc = 0x2BC284u;
            goto label_2bc284;
        }
    }
    ctx->pc = 0x2BC258u;
    // 0x2bc258: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC258u;
    {
        const bool branch_taken_0x2bc258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC258u;
        // 0x2bc25c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc258) {
            ctx->pc = 0x2BC26Cu;
            goto label_2bc26c;
        }
    }
    ctx->pc = 0x2BC260u;
label_2bc260:
    // 0x2bc260: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x2bc260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2bc264: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2bc264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2bc268: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bc268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2bc26c:
    // 0x2bc26c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2bc26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2bc270: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2bc270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bc274: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x2bc274u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2bc278: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BC278u;
    {
        const bool branch_taken_0x2bc278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC278u;
        // 0x2bc27c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc278) {
            ctx->pc = 0x2BC260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc260;
        }
    }
    ctx->pc = 0x2BC280u;
    // 0x2bc280: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2bc280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2bc284:
    // 0x2bc284: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bc284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bc288: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2bc288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc28c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC28Cu;
        // 0x2bc290: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC294u;
    // 0x2bc294: 0x0  nop
    ctx->pc = 0x2bc294u;
    // NOP
}
