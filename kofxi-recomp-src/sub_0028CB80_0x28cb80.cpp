#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CB80
// Address: 0x28cb80 - 0x28cd60
void sub_0028CB80_0x28cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CB80_0x28cb80");
#endif

    switch (ctx->pc) {
        case 0x28cbccu: goto label_28cbcc;
        case 0x28cbe4u: goto label_28cbe4;
        case 0x28cbf4u: goto label_28cbf4;
        case 0x28cc18u: goto label_28cc18;
        case 0x28cc48u: goto label_28cc48;
        case 0x28cc70u: goto label_28cc70;
        case 0x28cc84u: goto label_28cc84;
        case 0x28cca4u: goto label_28cca4;
        case 0x28ccd0u: goto label_28ccd0;
        case 0x28cd10u: goto label_28cd10;
        case 0x28cd24u: goto label_28cd24;
        case 0x28cd44u: goto label_28cd44;
        default: break;
    }

    ctx->pc = 0x28cb80u;

label_28cb80:
    // 0x28cb80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28cb84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28cb88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28cb8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28cb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28cb94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28cb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28cb9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28cba0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x28cba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28cba4: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x28CBA4u;
    {
        const bool branch_taken_0x28cba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cba4) {
            ctx->pc = 0x28CBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBA4u;
            // 0x28cba8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CC28u;
            goto label_28cc28;
        }
    }
    ctx->pc = 0x28CBACu;
    // 0x28cbac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28cbb0: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x28cbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28cbb4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CBB4u;
    {
        const bool branch_taken_0x28cbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBB4u;
            // 0x28cbb8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbb4) {
            ctx->pc = 0x28CBD4u;
            goto label_28cbd4;
        }
    }
    ctx->pc = 0x28CBBCu;
    // 0x28cbbc: 0x2033023  subu        $a2, $s0, $v1
    ctx->pc = 0x28cbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x28cbc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28cbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbc4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x28CBC4u;
    SET_GPR_U32(ctx, 31, 0x28CBCCu);
    ctx->pc = 0x28CBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBC4u;
            // 0x28cbc8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CBCCu; }
        if (ctx->pc != 0x28CBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CBCCu; }
        if (ctx->pc != 0x28CBCCu) { return; }
    }
    ctx->pc = 0x28CBCCu;
label_28cbcc:
    // 0x28cbcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28CBCCu;
    {
        const bool branch_taken_0x28cbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBCCu;
            // 0x28cbd0: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbcc) {
            ctx->pc = 0x28CC28u;
            goto label_28cc28;
        }
    }
    ctx->pc = 0x28CBD4u;
label_28cbd4:
    // 0x28cbd4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CBD4u;
    {
        const bool branch_taken_0x28cbd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBD4u;
            // 0x28cbd8: 0x26120010  addiu       $s2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbd4) {
            ctx->pc = 0x28CBECu;
            goto label_28cbec;
        }
    }
    ctx->pc = 0x28CBDCu;
    // 0x28cbdc: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x28CBDCu;
    SET_GPR_U32(ctx, 31, 0x28CBE4u);
    ctx->pc = 0x28CBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBDCu;
            // 0x28cbe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CBE4u; }
        if (ctx->pc != 0x28CBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CBE4u; }
        if (ctx->pc != 0x28CBE4u) { return; }
    }
    ctx->pc = 0x28CBE4u;
label_28cbe4:
    // 0x28cbe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28CBE4u;
    {
        const bool branch_taken_0x28cbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cbe4) {
            ctx->pc = 0x28CBF4u;
            goto label_28cbf4;
        }
    }
    ctx->pc = 0x28CBECu;
label_28cbec:
    // 0x28cbec: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x28CBECu;
    SET_GPR_U32(ctx, 31, 0x28CBF4u);
    ctx->pc = 0x28CBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBECu;
            // 0x28cbf0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (runtime->hasFunction(0x2A3000u)) {
        auto targetFn = runtime->lookupFunction(0x2A3000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CBF4u; }
        if (ctx->pc != 0x28CBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3000_0x2a3000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CBF4u; }
        if (ctx->pc != 0x28CBF4u) { return; }
    }
    ctx->pc = 0x28CBF4u;
label_28cbf4:
    // 0x28cbf4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x28CBF4u;
    {
        const bool branch_taken_0x28cbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cbf4) {
            ctx->pc = 0x28CBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBF4u;
            // 0x28cbf8: 0xae320008  sw          $s2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CC20u;
            goto label_28cc20;
        }
    }
    ctx->pc = 0x28CBFCu;
    // 0x28cbfc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x28cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x28cc00: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x28cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28cc04: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x28cc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x28cc08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28cc08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28cc0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc10: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28CC10u;
    SET_GPR_U32(ctx, 31, 0x28CC18u);
    ctx->pc = 0x28CC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC10u;
            // 0x28cc14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC18u; }
        if (ctx->pc != 0x28CC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC18u; }
        if (ctx->pc != 0x28CC18u) { return; }
    }
    ctx->pc = 0x28CC18u;
label_28cc18:
    // 0x28cc18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28CC18u;
    {
        const bool branch_taken_0x28cc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC18u;
            // 0x28cc1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc18) {
            ctx->pc = 0x28CC2Cu;
            goto label_28cc2c;
        }
    }
    ctx->pc = 0x28CC20u;
label_28cc20:
    // 0x28cc20: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28cc24: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x28cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_28cc28:
    // 0x28cc28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28cc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28cc2c:
    // 0x28cc2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28cc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28cc30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28cc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cc34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28cc34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cc38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x28CC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC3Cu;
            // 0x28cc40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CC44u;
    // 0x28cc44: 0x0  nop
    ctx->pc = 0x28cc44u;
    // NOP
label_28cc48:
    // 0x28cc48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28cc4c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x28cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28cc50: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28cc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28cc54: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28cc54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28cc5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28cc5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28cc64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28cc68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28cc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc6c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28cc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_28cc70:
    // 0x28cc70: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28cc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28cc74: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x28cc74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28cc78: 0x2938021  addu        $s0, $s4, $s3
    ctx->pc = 0x28cc78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x28cc7c: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x28CC7Cu;
    SET_GPR_U32(ctx, 31, 0x28CC84u);
    ctx->pc = 0x28CC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC7Cu;
            // 0x28cc80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    goto label_28cb80;
    ctx->pc = 0x28CC84u;
label_28cc84:
    // 0x28cc84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28cc84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc88: 0x16500007  bne         $s2, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CC88u;
    {
        const bool branch_taken_0x28cc88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x28CC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC88u;
            // 0x28cc8c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc88) {
            ctx->pc = 0x28CCA8u;
            goto label_28cca8;
        }
    }
    ctx->pc = 0x28CC90u;
    // 0x28cc90: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x28cc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28cc94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28cc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28cc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc9c: 0xc049c48  jal         func_127120
    ctx->pc = 0x28CC9Cu;
    SET_GPR_U32(ctx, 31, 0x28CCA4u);
    ctx->pc = 0x28CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC9Cu;
            // 0x28cca0: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCA4u; }
        if (ctx->pc != 0x28CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCA4u; }
        if (ctx->pc != 0x28CCA4u) { return; }
    }
    ctx->pc = 0x28CCA4u;
label_28cca4:
    // 0x28cca4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28cca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28cca8:
    // 0x28cca8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28cca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ccac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x28ccacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ccb0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28ccb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ccb4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28ccb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ccb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28ccb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ccbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28ccbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ccc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ccc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ccc4: 0x3e00008  jr          $ra
    ctx->pc = 0x28CCC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCC4u;
            // 0x28ccc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CCCCu;
    // 0x28cccc: 0x0  nop
    ctx->pc = 0x28ccccu;
    // NOP
label_28ccd0:
    // 0x28ccd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ccd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28ccd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ccdc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28ccdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cce0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28cce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28cce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28cce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cce8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28cce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ccec: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x28ccecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28ccf0: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x28ccf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28ccf4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28CCF4u;
    {
        const bool branch_taken_0x28ccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCF4u;
            // 0x28ccf8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccf4) {
            ctx->pc = 0x28CD34u;
            goto label_28cd34;
        }
    }
    ctx->pc = 0x28CCFCu;
    // 0x28ccfc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CCFCu;
    {
        const bool branch_taken_0x28ccfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ccfc) {
            ctx->pc = 0x28CD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCFCu;
            // 0x28cd00: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CD18u;
            goto label_28cd18;
        }
    }
    ctx->pc = 0x28CD04u;
    // 0x28cd04: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x28cd04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28cd08: 0xc049c48  jal         func_127120
    ctx->pc = 0x28CD08u;
    SET_GPR_U32(ctx, 31, 0x28CD10u);
    ctx->pc = 0x28CD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD08u;
            // 0x28cd0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD10u; }
        if (ctx->pc != 0x28CD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD10u; }
        if (ctx->pc != 0x28CD10u) { return; }
    }
    ctx->pc = 0x28CD10u;
label_28cd10:
    // 0x28cd10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28cd14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x28cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28cd18:
    // 0x28cd18: 0x713023  subu        $a2, $v1, $s1
    ctx->pc = 0x28cd18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28cd1c: 0xc049c48  jal         func_127120
    ctx->pc = 0x28CD1Cu;
    SET_GPR_U32(ctx, 31, 0x28CD24u);
    ctx->pc = 0x28CD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD1Cu;
            // 0x28cd20: 0x912821  addu        $a1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD24u; }
        if (ctx->pc != 0x28CD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD24u; }
        if (ctx->pc != 0x28CD24u) { return; }
    }
    ctx->pc = 0x28CD24u;
label_28cd24:
    // 0x28cd24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28cd28: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x28cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x28cd2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28CD2Cu;
    {
        const bool branch_taken_0x28cd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD2Cu;
            // 0x28cd30: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd2c) {
            ctx->pc = 0x28CD48u;
            goto label_28cd48;
        }
    }
    ctx->pc = 0x28CD34u;
label_28cd34:
    // 0x28cd34: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CD34u;
    {
        const bool branch_taken_0x28cd34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cd34) {
            ctx->pc = 0x28CD38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD34u;
            // 0x28cd38: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CD48u;
            goto label_28cd48;
        }
    }
    ctx->pc = 0x28CD3Cu;
    // 0x28cd3c: 0xc049c48  jal         func_127120
    ctx->pc = 0x28CD3Cu;
    SET_GPR_U32(ctx, 31, 0x28CD44u);
    ctx->pc = 0x28CD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD3Cu;
            // 0x28cd40: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD44u; }
        if (ctx->pc != 0x28CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD44u; }
        if (ctx->pc != 0x28CD44u) { return; }
    }
    ctx->pc = 0x28CD44u;
label_28cd44:
    // 0x28cd44: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x28cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_28cd48:
    // 0x28cd48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28cd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cd50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28cd50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cd54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cd54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cd58: 0x3e00008  jr          $ra
    ctx->pc = 0x28CD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD58u;
            // 0x28cd5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CD60u;
    ctx->pc = 0x28cd60u;
}
