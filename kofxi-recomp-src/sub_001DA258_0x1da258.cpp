#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA258
// Address: 0x1da258 - 0x1da2c8
void sub_001DA258_0x1da258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA258_0x1da258");
#endif

    switch (ctx->pc) {
        case 0x1da258u: goto label_1da258;
        case 0x1da25cu: goto label_1da25c;
        case 0x1da260u: goto label_1da260;
        case 0x1da264u: goto label_1da264;
        case 0x1da268u: goto label_1da268;
        case 0x1da26cu: goto label_1da26c;
        case 0x1da270u: goto label_1da270;
        case 0x1da274u: goto label_1da274;
        case 0x1da278u: goto label_1da278;
        case 0x1da27cu: goto label_1da27c;
        case 0x1da280u: goto label_1da280;
        case 0x1da284u: goto label_1da284;
        case 0x1da288u: goto label_1da288;
        case 0x1da28cu: goto label_1da28c;
        case 0x1da290u: goto label_1da290;
        case 0x1da294u: goto label_1da294;
        case 0x1da298u: goto label_1da298;
        case 0x1da29cu: goto label_1da29c;
        case 0x1da2a0u: goto label_1da2a0;
        case 0x1da2a4u: goto label_1da2a4;
        case 0x1da2a8u: goto label_1da2a8;
        case 0x1da2acu: goto label_1da2ac;
        case 0x1da2b0u: goto label_1da2b0;
        case 0x1da2b4u: goto label_1da2b4;
        case 0x1da2b8u: goto label_1da2b8;
        case 0x1da2bcu: goto label_1da2bc;
        case 0x1da2c0u: goto label_1da2c0;
        case 0x1da2c4u: goto label_1da2c4;
        default: break;
    }

    ctx->pc = 0x1da258u;

label_1da258:
    // 0x1da258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1da25c:
    // 0x1da25c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1da260:
    // 0x1da260: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1da260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1da264:
    // 0x1da264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da268:
    // 0x1da268: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1da268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1da26c:
    // 0x1da26c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1da26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da270:
    // 0x1da270: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1da270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1da274:
    // 0x1da274: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1da274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da278:
    // 0x1da278: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1da278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1da27c:
    // 0x1da27c: 0x40f809  jalr        $v0
label_1da280:
    if (ctx->pc == 0x1DA280u) {
        ctx->pc = 0x1DA280u;
            // 0x1da280: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA284u;
        goto label_1da284;
    }
    ctx->pc = 0x1DA27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA284u);
        ctx->pc = 0x1DA280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA27Cu;
            // 0x1da280: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA284u; }
            if (ctx->pc != 0x1DA284u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA284u;
label_1da284:
    // 0x1da284: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1da284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da288:
    // 0x1da288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da28c:
    // 0x1da28c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1da28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da290:
    // 0x1da290: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1da290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1da294:
    // 0x1da294: 0x40f809  jalr        $v0
label_1da298:
    if (ctx->pc == 0x1DA298u) {
        ctx->pc = 0x1DA298u;
            // 0x1da298: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA29Cu;
        goto label_1da29c;
    }
    ctx->pc = 0x1DA294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA29Cu);
        ctx->pc = 0x1DA298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA294u;
            // 0x1da298: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA29Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA29Cu; }
            if (ctx->pc != 0x1DA29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DA29Cu;
label_1da29c:
    // 0x1da29c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1da29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1da2a0:
    // 0x1da2a0: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1da2a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1da2a4:
    // 0x1da2a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1da2a8:
    if (ctx->pc == 0x1DA2A8u) {
        ctx->pc = 0x1DA2A8u;
            // 0x1da2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2ACu;
        goto label_1da2ac;
    }
    ctx->pc = 0x1DA2A4u;
    {
        const bool branch_taken_0x1da2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2A4u;
            // 0x1da2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da2a4) {
            ctx->pc = 0x1DA2B4u;
            goto label_1da2b4;
        }
    }
    ctx->pc = 0x1DA2ACu;
label_1da2ac:
    // 0x1da2ac: 0xc0762c0  jal         func_1D8B00
label_1da2b0:
    if (ctx->pc == 0x1DA2B0u) {
        ctx->pc = 0x1DA2B0u;
            // 0x1da2b0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1DA2B4u;
        goto label_1da2b4;
    }
    ctx->pc = 0x1DA2ACu;
    SET_GPR_U32(ctx, 31, 0x1DA2B4u);
    ctx->pc = 0x1DA2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2ACu;
            // 0x1da2b0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (runtime->hasFunction(0x1D8B00u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2B4u; }
        if (ctx->pc != 0x1DA2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B00_0x1d8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2B4u; }
        if (ctx->pc != 0x1DA2B4u) { return; }
    }
    ctx->pc = 0x1DA2B4u;
label_1da2b4:
    // 0x1da2b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1da2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1da2b8:
    // 0x1da2b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1da2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1da2bc:
    // 0x1da2bc: 0x3e00008  jr          $ra
label_1da2c0:
    if (ctx->pc == 0x1DA2C0u) {
        ctx->pc = 0x1DA2C0u;
            // 0x1da2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1DA2C4u;
        goto label_1da2c4;
    }
    ctx->pc = 0x1DA2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2BCu;
            // 0x1da2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA2C4u;
label_1da2c4:
    // 0x1da2c4: 0x0  nop
    ctx->pc = 0x1da2c4u;
    // NOP
    ctx->pc = 0x1da2c8u;
}
