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

// Function: sub_00156140
// Address: 0x156140 - 0x156200
void sub_00156140_0x156140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156140_0x156140");
#endif

    switch (ctx->pc) {
        case 0x156158u: goto label_156158;
        default: break;
    }

    ctx->pc = 0x156140u;

    // 0x156140: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x156140u;
    {
        const bool branch_taken_0x156140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156140) {
            ctx->pc = 0x1561ECu;
            goto label_1561ec;
        }
    }
    ctx->pc = 0x156148u;
    // 0x156148: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x156148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x15614c: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x15614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x156150: 0x8c66f7b8  lw          $a2, -0x848($v1)
    ctx->pc = 0x156150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965176)));
    // 0x156154: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x156154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_156158:
    // 0x156158: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x156158u;
    {
        const bool branch_taken_0x156158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x156158) {
            ctx->pc = 0x156170u;
            goto label_156170;
        }
    }
    ctx->pc = 0x156160u;
    // 0x156160: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156164: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x156164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156168: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x156168u;
    {
        const bool branch_taken_0x156168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156168u;
        // 0x15616c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156168) {
            ctx->pc = 0x156158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156158;
        }
    }
    ctx->pc = 0x156170u;
label_156170:
    // 0x156170: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x156170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x156174: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x156174u;
    {
        const bool branch_taken_0x156174 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x156174) {
            ctx->pc = 0x156178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156174u;
            // 0x156178: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156188u;
            goto label_156188;
        }
    }
    ctx->pc = 0x15617Cu;
    // 0x15617c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x15617cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x156180: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x156180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x156184: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x156184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_156188:
    // 0x156188: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x156188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15618c: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x15618Cu;
    {
        const bool branch_taken_0x15618c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15618c) {
            ctx->pc = 0x156190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15618Cu;
            // 0x156190: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1561BCu;
            goto label_1561bc;
        }
    }
    ctx->pc = 0x156194u;
    // 0x156194: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x156194u;
    {
        const bool branch_taken_0x156194 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x156194) {
            ctx->pc = 0x1561B8u;
            goto label_1561b8;
        }
    }
    ctx->pc = 0x15619Cu;
    // 0x15619c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1561a0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1561a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1561a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1561a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1561a8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1561a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1561ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1561acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1561b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1561b4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1561b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1561b8:
    // 0x1561b8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1561b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1561bc:
    // 0x1561bc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1561bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1561c0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1561c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1561c4: 0x14660009  bne         $v1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1561C4u;
    {
        const bool branch_taken_0x1561c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1561c4) {
            ctx->pc = 0x1561ECu;
            goto label_1561ec;
        }
    }
    ctx->pc = 0x1561CCu;
    // 0x1561cc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1561ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1561d0: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1561D0u;
    {
        const bool branch_taken_0x1561d0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1561d0) {
            ctx->pc = 0x1561ECu;
            goto label_1561ec;
        }
    }
    ctx->pc = 0x1561D8u;
    // 0x1561d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1561d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1561dc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1561dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1561e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1561e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1561e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1561e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1561e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1561ec:
    // 0x1561ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1561ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1561F4u;
    // 0x1561f4: 0x0  nop
    ctx->pc = 0x1561f4u;
    // NOP
    // 0x1561f8: 0x0  nop
    ctx->pc = 0x1561f8u;
    // NOP
    // 0x1561fc: 0x0  nop
    ctx->pc = 0x1561fcu;
    // NOP
}
