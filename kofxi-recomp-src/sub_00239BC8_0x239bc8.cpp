#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239BC8
// Address: 0x239bc8 - 0x239cf8
void sub_00239BC8_0x239bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239BC8_0x239bc8");
#endif

    switch (ctx->pc) {
        case 0x239c00u: goto label_239c00;
        case 0x239c18u: goto label_239c18;
        case 0x239c68u: goto label_239c68;
        case 0x239c7cu: goto label_239c7c;
        case 0x239ca0u: goto label_239ca0;
        case 0x239ca8u: goto label_239ca8;
        case 0x239cb0u: goto label_239cb0;
        case 0x239cb8u: goto label_239cb8;
        case 0x239cc0u: goto label_239cc0;
        case 0x239cccu: goto label_239ccc;
        default: break;
    }

    ctx->pc = 0x239bc8u;

    // 0x239bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x239bcc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x239bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x239bd0: 0x3c1201c1  lui         $s2, 0x1C1
    ctx->pc = 0x239bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
    // 0x239bd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x239bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x239bd8: 0x8e42adc0  lw          $v0, -0x5240($s2)
    ctx->pc = 0x239bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946240)));
    // 0x239bdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239be0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x239be4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x239be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x239be8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x239BE8u;
    {
        const bool branch_taken_0x239be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239BE8u;
            // 0x239bec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239be8) {
            ctx->pc = 0x239C1Cu;
            goto label_239c1c;
        }
    }
    ctx->pc = 0x239BF0u;
    // 0x239bf0: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x239bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x239bf4: 0x2610adc8  addiu       $s0, $s0, -0x5238
    ctx->pc = 0x239bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946248));
    // 0x239bf8: 0xc08a054  jal         func_228150
    ctx->pc = 0x239BF8u;
    SET_GPR_U32(ctx, 31, 0x239C00u);
    ctx->pc = 0x239BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239BF8u;
            // 0x239bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228150u;
    if (runtime->hasFunction(0x228150u)) {
        auto targetFn = runtime->lookupFunction(0x228150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C00u; }
        if (ctx->pc != 0x239C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228150_0x228150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C00u; }
        if (ctx->pc != 0x239C00u) { return; }
    }
    ctx->pc = 0x239C00u;
label_239c00:
    // 0x239c00: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x239c00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x239c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c08: 0x24c6fe28  addiu       $a2, $a2, -0x1D8
    ctx->pc = 0x239c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966824));
    // 0x239c0c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x239c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x239c10: 0xc08a058  jal         func_228160
    ctx->pc = 0x239C10u;
    SET_GPR_U32(ctx, 31, 0x239C18u);
    ctx->pc = 0x239C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239C10u;
            // 0x239c14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C18u; }
        if (ctx->pc != 0x239C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228160_0x228160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C18u; }
        if (ctx->pc != 0x239C18u) { return; }
    }
    ctx->pc = 0x239C18u;
label_239c18:
    // 0x239c18: 0x8e42adc0  lw          $v0, -0x5240($s2)
    ctx->pc = 0x239c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946240)));
label_239c1c:
    // 0x239c1c: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x239c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    // 0x239c20: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x239c24: 0xae51adc0  sw          $s1, -0x5240($s2)
    ctx->pc = 0x239c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294946240), GPR_U32(ctx, 17));
    // 0x239c28: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x239c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x239c2c: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x239c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x239c30: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x239c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x239c34: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x239c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x239c38: 0xa6200136  sh          $zero, 0x136($s1)
    ctx->pc = 0x239c38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x239c3c: 0xa6200134  sh          $zero, 0x134($s1)
    ctx->pc = 0x239c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 308), (uint16_t)GPR_U32(ctx, 0));
    // 0x239c40: 0x26240138  addiu       $a0, $s1, 0x138
    ctx->pc = 0x239c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x239c44: 0xa2230038  sb          $v1, 0x38($s1)
    ctx->pc = 0x239c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 3));
    // 0x239c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c4c: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x239c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x239c50: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x239c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x239c54: 0xae27010c  sw          $a3, 0x10C($s1)
    ctx->pc = 0x239c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 7));
    // 0x239c58: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x239c5c: 0xae280120  sw          $t0, 0x120($s1)
    ctx->pc = 0x239c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 8));
    // 0x239c60: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x239C60u;
    SET_GPR_U32(ctx, 31, 0x239C68u);
    ctx->pc = 0x239C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239C60u;
            // 0x239c64: 0x26330250  addiu       $s3, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C68u; }
        if (ctx->pc != 0x239C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C68u; }
        if (ctx->pc != 0x239C68u) { return; }
    }
    ctx->pc = 0x239C68u;
label_239c68:
    // 0x239c68: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x239c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239c6c: 0x2624014c  addiu       $a0, $s1, 0x14C
    ctx->pc = 0x239c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
    // 0x239c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c74: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x239C74u;
    SET_GPR_U32(ctx, 31, 0x239C7Cu);
    ctx->pc = 0x239C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239C74u;
            // 0x239c78: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C7Cu; }
        if (ctx->pc != 0x239C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C7Cu; }
        if (ctx->pc != 0x239C7Cu) { return; }
    }
    ctx->pc = 0x239C7Cu;
label_239c7c:
    // 0x239c7c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x239c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x239c80: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x239c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
    // 0x239c84: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x239c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x239c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x239c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x239c90: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x239c94: 0xae224e14  sw          $v0, 0x4E14($s1)
    ctx->pc = 0x239c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 19988), GPR_U32(ctx, 2));
    // 0x239c98: 0xc08ef2e  jal         func_23BCB8
    ctx->pc = 0x239C98u;
    SET_GPR_U32(ctx, 31, 0x239CA0u);
    ctx->pc = 0x239C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239C98u;
            // 0x239c9c: 0xae254e10  sw          $a1, 0x4E10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 19984), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BCB8u;
    if (runtime->hasFunction(0x23BCB8u)) {
        auto targetFn = runtime->lookupFunction(0x23BCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CA0u; }
        if (ctx->pc != 0x239CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023BCB8_0x23bcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CA0u; }
        if (ctx->pc != 0x239CA0u) { return; }
    }
    ctx->pc = 0x239CA0u;
label_239ca0:
    // 0x239ca0: 0xc08f526  jal         func_23D498
    ctx->pc = 0x239CA0u;
    SET_GPR_U32(ctx, 31, 0x239CA8u);
    ctx->pc = 0x239CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239CA0u;
            // 0x239ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D498u;
    if (runtime->hasFunction(0x23D498u)) {
        auto targetFn = runtime->lookupFunction(0x23D498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CA8u; }
        if (ctx->pc != 0x239CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023D498_0x23d498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CA8u; }
        if (ctx->pc != 0x239CA8u) { return; }
    }
    ctx->pc = 0x239CA8u;
label_239ca8:
    // 0x239ca8: 0xc08f90a  jal         func_23E428
    ctx->pc = 0x239CA8u;
    SET_GPR_U32(ctx, 31, 0x239CB0u);
    ctx->pc = 0x239CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239CA8u;
            // 0x239cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E428u;
    if (runtime->hasFunction(0x23E428u)) {
        auto targetFn = runtime->lookupFunction(0x23E428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CB0u; }
        if (ctx->pc != 0x239CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E428_0x23e428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CB0u; }
        if (ctx->pc != 0x239CB0u) { return; }
    }
    ctx->pc = 0x239CB0u;
label_239cb0:
    // 0x239cb0: 0xc08fdc6  jal         func_23F718
    ctx->pc = 0x239CB0u;
    SET_GPR_U32(ctx, 31, 0x239CB8u);
    ctx->pc = 0x239CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239CB0u;
            // 0x239cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F718u;
    if (runtime->hasFunction(0x23F718u)) {
        auto targetFn = runtime->lookupFunction(0x23F718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CB8u; }
        if (ctx->pc != 0x239CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023F718_0x23f718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CB8u; }
        if (ctx->pc != 0x239CB8u) { return; }
    }
    ctx->pc = 0x239CB8u;
label_239cb8:
    // 0x239cb8: 0xc08fb28  jal         func_23ECA0
    ctx->pc = 0x239CB8u;
    SET_GPR_U32(ctx, 31, 0x239CC0u);
    ctx->pc = 0x239CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239CB8u;
            // 0x239cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23ECA0u;
    if (runtime->hasFunction(0x23ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x23ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CC0u; }
        if (ctx->pc != 0x239CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023ECA0_0x23eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CC0u; }
        if (ctx->pc != 0x239CC0u) { return; }
    }
    ctx->pc = 0x239CC0u;
label_239cc0:
    // 0x239cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239cc4: 0xc08a054  jal         func_228150
    ctx->pc = 0x239CC4u;
    SET_GPR_U32(ctx, 31, 0x239CCCu);
    ctx->pc = 0x239CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239CC4u;
            // 0x239cc8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228150u;
    if (runtime->hasFunction(0x228150u)) {
        auto targetFn = runtime->lookupFunction(0x228150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CCCu; }
        if (ctx->pc != 0x239CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228150_0x228150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239CCCu; }
        if (ctx->pc != 0x239CCCu) { return; }
    }
    ctx->pc = 0x239CCCu;
label_239ccc:
    // 0x239ccc: 0x641fffc  bgez        $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x239CCCu;
    {
        const bool branch_taken_0x239ccc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x239CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239CCCu;
            // 0x239cd0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ccc) {
            ctx->pc = 0x239CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239cc0;
        }
    }
    ctx->pc = 0x239CD4u;
    // 0x239cd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239cd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239cdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x239cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239ce0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239ce4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239cec: 0x808a054  j           func_228150
    ctx->pc = 0x239CECu;
    ctx->pc = 0x239CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239CECu;
            // 0x239cf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228150u;
    if (runtime->hasFunction(0x228150u)) {
        auto targetFn = runtime->lookupFunction(0x228150u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00228150_0x228150(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x239CF4u;
    // 0x239cf4: 0x0  nop
    ctx->pc = 0x239cf4u;
    // NOP
    ctx->pc = 0x239cf8u;
}
