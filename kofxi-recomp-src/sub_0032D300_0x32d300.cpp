#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032D300
// Address: 0x32d300 - 0x32d390
void sub_0032D300_0x32d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D300_0x32d300");
#endif

    switch (ctx->pc) {
        case 0x32d33cu: goto label_32d33c;
        case 0x32d350u: goto label_32d350;
        default: break;
    }

    ctx->pc = 0x32d300u;

    // 0x32d300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32d300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32d304: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d308: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32d308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32d30c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32d310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32d314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32d318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32d318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32d31c: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x32d31cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x32d320: 0x52030015  beql        $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x32D320u;
    {
        const bool branch_taken_0x32d320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d320) {
            ctx->pc = 0x32D324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32D320u;
            // 0x32d324: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32D378u;
            goto label_32d378;
        }
    }
    ctx->pc = 0x32D328u;
    // 0x32d328: 0x3c12009f  lui         $s2, 0x9F
    ctx->pc = 0x32d328u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)159 << 16));
    // 0x32d32c: 0x3c11009f  lui         $s1, 0x9F
    ctx->pc = 0x32d32cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)159 << 16));
    // 0x32d330: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32d330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d334: 0x26529700  addiu       $s2, $s2, -0x6900
    ctx->pc = 0x32d334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294940416));
    // 0x32d338: 0x26319708  addiu       $s1, $s1, -0x68F8
    ctx->pc = 0x32d338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940424));
label_32d33c:
    // 0x32d33c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x32d33cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32d340: 0x14700007  bne         $v1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D340u;
    {
        const bool branch_taken_0x32d340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x32d340) {
            ctx->pc = 0x32D360u;
            goto label_32d360;
        }
    }
    ctx->pc = 0x32D348u;
    // 0x32d348: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x32D348u;
    SET_GPR_U32(ctx, 31, 0x32D350u);
    ctx->pc = 0x32D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D348u;
            // 0x32d34c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D350u; }
        if (ctx->pc != 0x32D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D350u; }
        if (ctx->pc != 0x32D350u) { return; }
    }
    ctx->pc = 0x32D350u;
label_32d350:
    // 0x32d350: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d354: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x32d354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x32d358: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x32d358u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d35c: 0x0  nop
    ctx->pc = 0x32d35cu;
    // NOP
label_32d360:
    // 0x32d360: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32d360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x32d364: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x32d364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32d368: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32d368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32d36c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x32D36Cu;
    {
        const bool branch_taken_0x32d36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D36Cu;
            // 0x32d370: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d36c) {
            ctx->pc = 0x32D33Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32d33c;
        }
    }
    ctx->pc = 0x32D374u;
    // 0x32d374: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32d374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32d378:
    // 0x32d378: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32d378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d37c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32d37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32d380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32d384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d388: 0x3e00008  jr          $ra
    ctx->pc = 0x32D388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D388u;
            // 0x32d38c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D390u;
    ctx->pc = 0x32d390u;
}
