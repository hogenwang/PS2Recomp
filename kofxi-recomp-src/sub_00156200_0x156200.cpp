#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156200
// Address: 0x156200 - 0x156280
void sub_00156200_0x156200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156200_0x156200");
#endif

    switch (ctx->pc) {
        case 0x156218u: goto label_156218;
        default: break;
    }

    ctx->pc = 0x156200u;

    // 0x156200: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x156204: 0x8c66f7b8  lw          $a2, -0x848($v1)
    ctx->pc = 0x156204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965176)));
    // 0x156208: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x156208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15620c: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15620Cu;
    {
        const bool branch_taken_0x15620c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15620c) {
            ctx->pc = 0x156270u;
            goto label_156270;
        }
    }
    ctx->pc = 0x156214u;
    // 0x156214: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x156214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_156218:
    // 0x156218: 0x480000d  bltz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x156218u;
    {
        const bool branch_taken_0x156218 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x156218) {
            ctx->pc = 0x156250u;
            goto label_156250;
        }
    }
    ctx->pc = 0x156220u;
    // 0x156220: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x156220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x156224: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x156224u;
    {
        const bool branch_taken_0x156224 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x156224) {
            ctx->pc = 0x156248u;
            goto label_156248;
        }
    }
    ctx->pc = 0x15622Cu;
    // 0x15622c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x156230: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x156230u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x156234: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x156234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x156238: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15623c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15623Cu;
    {
        const bool branch_taken_0x15623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15623Cu;
            // 0x156240: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15623c) {
            ctx->pc = 0x156258u;
            goto label_156258;
        }
    }
    ctx->pc = 0x156244u;
    // 0x156244: 0x0  nop
    ctx->pc = 0x156244u;
    // NOP
label_156248:
    // 0x156248: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156248u;
    {
        const bool branch_taken_0x156248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15624Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156248u;
            // 0x15624c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156248) {
            ctx->pc = 0x156258u;
            goto label_156258;
        }
    }
    ctx->pc = 0x156250u;
label_156250:
    // 0x156250: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x156250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156254: 0x0  nop
    ctx->pc = 0x156254u;
    // NOP
label_156258:
    // 0x156258: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x156258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15625c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15625Cu;
    {
        const bool branch_taken_0x15625c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15625c) {
            ctx->pc = 0x156270u;
            goto label_156270;
        }
    }
    ctx->pc = 0x156264u;
    // 0x156264: 0x54a0ffec  bnel        $a1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x156264u;
    {
        const bool branch_taken_0x156264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x156264) {
            ctx->pc = 0x156268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x156264u;
            // 0x156268: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x156218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156218;
        }
    }
    ctx->pc = 0x15626Cu;
    // 0x15626c: 0x0  nop
    ctx->pc = 0x15626cu;
    // NOP
label_156270:
    // 0x156270: 0x3e00008  jr          $ra
    ctx->pc = 0x156270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156278u;
    // 0x156278: 0x0  nop
    ctx->pc = 0x156278u;
    // NOP
    // 0x15627c: 0x0  nop
    ctx->pc = 0x15627cu;
    // NOP
    ctx->pc = 0x156280u;
}
