#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010E1E0
// Address: 0x10e1e0 - 0x10e3b8
void sub_0010E1E0_0x10e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E1E0_0x10e1e0");
#endif

    switch (ctx->pc) {
        case 0x10e220u: goto label_10e220;
        case 0x10e28cu: goto label_10e28c;
        case 0x10e2a4u: goto label_10e2a4;
        case 0x10e2bcu: goto label_10e2bc;
        case 0x10e2f0u: goto label_10e2f0;
        case 0x10e310u: goto label_10e310;
        case 0x10e340u: goto label_10e340;
        case 0x10e358u: goto label_10e358;
        case 0x10e398u: goto label_10e398;
        default: break;
    }

    ctx->pc = 0x10e1e0u;

    // 0x10e1e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10e1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e1e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10e1e8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x10e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10e1ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e1f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10e1f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10e1f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x10e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x10e1fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x10e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10e200: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10e204: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E204u;
    {
        const bool branch_taken_0x10e204 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10E208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E204u;
            // 0x10e208: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e204) {
            ctx->pc = 0x10E214u;
            goto label_10e214;
        }
    }
    ctx->pc = 0x10E20Cu;
    // 0x10e20c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x10e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x10e210: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x10e210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_10e214:
    // 0x10e214: 0x3e00008  jr          $ra
    ctx->pc = 0x10E214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E21Cu;
    // 0x10e21c: 0x0  nop
    ctx->pc = 0x10e21cu;
    // NOP
label_10e220:
    // 0x10e220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e224: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10e228: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e230: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10e230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10e234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10e238: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10e238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e23c: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x10E23Cu;
    {
        const bool branch_taken_0x10e23c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E23Cu;
            // 0x10e240: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e23c) {
            ctx->pc = 0x10E32Cu;
            goto label_10e32c;
        }
    }
    ctx->pc = 0x10E244u;
    // 0x10e244: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x10e244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10e248: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E248u;
    {
        const bool branch_taken_0x10e248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E248u;
            // 0x10e24c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e248) {
            ctx->pc = 0x10E260u;
            goto label_10e260;
        }
    }
    ctx->pc = 0x10E250u;
    // 0x10e250: 0x1082004a  beq         $a0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x10E250u;
    {
        const bool branch_taken_0x10e250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E250u;
            // 0x10e254: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e250) {
            ctx->pc = 0x10E37Cu;
            goto label_10e37c;
        }
    }
    ctx->pc = 0x10E258u;
    // 0x10e258: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x10E258u;
    {
        const bool branch_taken_0x10e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E258u;
            // 0x10e25c: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e258) {
            ctx->pc = 0x10E3A4u;
            goto label_10e3a4;
        }
    }
    ctx->pc = 0x10E260u;
label_10e260:
    // 0x10e260: 0x1880004f  blez        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x10E260u;
    {
        const bool branch_taken_0x10e260 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10E264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E260u;
            // 0x10e264: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e260) {
            ctx->pc = 0x10E3A0u;
            goto label_10e3a0;
        }
    }
    ctx->pc = 0x10E268u;
    // 0x10e268: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x10E268u;
    {
        const bool branch_taken_0x10e268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e268) {
            ctx->pc = 0x10E26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10E268u;
            // 0x10e26c: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10E2D0u;
            goto label_10e2d0;
        }
    }
    ctx->pc = 0x10E270u;
    // 0x10e270: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10e274: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10e274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10e278: 0x2c420141  sltiu       $v0, $v0, 0x141
    ctx->pc = 0x10e278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x10e27c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E27Cu;
    {
        const bool branch_taken_0x10e27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E27Cu;
            // 0x10e280: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e27c) {
            ctx->pc = 0x10E28Cu;
            goto label_10e28c;
        }
    }
    ctx->pc = 0x10E284u;
    // 0x10e284: 0xc043e72  jal         func_10F9C8
    ctx->pc = 0x10E284u;
    SET_GPR_U32(ctx, 31, 0x10E28Cu);
    ctx->pc = 0x10E288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E284u;
            // 0x10e288: 0x2484a538  addiu       $a0, $a0, -0x5AC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9C8u;
    if (runtime->hasFunction(0x10F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E28Cu; }
        if (ctx->pc != 0x10E28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9C8_0x10f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E28Cu; }
        if (ctx->pc != 0x10E28Cu) { return; }
    }
    ctx->pc = 0x10E28Cu;
label_10e28c:
    // 0x10e28c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10e290: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x10e290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x10e294: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x10e294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x10e298: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10e298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10e29c: 0xc043818  jal         func_10E060
    ctx->pc = 0x10E29Cu;
    SET_GPR_U32(ctx, 31, 0x10E2A4u);
    ctx->pc = 0x10E2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E29Cu;
            // 0x10e2a0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E060u;
    if (runtime->hasFunction(0x10E060u)) {
        auto targetFn = runtime->lookupFunction(0x10E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E2A4u; }
        if (ctx->pc != 0x10E2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E060_0x10e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E2A4u; }
        if (ctx->pc != 0x10E2A4u) { return; }
    }
    ctx->pc = 0x10E2A4u;
label_10e2a4:
    // 0x10e2a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e2a8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E2A8u;
    {
        const bool branch_taken_0x10e2a8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x10e2a8) {
            ctx->pc = 0x10E2BCu;
            goto label_10e2bc;
        }
    }
    ctx->pc = 0x10E2B0u;
    // 0x10e2b0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x10e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x10e2b4: 0xc043e72  jal         func_10F9C8
    ctx->pc = 0x10E2B4u;
    SET_GPR_U32(ctx, 31, 0x10E2BCu);
    ctx->pc = 0x10E2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2B4u;
            // 0x10e2b8: 0x2484a560  addiu       $a0, $a0, -0x5AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9C8u;
    if (runtime->hasFunction(0x10F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E2BCu; }
        if (ctx->pc != 0x10E2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9C8_0x10f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E2BCu; }
        if (ctx->pc != 0x10E2BCu) { return; }
    }
    ctx->pc = 0x10E2BCu;
label_10e2bc:
    // 0x10e2bc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10e2c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10e2c4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x10e2c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10E2C8u;
    {
        const bool branch_taken_0x10e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2C8u;
            // 0x10e2cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2c8) {
            ctx->pc = 0x10E3A0u;
            goto label_10e3a0;
        }
    }
    ctx->pc = 0x10E2D0u;
label_10e2d0:
    // 0x10e2d0: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x10e2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10e2d4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x10e2d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10e2d8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x10e2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10e2dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10E2DCu;
    {
        const bool branch_taken_0x10e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2DCu;
            // 0x10e2e0: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2dc) {
            ctx->pc = 0x10E320u;
            goto label_10e320;
        }
    }
    ctx->pc = 0x10E2E4u;
    // 0x10e2e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10E2E4u;
    {
        const bool branch_taken_0x10e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E2E4u;
            // 0x10e2e8: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2e4) {
            ctx->pc = 0x10E2F4u;
            goto label_10e2f4;
        }
    }
    ctx->pc = 0x10E2ECu;
    // 0x10e2ec: 0x0  nop
    ctx->pc = 0x10e2ecu;
    // NOP
label_10e2f0:
    // 0x10e2f0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x10e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_10e2f4:
    // 0x10e2f4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x10e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10e2f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10e2f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e2fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10e2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10e300: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x10e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10e304: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x10e304u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10e308: 0xc043868  jal         func_10E1A0
    ctx->pc = 0x10E308u;
    SET_GPR_U32(ctx, 31, 0x10E310u);
    ctx->pc = 0x10E30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E308u;
            // 0x10e30c: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E1A0u;
    if (runtime->hasFunction(0x10E1A0u)) {
        auto targetFn = runtime->lookupFunction(0x10E1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E310u; }
        if (ctx->pc != 0x10E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E1A0_0x10e1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E310u; }
        if (ctx->pc != 0x10E310u) { return; }
    }
    ctx->pc = 0x10E310u;
label_10e310:
    // 0x10e310: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x10e310u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10e314: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x10e314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10e318: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x10E318u;
    {
        const bool branch_taken_0x10e318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e318) {
            ctx->pc = 0x10E31Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10E318u;
            // 0x10e31c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10E2F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e2f0;
        }
    }
    ctx->pc = 0x10E320u;
label_10e320:
    // 0x10e320: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10e320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10e324: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10E324u;
    {
        const bool branch_taken_0x10e324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E324u;
            // 0x10e328: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e324) {
            ctx->pc = 0x10E3A0u;
            goto label_10e3a0;
        }
    }
    ctx->pc = 0x10E32Cu;
label_10e32c:
    // 0x10e32c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x10e32cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10e330: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10e330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10e334: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x10e334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10e338: 0xc043826  jal         func_10E098
    ctx->pc = 0x10E338u;
    SET_GPR_U32(ctx, 31, 0x10E340u);
    ctx->pc = 0x10E33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E338u;
            // 0x10e33c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E098u;
    if (runtime->hasFunction(0x10E098u)) {
        auto targetFn = runtime->lookupFunction(0x10E098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E340u; }
        if (ctx->pc != 0x10E340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E098_0x10e098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E340u; }
        if (ctx->pc != 0x10E340u) { return; }
    }
    ctx->pc = 0x10E340u;
label_10e340:
    // 0x10e340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10e340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e344: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10E344u;
    {
        const bool branch_taken_0x10e344 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x10e344) {
            ctx->pc = 0x10E348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10E344u;
            // 0x10e348: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10E360u;
            goto label_10e360;
        }
    }
    ctx->pc = 0x10E34Cu;
    // 0x10e34c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x10e34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x10e350: 0xc043e72  jal         func_10F9C8
    ctx->pc = 0x10E350u;
    SET_GPR_U32(ctx, 31, 0x10E358u);
    ctx->pc = 0x10E354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E350u;
            // 0x10e354: 0x2484a578  addiu       $a0, $a0, -0x5A88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9C8u;
    if (runtime->hasFunction(0x10F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E358u; }
        if (ctx->pc != 0x10E358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9C8_0x10f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E358u; }
        if (ctx->pc != 0x10E358u) { return; }
    }
    ctx->pc = 0x10E358u;
label_10e358:
    // 0x10e358: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10E358u;
    {
        const bool branch_taken_0x10e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e358) {
            ctx->pc = 0x10E398u;
            goto label_10e398;
        }
    }
    ctx->pc = 0x10E360u;
label_10e360:
    // 0x10e360: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10e360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10e364: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10e368: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x10e368u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10e36c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x10e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x10e370: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x10e370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x10e374: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10E374u;
    {
        const bool branch_taken_0x10e374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E374u;
            // 0x10e378: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e374) {
            ctx->pc = 0x10E3A0u;
            goto label_10e3a0;
        }
    }
    ctx->pc = 0x10E37Cu;
label_10e37c:
    // 0x10e37c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10e380: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E380u;
    {
        const bool branch_taken_0x10e380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e380) {
            ctx->pc = 0x10E398u;
            goto label_10e398;
        }
    }
    ctx->pc = 0x10E388u;
    // 0x10e388: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x10e388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x10e38c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x10e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10e390: 0xc043e72  jal         func_10F9C8
    ctx->pc = 0x10E390u;
    SET_GPR_U32(ctx, 31, 0x10E398u);
    ctx->pc = 0x10E394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E390u;
            // 0x10e394: 0x2484a590  addiu       $a0, $a0, -0x5A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9C8u;
    if (runtime->hasFunction(0x10F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E398u; }
        if (ctx->pc != 0x10E398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9C8_0x10f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E398u; }
        if (ctx->pc != 0x10E398u) { return; }
    }
    ctx->pc = 0x10E398u;
label_10e398:
    // 0x10e398: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10e398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x10e39c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10e39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10e3a0:
    // 0x10e3a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e3a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10e3a4:
    // 0x10e3a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e3a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e3a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10E3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E3ACu;
            // 0x10e3b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E3B4u;
    // 0x10e3b4: 0x0  nop
    ctx->pc = 0x10e3b4u;
    // NOP
    ctx->pc = 0x10e3b8u;
}
