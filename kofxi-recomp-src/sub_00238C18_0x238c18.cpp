#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238C18
// Address: 0x238c18 - 0x238cd0
void sub_00238C18_0x238c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238C18_0x238c18");
#endif

    switch (ctx->pc) {
        case 0x238c18u: goto label_238c18;
        case 0x238c1cu: goto label_238c1c;
        case 0x238c20u: goto label_238c20;
        case 0x238c24u: goto label_238c24;
        case 0x238c28u: goto label_238c28;
        case 0x238c2cu: goto label_238c2c;
        case 0x238c30u: goto label_238c30;
        case 0x238c34u: goto label_238c34;
        case 0x238c38u: goto label_238c38;
        case 0x238c3cu: goto label_238c3c;
        case 0x238c40u: goto label_238c40;
        case 0x238c44u: goto label_238c44;
        case 0x238c48u: goto label_238c48;
        case 0x238c4cu: goto label_238c4c;
        case 0x238c50u: goto label_238c50;
        case 0x238c54u: goto label_238c54;
        case 0x238c58u: goto label_238c58;
        case 0x238c5cu: goto label_238c5c;
        case 0x238c60u: goto label_238c60;
        case 0x238c64u: goto label_238c64;
        case 0x238c68u: goto label_238c68;
        case 0x238c6cu: goto label_238c6c;
        case 0x238c70u: goto label_238c70;
        case 0x238c74u: goto label_238c74;
        case 0x238c78u: goto label_238c78;
        case 0x238c7cu: goto label_238c7c;
        case 0x238c80u: goto label_238c80;
        case 0x238c84u: goto label_238c84;
        case 0x238c88u: goto label_238c88;
        case 0x238c8cu: goto label_238c8c;
        case 0x238c90u: goto label_238c90;
        case 0x238c94u: goto label_238c94;
        case 0x238c98u: goto label_238c98;
        case 0x238c9cu: goto label_238c9c;
        case 0x238ca0u: goto label_238ca0;
        case 0x238ca4u: goto label_238ca4;
        case 0x238ca8u: goto label_238ca8;
        case 0x238cacu: goto label_238cac;
        case 0x238cb0u: goto label_238cb0;
        case 0x238cb4u: goto label_238cb4;
        case 0x238cb8u: goto label_238cb8;
        case 0x238cbcu: goto label_238cbc;
        case 0x238cc0u: goto label_238cc0;
        case 0x238cc4u: goto label_238cc4;
        case 0x238cc8u: goto label_238cc8;
        case 0x238cccu: goto label_238ccc;
        default: break;
    }

    ctx->pc = 0x238c18u;

label_238c18:
    // 0x238c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_238c1c:
    // 0x238c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238c20:
    // 0x238c20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x238c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_238c24:
    // 0x238c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238c28:
    // 0x238c28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x238c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_238c2c:
    // 0x238c2c: 0xc08c682  jal         func_231A08
label_238c30:
    if (ctx->pc == 0x238C30u) {
        ctx->pc = 0x238C30u;
            // 0x238c30: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x238C34u;
        goto label_238c34;
    }
    ctx->pc = 0x238C2Cu;
    SET_GPR_U32(ctx, 31, 0x238C34u);
    ctx->pc = 0x238C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238C2Cu;
            // 0x238c30: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C34u; }
        if (ctx->pc != 0x238C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C34u; }
        if (ctx->pc != 0x238C34u) { return; }
    }
    ctx->pc = 0x238C34u;
label_238c34:
    // 0x238c34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238c38:
    // 0x238c38: 0x8e024e3c  lw          $v0, 0x4E3C($s0)
    ctx->pc = 0x238c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20028)));
label_238c3c:
    // 0x238c3c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x238c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_238c40:
    // 0x238c40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_238c44:
    if (ctx->pc == 0x238C44u) {
        ctx->pc = 0x238C44u;
            // 0x238c44: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x238C48u;
        goto label_238c48;
    }
    ctx->pc = 0x238C40u;
    {
        const bool branch_taken_0x238c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238C40u;
            // 0x238c44: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c40) {
            ctx->pc = 0x238C68u;
            goto label_238c68;
        }
    }
    ctx->pc = 0x238C48u;
label_238c48:
    // 0x238c48: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x238c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_238c4c:
    // 0x238c4c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x238c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_238c50:
    // 0x238c50: 0x24a54fc0  addiu       $a1, $a1, 0x4FC0
    ctx->pc = 0x238c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20416));
label_238c54:
    // 0x238c54: 0xc08b5ac  jal         func_22D6B0
label_238c58:
    if (ctx->pc == 0x238C58u) {
        ctx->pc = 0x238C58u;
            // 0x238c58: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x238C5Cu;
        goto label_238c5c;
    }
    ctx->pc = 0x238C54u;
    SET_GPR_U32(ctx, 31, 0x238C5Cu);
    ctx->pc = 0x238C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238C54u;
            // 0x238c58: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C5Cu; }
        if (ctx->pc != 0x238C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C5Cu; }
        if (ctx->pc != 0x238C5Cu) { return; }
    }
    ctx->pc = 0x238C5Cu;
label_238c5c:
    // 0x238c5c: 0xc08e3e0  jal         func_238F80
label_238c60:
    if (ctx->pc == 0x238C60u) {
        ctx->pc = 0x238C60u;
            // 0x238c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238C64u;
        goto label_238c64;
    }
    ctx->pc = 0x238C5Cu;
    SET_GPR_U32(ctx, 31, 0x238C64u);
    ctx->pc = 0x238C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238C5Cu;
            // 0x238c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238F80u;
    if (runtime->hasFunction(0x238F80u)) {
        auto targetFn = runtime->lookupFunction(0x238F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C64u; }
        if (ctx->pc != 0x238C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238F80_0x238f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C64u; }
        if (ctx->pc != 0x238C64u) { return; }
    }
    ctx->pc = 0x238C64u;
label_238c64:
    // 0x238c64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238c68:
    // 0x238c68: 0xae004e3c  sw          $zero, 0x4E3C($s0)
    ctx->pc = 0x238c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20028), GPR_U32(ctx, 0));
label_238c6c:
    // 0x238c6c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x238c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_238c70:
    // 0x238c70: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
label_238c74:
    // 0x238c74: 0x26044e40  addiu       $a0, $s0, 0x4E40
    ctx->pc = 0x238c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20032));
label_238c78:
    // 0x238c78: 0xc08b538  jal         func_22D4E0
label_238c7c:
    if (ctx->pc == 0x238C7Cu) {
        ctx->pc = 0x238C7Cu;
            // 0x238c7c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x238C80u;
        goto label_238c80;
    }
    ctx->pc = 0x238C78u;
    SET_GPR_U32(ctx, 31, 0x238C80u);
    ctx->pc = 0x238C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238C78u;
            // 0x238c7c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C80u; }
        if (ctx->pc != 0x238C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C80u; }
        if (ctx->pc != 0x238C80u) { return; }
    }
    ctx->pc = 0x238C80u;
label_238c80:
    // 0x238c80: 0x8e044e50  lw          $a0, 0x4E50($s0)
    ctx->pc = 0x238c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20048)));
label_238c84:
    // 0x238c84: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_238c88:
    if (ctx->pc == 0x238C88u) {
        ctx->pc = 0x238C88u;
            // 0x238c88: 0xae004e54  sw          $zero, 0x4E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20052), GPR_U32(ctx, 0));
        ctx->pc = 0x238C8Cu;
        goto label_238c8c;
    }
    ctx->pc = 0x238C84u;
    {
        const bool branch_taken_0x238c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c84) {
            ctx->pc = 0x238C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238C84u;
            // 0x238c88: 0xae004e54  sw          $zero, 0x4E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238C9Cu;
            goto label_238c9c;
        }
    }
    ctx->pc = 0x238C8Cu;
label_238c8c:
    // 0x238c8c: 0xc098560  jal         func_261580
label_238c90:
    if (ctx->pc == 0x238C90u) {
        ctx->pc = 0x238C94u;
        goto label_238c94;
    }
    ctx->pc = 0x238C8Cu;
    SET_GPR_U32(ctx, 31, 0x238C94u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C94u; }
        if (ctx->pc != 0x238C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C94u; }
        if (ctx->pc != 0x238C94u) { return; }
    }
    ctx->pc = 0x238C94u;
label_238c94:
    // 0x238c94: 0xae004e50  sw          $zero, 0x4E50($s0)
    ctx->pc = 0x238c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20048), GPR_U32(ctx, 0));
label_238c98:
    // 0x238c98: 0xae004e54  sw          $zero, 0x4E54($s0)
    ctx->pc = 0x238c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20052), GPR_U32(ctx, 0));
label_238c9c:
    // 0x238c9c: 0xa6004e46  sh          $zero, 0x4E46($s0)
    ctx->pc = 0x238c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20038), (uint16_t)GPR_U32(ctx, 0));
label_238ca0:
    // 0x238ca0: 0x8e024e14  lw          $v0, 0x4E14($s0)
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19988)));
label_238ca4:
    // 0x238ca4: 0x40f809  jalr        $v0
label_238ca8:
    if (ctx->pc == 0x238CA8u) {
        ctx->pc = 0x238CA8u;
            // 0x238ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238CACu;
        goto label_238cac;
    }
    ctx->pc = 0x238CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238CACu);
        ctx->pc = 0x238CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CA4u;
            // 0x238ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238CACu; }
            if (ctx->pc != 0x238CACu) { return; }
        }
        }
    }
    ctx->pc = 0x238CACu;
label_238cac:
    // 0x238cac: 0xc08c698  jal         func_231A60
label_238cb0:
    if (ctx->pc == 0x238CB0u) {
        ctx->pc = 0x238CB0u;
            // 0x238cb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238CB4u;
        goto label_238cb4;
    }
    ctx->pc = 0x238CACu;
    SET_GPR_U32(ctx, 31, 0x238CB4u);
    ctx->pc = 0x238CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238CACu;
            // 0x238cb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238CB4u; }
        if (ctx->pc != 0x238CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238CB4u; }
        if (ctx->pc != 0x238CB4u) { return; }
    }
    ctx->pc = 0x238CB4u;
label_238cb4:
    // 0x238cb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x238cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238cb8:
    // 0x238cb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x238cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_238cbc:
    // 0x238cbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x238cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238cc0:
    // 0x238cc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x238cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238cc4:
    // 0x238cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238cc8:
    // 0x238cc8: 0x3e00008  jr          $ra
label_238ccc:
    if (ctx->pc == 0x238CCCu) {
        ctx->pc = 0x238CCCu;
            // 0x238ccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x238CD0u;
        goto label_fallthrough_0x238cc8;
    }
    ctx->pc = 0x238CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CC8u;
            // 0x238ccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x238cc8:
    ctx->pc = 0x238CD0u;
    ctx->pc = 0x238cd0u;
}
