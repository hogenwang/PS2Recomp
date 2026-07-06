#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B320
// Address: 0x18b320 - 0x18b3a0
void sub_0018B320_0x18b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B320_0x18b320");
#endif

    switch (ctx->pc) {
        case 0x18b320u: goto label_18b320;
        case 0x18b324u: goto label_18b324;
        case 0x18b328u: goto label_18b328;
        case 0x18b32cu: goto label_18b32c;
        case 0x18b330u: goto label_18b330;
        case 0x18b334u: goto label_18b334;
        case 0x18b338u: goto label_18b338;
        case 0x18b33cu: goto label_18b33c;
        case 0x18b340u: goto label_18b340;
        case 0x18b344u: goto label_18b344;
        case 0x18b348u: goto label_18b348;
        case 0x18b34cu: goto label_18b34c;
        case 0x18b350u: goto label_18b350;
        case 0x18b354u: goto label_18b354;
        case 0x18b358u: goto label_18b358;
        case 0x18b35cu: goto label_18b35c;
        case 0x18b360u: goto label_18b360;
        case 0x18b364u: goto label_18b364;
        case 0x18b368u: goto label_18b368;
        case 0x18b36cu: goto label_18b36c;
        case 0x18b370u: goto label_18b370;
        case 0x18b374u: goto label_18b374;
        case 0x18b378u: goto label_18b378;
        case 0x18b37cu: goto label_18b37c;
        case 0x18b380u: goto label_18b380;
        case 0x18b384u: goto label_18b384;
        case 0x18b388u: goto label_18b388;
        case 0x18b38cu: goto label_18b38c;
        case 0x18b390u: goto label_18b390;
        case 0x18b394u: goto label_18b394;
        case 0x18b398u: goto label_18b398;
        case 0x18b39cu: goto label_18b39c;
        default: break;
    }

    ctx->pc = 0x18b320u;

label_18b320:
    // 0x18b320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18b324:
    // 0x18b324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18b328:
    // 0x18b328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18b32c:
    // 0x18b32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18b330:
    // 0x18b330: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b334:
    // 0x18b334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b338:
    // 0x18b338: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b33c:
    // 0x18b33c: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18b33cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18b340:
    // 0x18b340: 0x26104100  addiu       $s0, $s0, 0x4100
    ctx->pc = 0x18b340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16640));
label_18b344:
    // 0x18b344: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_18b348:
    // 0x18b348: 0xa051bb60  sb          $s1, -0x44A0($v0)
    ctx->pc = 0x18b348u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949728), (uint8_t)GPR_U32(ctx, 17));
label_18b34c:
    // 0x18b34c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b350:
    // 0x18b350: 0x40f809  jalr        $v0
label_18b354:
    if (ctx->pc == 0x18B354u) {
        ctx->pc = 0x18B354u;
            // 0x18b354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18B358u;
        goto label_18b358;
    }
    ctx->pc = 0x18B350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B358u);
        ctx->pc = 0x18B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B350u;
            // 0x18b354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18B358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18B358u; }
            if (ctx->pc != 0x18B358u) { return; }
        }
        }
    }
    ctx->pc = 0x18B358u;
label_18b358:
    // 0x18b358: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18b35c:
    // 0x18b35c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b360:
    // 0x18b360: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18b364:
    // 0x18b364: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_18b368:
    if (ctx->pc == 0x18B368u) {
        ctx->pc = 0x18B368u;
            // 0x18b368: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x18B36Cu;
        goto label_18b36c;
    }
    ctx->pc = 0x18B364u;
    {
        const bool branch_taken_0x18b364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b364) {
            ctx->pc = 0x18B368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B364u;
            // 0x18b368: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B374u;
            goto label_18b374;
        }
    }
    ctx->pc = 0x18B36Cu;
label_18b36c:
    // 0x18b36c: 0x10000006  b           . + 4 + (0x6 << 2)
label_18b370:
    if (ctx->pc == 0x18B370u) {
        ctx->pc = 0x18B370u;
            // 0x18b370: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x18B374u;
        goto label_18b374;
    }
    ctx->pc = 0x18B36Cu;
    {
        const bool branch_taken_0x18b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B36Cu;
            // 0x18b370: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b36c) {
            ctx->pc = 0x18B388u;
            goto label_18b388;
        }
    }
    ctx->pc = 0x18B374u;
label_18b374:
    // 0x18b374: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x18b374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_18b378:
    // 0x18b378: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18b37c:
    if (ctx->pc == 0x18B37Cu) {
        ctx->pc = 0x18B37Cu;
            // 0x18b37c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x18B380u;
        goto label_18b380;
    }
    ctx->pc = 0x18B378u;
    {
        const bool branch_taken_0x18b378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B378u;
            // 0x18b37c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b378) {
            ctx->pc = 0x18B344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b344;
        }
    }
    ctx->pc = 0x18B380u;
label_18b380:
    // 0x18b380: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18b380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18b384:
    // 0x18b384: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18b384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18b388:
    // 0x18b388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b38c:
    // 0x18b38c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b390:
    // 0x18b390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b394:
    // 0x18b394: 0x3e00008  jr          $ra
label_18b398:
    if (ctx->pc == 0x18B398u) {
        ctx->pc = 0x18B398u;
            // 0x18b398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x18B39Cu;
        goto label_18b39c;
    }
    ctx->pc = 0x18B394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B394u;
            // 0x18b398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B39Cu;
label_18b39c:
    // 0x18b39c: 0x0  nop
    ctx->pc = 0x18b39cu;
    // NOP
    ctx->pc = 0x18b3a0u;
}
