#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF290
// Address: 0x2bf290 - 0x2bf350
void sub_002BF290_0x2bf290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF290_0x2bf290");
#endif

    switch (ctx->pc) {
        case 0x2bf2b4u: goto label_2bf2b4;
        case 0x2bf2ccu: goto label_2bf2cc;
        case 0x2bf2ecu: goto label_2bf2ec;
        case 0x2bf2fcu: goto label_2bf2fc;
        case 0x2bf30cu: goto label_2bf30c;
        default: break;
    }

    ctx->pc = 0x2bf290u;

    // 0x2bf290: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2bf290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2bf294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf298: 0xffb30150  sd          $s3, 0x150($sp)
    ctx->pc = 0x2bf298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 19));
    // 0x2bf29c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bf29cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2a0: 0xffb10130  sd          $s1, 0x130($sp)
    ctx->pc = 0x2bf2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 17));
    // 0x2bf2a4: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x2bf2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x2bf2a8: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x2bf2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x2bf2ac: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2BF2ACu;
    SET_GPR_U32(ctx, 31, 0x2BF2B4u);
    ctx->pc = 0x2BF2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2ACu;
            // 0x2bf2b0: 0xffb00120  sd          $s0, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281FE0u;
    if (runtime->hasFunction(0x281FE0u)) {
        auto targetFn = runtime->lookupFunction(0x281FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2B4u; }
        if (ctx->pc != 0x2BF2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FE0_0x281fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2B4u; }
        if (ctx->pc != 0x2BF2B4u) { return; }
    }
    ctx->pc = 0x2BF2B4u;
label_2bf2b4:
    // 0x2bf2b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bf2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2b8: 0x2a220101  slti        $v0, $s1, 0x101
    ctx->pc = 0x2bf2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x2bf2bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF2BCu;
    {
        const bool branch_taken_0x2bf2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2BCu;
            // 0x2bf2c0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2bc) {
            ctx->pc = 0x2BF2D8u;
            goto label_2bf2d8;
        }
    }
    ctx->pc = 0x2BF2C4u;
    // 0x2bf2c4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2BF2C4u;
    SET_GPR_U32(ctx, 31, 0x2BF2CCu);
    ctx->pc = 0x2BF2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2C4u;
            // 0x2bf2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2CCu; }
        if (ctx->pc != 0x2BF2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2CCu; }
        if (ctx->pc != 0x2BF2CCu) { return; }
    }
    ctx->pc = 0x2BF2CCu;
label_2bf2cc:
    // 0x2bf2cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bf2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BF2D0u;
    {
        const bool branch_taken_0x2bf2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2D0u;
            // 0x2bf2d4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2d0) {
            ctx->pc = 0x2BF2DCu;
            goto label_2bf2dc;
        }
    }
    ctx->pc = 0x2BF2D8u;
label_2bf2d8:
    // 0x2bf2d8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2bf2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf2dc:
    // 0x2bf2dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bf2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2e0: 0xafb00110  sw          $s0, 0x110($sp)
    ctx->pc = 0x2bf2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 16));
    // 0x2bf2e4: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2BF2E4u;
    SET_GPR_U32(ctx, 31, 0x2BF2ECu);
    ctx->pc = 0x2BF2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2E4u;
            // 0x2bf2e8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281FE0u;
    if (runtime->hasFunction(0x281FE0u)) {
        auto targetFn = runtime->lookupFunction(0x281FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2ECu; }
        if (ctx->pc != 0x2BF2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FE0_0x281fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2ECu; }
        if (ctx->pc != 0x2BF2ECu) { return; }
    }
    ctx->pc = 0x2BF2ECu;
label_2bf2ec:
    // 0x2bf2ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bf2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2f4: 0xc0a66ea  jal         func_299BA8
    ctx->pc = 0x2BF2F4u;
    SET_GPR_U32(ctx, 31, 0x2BF2FCu);
    ctx->pc = 0x2BF2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2F4u;
            // 0x2bf2f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299BA8u;
    if (runtime->hasFunction(0x299BA8u)) {
        auto targetFn = runtime->lookupFunction(0x299BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2FCu; }
        if (ctx->pc != 0x2BF2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299BA8_0x299ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF2FCu; }
        if (ctx->pc != 0x2BF2FCu) { return; }
    }
    ctx->pc = 0x2BF2FCu;
label_2bf2fc:
    // 0x2bf2fc: 0x12120004  beq         $s0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF2FCu;
    {
        const bool branch_taken_0x2bf2fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2BF300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF2FCu;
            // 0x2bf300: 0x93a50003  lbu         $a1, 0x3($sp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2fc) {
            ctx->pc = 0x2BF310u;
            goto label_2bf310;
        }
    }
    ctx->pc = 0x2BF304u;
    // 0x2bf304: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2BF304u;
    SET_GPR_U32(ctx, 31, 0x2BF30Cu);
    ctx->pc = 0x2BF308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF304u;
            // 0x2bf308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF30Cu; }
        if (ctx->pc != 0x2BF30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF30Cu; }
        if (ctx->pc != 0x2BF30Cu) { return; }
    }
    ctx->pc = 0x2BF30Cu;
label_2bf30c:
    // 0x2bf30c: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x2bf30cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_2bf310:
    // 0x2bf310: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x2bf310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2bf314: 0x93a40001  lbu         $a0, 0x1($sp)
    ctx->pc = 0x2bf314u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2bf318: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2bf318u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2bf31c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2bf31cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf320: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2bf320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2bf324: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x2bf324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x2bf328: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x2bf328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2bf32c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2bf32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2bf330: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2bf330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2bf334: 0xdfb30150  ld          $s3, 0x150($sp)
    ctx->pc = 0x2bf334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bf338: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bf338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bf33c: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x2bf33cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bf340: 0xdfb10130  ld          $s1, 0x130($sp)
    ctx->pc = 0x2bf340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bf344: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x2bf344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bf348: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF348u;
            // 0x2bf34c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF350u;
    ctx->pc = 0x2bf350u;
}
