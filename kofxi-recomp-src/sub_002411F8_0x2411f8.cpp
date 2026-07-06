#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002411F8
// Address: 0x2411f8 - 0x241248
void sub_002411F8_0x2411f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002411F8_0x2411f8");
#endif

    ctx->pc = 0x2411f8u;

label_2411f8:
    // 0x2411f8: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x2411f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2411fc: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2411FCu;
    {
        const bool branch_taken_0x2411fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2411fc) {
            ctx->pc = 0x241240u;
            goto label_241240;
        }
    }
    ctx->pc = 0x241204u;
    // 0x241204: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x241204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x241208: 0x90a8000a  lbu         $t0, 0xA($a1)
    ctx->pc = 0x241208u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x24120c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x24120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x241210: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x241210u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241214: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x241214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x241218: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241218u;
    {
        const bool branch_taken_0x241218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24121Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241218u;
            // 0x24121c: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241218) {
            ctx->pc = 0x241238u;
            goto label_241238;
        }
    }
    ctx->pc = 0x241220u;
    // 0x241220: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x241220u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241224: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x241224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x241228: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x241228u;
    {
        const bool branch_taken_0x241228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241228) {
            ctx->pc = 0x24122Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241228u;
            // 0x24122c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2411F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2411f8;
        }
    }
    ctx->pc = 0x241230u;
    // 0x241230: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x241230u;
    {
        const bool branch_taken_0x241230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241230u;
            // 0x241234: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241230) {
            ctx->pc = 0x2411F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2411f8;
        }
    }
    ctx->pc = 0x241238u;
label_241238:
    // 0x241238: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x241238u;
    {
        const bool branch_taken_0x241238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24123Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241238u;
            // 0x24123c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241238) {
            ctx->pc = 0x2411F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2411f8;
        }
    }
    ctx->pc = 0x241240u;
label_241240:
    // 0x241240: 0x3e00008  jr          $ra
    ctx->pc = 0x241240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241240u;
            // 0x241244: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241248u;
    ctx->pc = 0x241248u;
}
