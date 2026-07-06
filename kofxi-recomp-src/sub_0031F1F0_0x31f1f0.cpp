#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031F1F0
// Address: 0x31f1f0 - 0x31f300
void sub_0031F1F0_0x31f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F1F0_0x31f1f0");
#endif

    switch (ctx->pc) {
        case 0x31f200u: goto label_31f200;
        case 0x31f208u: goto label_31f208;
        case 0x31f210u: goto label_31f210;
        case 0x31f218u: goto label_31f218;
        case 0x31f220u: goto label_31f220;
        case 0x31f228u: goto label_31f228;
        case 0x31f230u: goto label_31f230;
        case 0x31f238u: goto label_31f238;
        case 0x31f270u: goto label_31f270;
        case 0x31f2a4u: goto label_31f2a4;
        case 0x31f2c0u: goto label_31f2c0;
        case 0x31f2c8u: goto label_31f2c8;
        case 0x31f2d0u: goto label_31f2d0;
        case 0x31f2d8u: goto label_31f2d8;
        case 0x31f2e0u: goto label_31f2e0;
        case 0x31f2e8u: goto label_31f2e8;
        default: break;
    }

    ctx->pc = 0x31f1f0u;

    // 0x31f1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f1f8: 0xc0540e8  jal         func_1503A0
    ctx->pc = 0x31F1F8u;
    SET_GPR_U32(ctx, 31, 0x31F200u);
    ctx->pc = 0x1503A0u;
    if (runtime->hasFunction(0x1503A0u)) {
        auto targetFn = runtime->lookupFunction(0x1503A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F200u; }
        if (ctx->pc != 0x31F200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001503A0_0x1503a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F200u; }
        if (ctx->pc != 0x31F200u) { return; }
    }
    ctx->pc = 0x31F200u;
label_31f200:
    // 0x31f200: 0xc0541e8  jal         func_1507A0
    ctx->pc = 0x31F200u;
    SET_GPR_U32(ctx, 31, 0x31F208u);
    ctx->pc = 0x1507A0u;
    if (runtime->hasFunction(0x1507A0u)) {
        auto targetFn = runtime->lookupFunction(0x1507A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F208u; }
        if (ctx->pc != 0x31F208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001507A0_0x1507a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F208u; }
        if (ctx->pc != 0x31F208u) { return; }
    }
    ctx->pc = 0x31F208u;
label_31f208:
    // 0x31f208: 0xc0c0d9c  jal         func_303670
    ctx->pc = 0x31F208u;
    SET_GPR_U32(ctx, 31, 0x31F210u);
    ctx->pc = 0x303670u;
    if (runtime->hasFunction(0x303670u)) {
        auto targetFn = runtime->lookupFunction(0x303670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F210u; }
        if (ctx->pc != 0x31F210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303670_0x303670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F210u; }
        if (ctx->pc != 0x31F210u) { return; }
    }
    ctx->pc = 0x31F210u;
label_31f210:
    // 0x31f210: 0xc05526c  jal         func_1549B0
    ctx->pc = 0x31F210u;
    SET_GPR_U32(ctx, 31, 0x31F218u);
    ctx->pc = 0x1549B0u;
    if (runtime->hasFunction(0x1549B0u)) {
        auto targetFn = runtime->lookupFunction(0x1549B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F218u; }
        if (ctx->pc != 0x31F218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001549B0_0x1549b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F218u; }
        if (ctx->pc != 0x31F218u) { return; }
    }
    ctx->pc = 0x31F218u;
label_31f218:
    // 0x31f218: 0xc0551c0  jal         func_154700
    ctx->pc = 0x31F218u;
    SET_GPR_U32(ctx, 31, 0x31F220u);
    ctx->pc = 0x154700u;
    if (runtime->hasFunction(0x154700u)) {
        auto targetFn = runtime->lookupFunction(0x154700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F220u; }
        if (ctx->pc != 0x31F220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154700_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F220u; }
        if (ctx->pc != 0x31F220u) { return; }
    }
    ctx->pc = 0x31F220u;
label_31f220:
    // 0x31f220: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x31F220u;
    SET_GPR_U32(ctx, 31, 0x31F228u);
    ctx->pc = 0x1762F0u;
    if (runtime->hasFunction(0x1762F0u)) {
        auto targetFn = runtime->lookupFunction(0x1762F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F228u; }
        if (ctx->pc != 0x31F228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001762F0_0x1762f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F228u; }
        if (ctx->pc != 0x31F228u) { return; }
    }
    ctx->pc = 0x31F228u;
label_31f228:
    // 0x31f228: 0xc05d7ac  jal         func_175EB0
    ctx->pc = 0x31F228u;
    SET_GPR_U32(ctx, 31, 0x31F230u);
    ctx->pc = 0x175EB0u;
    if (runtime->hasFunction(0x175EB0u)) {
        auto targetFn = runtime->lookupFunction(0x175EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F230u; }
        if (ctx->pc != 0x31F230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175EB0_0x175eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F230u; }
        if (ctx->pc != 0x31F230u) { return; }
    }
    ctx->pc = 0x31F230u;
label_31f230:
    // 0x31f230: 0xc06350c  jal         func_18D430
    ctx->pc = 0x31F230u;
    SET_GPR_U32(ctx, 31, 0x31F238u);
    ctx->pc = 0x18D430u;
    if (runtime->hasFunction(0x18D430u)) {
        auto targetFn = runtime->lookupFunction(0x18D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F238u; }
        if (ctx->pc != 0x31F238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D430_0x18d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F238u; }
        if (ctx->pc != 0x31F238u) { return; }
    }
    ctx->pc = 0x31F238u;
label_31f238:
    // 0x31f238: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f23c: 0x8c42e470  lw          $v0, -0x1B90($v0)
    ctx->pc = 0x31f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960240)));
    // 0x31f240: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x31F240u;
    {
        const bool branch_taken_0x31f240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f240) {
            ctx->pc = 0x31F244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31F240u;
            // 0x31f244: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31F278u;
            goto label_31f278;
        }
    }
    ctx->pc = 0x31F248u;
    // 0x31f248: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31f248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31f24c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x31f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x31f250: 0x9063dae0  lbu         $v1, -0x2520($v1)
    ctx->pc = 0x31f250u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x31f254: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x31f254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x31f258: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f25c: 0x24840450  addiu       $a0, $a0, 0x450
    ctx->pc = 0x31f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1104));
    // 0x31f260: 0x24a541f0  addiu       $a1, $a1, 0x41F0
    ctx->pc = 0x31f260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16880));
    // 0x31f264: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x31f264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x31f268: 0xc0558d4  jal         func_156350
    ctx->pc = 0x31F268u;
    SET_GPR_U32(ctx, 31, 0x31F270u);
    ctx->pc = 0x31F26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F268u;
            // 0x31f26c: 0xa043dae0  sb          $v1, -0x2520($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957792), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F270u; }
        if (ctx->pc != 0x31F270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F270u; }
        if (ctx->pc != 0x31F270u) { return; }
    }
    ctx->pc = 0x31F270u;
label_31f270:
    // 0x31f270: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31F270u;
    {
        const bool branch_taken_0x31f270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f270) {
            ctx->pc = 0x31F2C0u;
            goto label_31f2c0;
        }
    }
    ctx->pc = 0x31F278u;
label_31f278:
    // 0x31f278: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x31f278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x31f27c: 0xac439728  sw          $v1, -0x68D8($v0)
    ctx->pc = 0x31f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
    // 0x31f280: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x31f280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x31f284: 0x904295b8  lbu         $v0, -0x6A48($v0)
    ctx->pc = 0x31f284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940088)));
    // 0x31f288: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31F288u;
    {
        const bool branch_taken_0x31f288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f288) {
            ctx->pc = 0x31F2ACu;
            goto label_31f2ac;
        }
    }
    ctx->pc = 0x31F290u;
    // 0x31f290: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x31f290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x31f294: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x31f294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x31f298: 0x248407f0  addiu       $a0, $a0, 0x7F0
    ctx->pc = 0x31f298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2032));
    // 0x31f29c: 0xc0558d4  jal         func_156350
    ctx->pc = 0x31F29Cu;
    SET_GPR_U32(ctx, 31, 0x31F2A4u);
    ctx->pc = 0x31F2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F29Cu;
            // 0x31f2a0: 0x24a5ff00  addiu       $a1, $a1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2A4u; }
        if (ctx->pc != 0x31F2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2A4u; }
        if (ctx->pc != 0x31F2A4u) { return; }
    }
    ctx->pc = 0x31F2A4u;
label_31f2a4:
    // 0x31f2a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31F2A4u;
    {
        const bool branch_taken_0x31f2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f2a4) {
            ctx->pc = 0x31F2C0u;
            goto label_31f2c0;
        }
    }
    ctx->pc = 0x31F2ACu;
label_31f2ac:
    // 0x31f2ac: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x31f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x31f2b0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x31f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x31f2b4: 0x2484ff50  addiu       $a0, $a0, -0xB0
    ctx->pc = 0x31f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967120));
    // 0x31f2b8: 0xc0558d4  jal         func_156350
    ctx->pc = 0x31F2B8u;
    SET_GPR_U32(ctx, 31, 0x31F2C0u);
    ctx->pc = 0x31F2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2B8u;
            // 0x31f2bc: 0x24a579c0  addiu       $a1, $a1, 0x79C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2C0u; }
        if (ctx->pc != 0x31F2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2C0u; }
        if (ctx->pc != 0x31F2C0u) { return; }
    }
    ctx->pc = 0x31F2C0u;
label_31f2c0:
    // 0x31f2c0: 0xc055684  jal         func_155A10
    ctx->pc = 0x31F2C0u;
    SET_GPR_U32(ctx, 31, 0x31F2C8u);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2C8u; }
        if (ctx->pc != 0x31F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2C8u; }
        if (ctx->pc != 0x31F2C8u) { return; }
    }
    ctx->pc = 0x31F2C8u;
label_31f2c8:
    // 0x31f2c8: 0xc064f58  jal         func_193D60
    ctx->pc = 0x31F2C8u;
    SET_GPR_U32(ctx, 31, 0x31F2D0u);
    ctx->pc = 0x193D60u;
    if (runtime->hasFunction(0x193D60u)) {
        auto targetFn = runtime->lookupFunction(0x193D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2D0u; }
        if (ctx->pc != 0x31F2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193D60_0x193d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2D0u; }
        if (ctx->pc != 0x31F2D0u) { return; }
    }
    ctx->pc = 0x31F2D0u;
label_31f2d0:
    // 0x31f2d0: 0xc05ce28  jal         func_1738A0
    ctx->pc = 0x31F2D0u;
    SET_GPR_U32(ctx, 31, 0x31F2D8u);
    ctx->pc = 0x1738A0u;
    if (runtime->hasFunction(0x1738A0u)) {
        auto targetFn = runtime->lookupFunction(0x1738A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2D8u; }
        if (ctx->pc != 0x31F2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001738A0_0x1738a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2D8u; }
        if (ctx->pc != 0x31F2D8u) { return; }
    }
    ctx->pc = 0x31F2D8u;
label_31f2d8:
    // 0x31f2d8: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x31F2D8u;
    SET_GPR_U32(ctx, 31, 0x31F2E0u);
    ctx->pc = 0x1717D0u;
    if (runtime->hasFunction(0x1717D0u)) {
        auto targetFn = runtime->lookupFunction(0x1717D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2E0u; }
        if (ctx->pc != 0x31F2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717D0_0x1717d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2E0u; }
        if (ctx->pc != 0x31F2E0u) { return; }
    }
    ctx->pc = 0x31F2E0u;
label_31f2e0:
    // 0x31f2e0: 0xc058f14  jal         func_163C50
    ctx->pc = 0x31F2E0u;
    SET_GPR_U32(ctx, 31, 0x31F2E8u);
    ctx->pc = 0x163C50u;
    if (runtime->hasFunction(0x163C50u)) {
        auto targetFn = runtime->lookupFunction(0x163C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2E8u; }
        if (ctx->pc != 0x31F2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00163C50_0x163c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2E8u; }
        if (ctx->pc != 0x31F2E8u) { return; }
    }
    ctx->pc = 0x31F2E8u;
label_31f2e8:
    // 0x31f2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x31F2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2ECu;
            // 0x31f2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31F2F4u;
    // 0x31f2f4: 0x0  nop
    ctx->pc = 0x31f2f4u;
    // NOP
    // 0x31f2f8: 0x0  nop
    ctx->pc = 0x31f2f8u;
    // NOP
    // 0x31f2fc: 0x0  nop
    ctx->pc = 0x31f2fcu;
    // NOP
    ctx->pc = 0x31f300u;
}
