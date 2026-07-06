#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003542B0
// Address: 0x3542b0 - 0x3543f0
void sub_003542B0_0x3542b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003542B0_0x3542b0");
#endif

    switch (ctx->pc) {
        case 0x3542f0u: goto label_3542f0;
        case 0x354300u: goto label_354300;
        case 0x35430cu: goto label_35430c;
        case 0x354314u: goto label_354314;
        case 0x35431cu: goto label_35431c;
        case 0x354324u: goto label_354324;
        case 0x354348u: goto label_354348;
        case 0x354350u: goto label_354350;
        case 0x354360u: goto label_354360;
        case 0x354370u: goto label_354370;
        case 0x35437cu: goto label_35437c;
        case 0x354384u: goto label_354384;
        case 0x35438cu: goto label_35438c;
        case 0x354394u: goto label_354394;
        case 0x3543b8u: goto label_3543b8;
        case 0x3543c0u: goto label_3543c0;
        default: break;
    }

    ctx->pc = 0x3542b0u;

    // 0x3542b0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3542b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3542b4: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x3542b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x3542b8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3542b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3542bc: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3542BCu;
    {
        const bool branch_taken_0x3542bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3542bc) {
            ctx->pc = 0x3542C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3542BCu;
            // 0x3542c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3542E4u;
            goto label_3542e4;
        }
    }
    ctx->pc = 0x3542C4u;
    // 0x3542c4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3542c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3542c8: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x3542c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x3542cc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3542ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3542d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3542D0u;
    {
        const bool branch_taken_0x3542d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3542d0) {
            ctx->pc = 0x3542E0u;
            goto label_3542e0;
        }
    }
    ctx->pc = 0x3542D8u;
    // 0x3542d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3542D8u;
    {
        const bool branch_taken_0x3542d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3542DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3542D8u;
            // 0x3542dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3542d8) {
            ctx->pc = 0x3542E4u;
            goto label_3542e4;
        }
    }
    ctx->pc = 0x3542E0u;
label_3542e0:
    // 0x3542e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3542e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3542e4:
    // 0x3542e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3542E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3542ECu;
    // 0x3542ec: 0x0  nop
    ctx->pc = 0x3542ecu;
    // NOP
label_3542f0:
    // 0x3542f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3542f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3542f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3542f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3542f8: 0xc0570bc  jal         func_15C2F0
    ctx->pc = 0x3542F8u;
    SET_GPR_U32(ctx, 31, 0x354300u);
    ctx->pc = 0x15C2F0u;
    if (runtime->hasFunction(0x15C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354300u; }
        if (ctx->pc != 0x354300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C2F0_0x15c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354300u; }
        if (ctx->pc != 0x354300u) { return; }
    }
    ctx->pc = 0x354300u;
label_354300:
    // 0x354300: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x354300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x354304: 0xc0558e0  jal         func_156380
    ctx->pc = 0x354304u;
    SET_GPR_U32(ctx, 31, 0x35430Cu);
    ctx->pc = 0x354308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354304u;
            // 0x354308: 0x2484da70  addiu       $a0, $a0, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35430Cu; }
        if (ctx->pc != 0x35430Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35430Cu; }
        if (ctx->pc != 0x35430Cu) { return; }
    }
    ctx->pc = 0x35430Cu;
label_35430c:
    // 0x35430c: 0xc052c0c  jal         func_14B030
    ctx->pc = 0x35430Cu;
    SET_GPR_U32(ctx, 31, 0x354314u);
    ctx->pc = 0x14B030u;
    if (runtime->hasFunction(0x14B030u)) {
        auto targetFn = runtime->lookupFunction(0x14B030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354314u; }
        if (ctx->pc != 0x354314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B030_0x14b030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354314u; }
        if (ctx->pc != 0x354314u) { return; }
    }
    ctx->pc = 0x354314u;
label_354314:
    // 0x354314: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x354314u;
    SET_GPR_U32(ctx, 31, 0x35431Cu);
    ctx->pc = 0x33BA10u;
    if (runtime->hasFunction(0x33BA10u)) {
        auto targetFn = runtime->lookupFunction(0x33BA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35431Cu; }
        if (ctx->pc != 0x35431Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BA10_0x33ba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35431Cu; }
        if (ctx->pc != 0x35431Cu) { return; }
    }
    ctx->pc = 0x35431Cu;
label_35431c:
    // 0x35431c: 0xc0d4d40  jal         func_353500
    ctx->pc = 0x35431Cu;
    SET_GPR_U32(ctx, 31, 0x354324u);
    ctx->pc = 0x353500u;
    if (runtime->hasFunction(0x353500u)) {
        auto targetFn = runtime->lookupFunction(0x353500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354324u; }
        if (ctx->pc != 0x354324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00353500_0x353500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354324u; }
        if (ctx->pc != 0x354324u) { return; }
    }
    ctx->pc = 0x354324u;
label_354324:
    // 0x354324: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354328: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x354328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x35432c: 0x8042bed0  lb          $v0, -0x4130($v0)
    ctx->pc = 0x35432cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950608)));
    // 0x354330: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x354330u;
    {
        const bool branch_taken_0x354330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x354330) {
            ctx->pc = 0x354348u;
            goto label_354348;
        }
    }
    ctx->pc = 0x354338u;
    // 0x354338: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x354338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x35433c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354340: 0xc04edc8  jal         func_13B720
    ctx->pc = 0x354340u;
    SET_GPR_U32(ctx, 31, 0x354348u);
    ctx->pc = 0x354344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354340u;
            // 0x354344: 0xa043beda  sb          $v1, -0x4126($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950618), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B720u;
    if (runtime->hasFunction(0x13B720u)) {
        auto targetFn = runtime->lookupFunction(0x13B720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354348u; }
        if (ctx->pc != 0x354348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B720_0x13b720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354348u; }
        if (ctx->pc != 0x354348u) { return; }
    }
    ctx->pc = 0x354348u;
label_354348:
    // 0x354348: 0xc0c1650  jal         func_305940
    ctx->pc = 0x354348u;
    SET_GPR_U32(ctx, 31, 0x354350u);
    ctx->pc = 0x305940u;
    if (runtime->hasFunction(0x305940u)) {
        auto targetFn = runtime->lookupFunction(0x305940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354350u; }
        if (ctx->pc != 0x354350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305940_0x305940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354350u; }
        if (ctx->pc != 0x354350u) { return; }
    }
    ctx->pc = 0x354350u;
label_354350:
    // 0x354350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354354: 0x3e00008  jr          $ra
    ctx->pc = 0x354354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x354354u;
            // 0x354358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35435Cu;
    // 0x35435c: 0x0  nop
    ctx->pc = 0x35435cu;
    // NOP
label_354360:
    // 0x354360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354368: 0xc0570bc  jal         func_15C2F0
    ctx->pc = 0x354368u;
    SET_GPR_U32(ctx, 31, 0x354370u);
    ctx->pc = 0x15C2F0u;
    if (runtime->hasFunction(0x15C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354370u; }
        if (ctx->pc != 0x354370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C2F0_0x15c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354370u; }
        if (ctx->pc != 0x354370u) { return; }
    }
    ctx->pc = 0x354370u;
label_354370:
    // 0x354370: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x354370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x354374: 0xc0558e0  jal         func_156380
    ctx->pc = 0x354374u;
    SET_GPR_U32(ctx, 31, 0x35437Cu);
    ctx->pc = 0x354378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x354374u;
            // 0x354378: 0x2484da70  addiu       $a0, $a0, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35437Cu; }
        if (ctx->pc != 0x35437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35437Cu; }
        if (ctx->pc != 0x35437Cu) { return; }
    }
    ctx->pc = 0x35437Cu;
label_35437c:
    // 0x35437c: 0xc052c0c  jal         func_14B030
    ctx->pc = 0x35437Cu;
    SET_GPR_U32(ctx, 31, 0x354384u);
    ctx->pc = 0x14B030u;
    if (runtime->hasFunction(0x14B030u)) {
        auto targetFn = runtime->lookupFunction(0x14B030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354384u; }
        if (ctx->pc != 0x354384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B030_0x14b030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354384u; }
        if (ctx->pc != 0x354384u) { return; }
    }
    ctx->pc = 0x354384u;
label_354384:
    // 0x354384: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x354384u;
    SET_GPR_U32(ctx, 31, 0x35438Cu);
    ctx->pc = 0x33BA10u;
    if (runtime->hasFunction(0x33BA10u)) {
        auto targetFn = runtime->lookupFunction(0x33BA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35438Cu; }
        if (ctx->pc != 0x35438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BA10_0x33ba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35438Cu; }
        if (ctx->pc != 0x35438Cu) { return; }
    }
    ctx->pc = 0x35438Cu;
label_35438c:
    // 0x35438c: 0xc0d4da8  jal         func_3536A0
    ctx->pc = 0x35438Cu;
    SET_GPR_U32(ctx, 31, 0x354394u);
    ctx->pc = 0x3536A0u;
    if (runtime->hasFunction(0x3536A0u)) {
        auto targetFn = runtime->lookupFunction(0x3536A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354394u; }
        if (ctx->pc != 0x354394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003536A0_0x3536a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x354394u; }
        if (ctx->pc != 0x354394u) { return; }
    }
    ctx->pc = 0x354394u;
label_354394:
    // 0x354394: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x354394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x354398: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x354398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x35439c: 0x8042bed0  lb          $v0, -0x4130($v0)
    ctx->pc = 0x35439cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950608)));
    // 0x3543a0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3543A0u;
    {
        const bool branch_taken_0x3543a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3543a0) {
            ctx->pc = 0x3543B8u;
            goto label_3543b8;
        }
    }
    ctx->pc = 0x3543A8u;
    // 0x3543a8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3543a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3543ac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3543acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3543b0: 0xc04edc8  jal         func_13B720
    ctx->pc = 0x3543B0u;
    SET_GPR_U32(ctx, 31, 0x3543B8u);
    ctx->pc = 0x3543B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3543B0u;
            // 0x3543b4: 0xa043beda  sb          $v1, -0x4126($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294950618), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B720u;
    if (runtime->hasFunction(0x13B720u)) {
        auto targetFn = runtime->lookupFunction(0x13B720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3543B8u; }
        if (ctx->pc != 0x3543B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B720_0x13b720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3543B8u; }
        if (ctx->pc != 0x3543B8u) { return; }
    }
    ctx->pc = 0x3543B8u;
label_3543b8:
    // 0x3543b8: 0xc0c1650  jal         func_305940
    ctx->pc = 0x3543B8u;
    SET_GPR_U32(ctx, 31, 0x3543C0u);
    ctx->pc = 0x305940u;
    if (runtime->hasFunction(0x305940u)) {
        auto targetFn = runtime->lookupFunction(0x305940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3543C0u; }
        if (ctx->pc != 0x3543C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305940_0x305940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3543C0u; }
        if (ctx->pc != 0x3543C0u) { return; }
    }
    ctx->pc = 0x3543C0u;
label_3543c0:
    // 0x3543c0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3543c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3543c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3543c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3543c8: 0x90659720  lbu         $a1, -0x68E0($v1)
    ctx->pc = 0x3543c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x3543cc: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x3543ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x3543d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3543d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3543d4: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x3543d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x3543d8: 0xa064dad8  sb          $a0, -0x2528($v1)
    ctx->pc = 0x3543d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957784), (uint8_t)GPR_U32(ctx, 4));
    // 0x3543dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3543dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3543e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3543E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3543E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3543E0u;
            // 0x3543e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3543E8u;
    // 0x3543e8: 0x0  nop
    ctx->pc = 0x3543e8u;
    // NOP
    // 0x3543ec: 0x0  nop
    ctx->pc = 0x3543ecu;
    // NOP
    ctx->pc = 0x3543f0u;
}
