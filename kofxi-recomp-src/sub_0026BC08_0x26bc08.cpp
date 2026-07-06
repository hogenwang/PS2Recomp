#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BC08
// Address: 0x26bc08 - 0x26bda8
void sub_0026BC08_0x26bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BC08_0x26bc08");
#endif

    switch (ctx->pc) {
        case 0x26bc08u: goto label_26bc08;
        case 0x26bc0cu: goto label_26bc0c;
        case 0x26bc10u: goto label_26bc10;
        case 0x26bc14u: goto label_26bc14;
        case 0x26bc18u: goto label_26bc18;
        case 0x26bc1cu: goto label_26bc1c;
        case 0x26bc20u: goto label_26bc20;
        case 0x26bc24u: goto label_26bc24;
        case 0x26bc28u: goto label_26bc28;
        case 0x26bc2cu: goto label_26bc2c;
        case 0x26bc30u: goto label_26bc30;
        case 0x26bc34u: goto label_26bc34;
        case 0x26bc38u: goto label_26bc38;
        case 0x26bc3cu: goto label_26bc3c;
        case 0x26bc40u: goto label_26bc40;
        case 0x26bc44u: goto label_26bc44;
        case 0x26bc48u: goto label_26bc48;
        case 0x26bc4cu: goto label_26bc4c;
        case 0x26bc50u: goto label_26bc50;
        case 0x26bc54u: goto label_26bc54;
        case 0x26bc58u: goto label_26bc58;
        case 0x26bc5cu: goto label_26bc5c;
        case 0x26bc60u: goto label_26bc60;
        case 0x26bc64u: goto label_26bc64;
        case 0x26bc68u: goto label_26bc68;
        case 0x26bc6cu: goto label_26bc6c;
        case 0x26bc70u: goto label_26bc70;
        case 0x26bc74u: goto label_26bc74;
        case 0x26bc78u: goto label_26bc78;
        case 0x26bc7cu: goto label_26bc7c;
        case 0x26bc80u: goto label_26bc80;
        case 0x26bc84u: goto label_26bc84;
        case 0x26bc88u: goto label_26bc88;
        case 0x26bc8cu: goto label_26bc8c;
        case 0x26bc90u: goto label_26bc90;
        case 0x26bc94u: goto label_26bc94;
        case 0x26bc98u: goto label_26bc98;
        case 0x26bc9cu: goto label_26bc9c;
        case 0x26bca0u: goto label_26bca0;
        case 0x26bca4u: goto label_26bca4;
        case 0x26bca8u: goto label_26bca8;
        case 0x26bcacu: goto label_26bcac;
        case 0x26bcb0u: goto label_26bcb0;
        case 0x26bcb4u: goto label_26bcb4;
        case 0x26bcb8u: goto label_26bcb8;
        case 0x26bcbcu: goto label_26bcbc;
        case 0x26bcc0u: goto label_26bcc0;
        case 0x26bcc4u: goto label_26bcc4;
        case 0x26bcc8u: goto label_26bcc8;
        case 0x26bcccu: goto label_26bccc;
        case 0x26bcd0u: goto label_26bcd0;
        case 0x26bcd4u: goto label_26bcd4;
        case 0x26bcd8u: goto label_26bcd8;
        case 0x26bcdcu: goto label_26bcdc;
        case 0x26bce0u: goto label_26bce0;
        case 0x26bce4u: goto label_26bce4;
        case 0x26bce8u: goto label_26bce8;
        case 0x26bcecu: goto label_26bcec;
        case 0x26bcf0u: goto label_26bcf0;
        case 0x26bcf4u: goto label_26bcf4;
        case 0x26bcf8u: goto label_26bcf8;
        case 0x26bcfcu: goto label_26bcfc;
        case 0x26bd00u: goto label_26bd00;
        case 0x26bd04u: goto label_26bd04;
        case 0x26bd08u: goto label_26bd08;
        case 0x26bd0cu: goto label_26bd0c;
        case 0x26bd10u: goto label_26bd10;
        case 0x26bd14u: goto label_26bd14;
        case 0x26bd18u: goto label_26bd18;
        case 0x26bd1cu: goto label_26bd1c;
        case 0x26bd20u: goto label_26bd20;
        case 0x26bd24u: goto label_26bd24;
        case 0x26bd28u: goto label_26bd28;
        case 0x26bd2cu: goto label_26bd2c;
        case 0x26bd30u: goto label_26bd30;
        case 0x26bd34u: goto label_26bd34;
        case 0x26bd38u: goto label_26bd38;
        case 0x26bd3cu: goto label_26bd3c;
        case 0x26bd40u: goto label_26bd40;
        case 0x26bd44u: goto label_26bd44;
        case 0x26bd48u: goto label_26bd48;
        case 0x26bd4cu: goto label_26bd4c;
        case 0x26bd50u: goto label_26bd50;
        case 0x26bd54u: goto label_26bd54;
        case 0x26bd58u: goto label_26bd58;
        case 0x26bd5cu: goto label_26bd5c;
        case 0x26bd60u: goto label_26bd60;
        case 0x26bd64u: goto label_26bd64;
        case 0x26bd68u: goto label_26bd68;
        case 0x26bd6cu: goto label_26bd6c;
        case 0x26bd70u: goto label_26bd70;
        case 0x26bd74u: goto label_26bd74;
        case 0x26bd78u: goto label_26bd78;
        case 0x26bd7cu: goto label_26bd7c;
        case 0x26bd80u: goto label_26bd80;
        case 0x26bd84u: goto label_26bd84;
        case 0x26bd88u: goto label_26bd88;
        case 0x26bd8cu: goto label_26bd8c;
        case 0x26bd90u: goto label_26bd90;
        case 0x26bd94u: goto label_26bd94;
        case 0x26bd98u: goto label_26bd98;
        case 0x26bd9cu: goto label_26bd9c;
        case 0x26bda0u: goto label_26bda0;
        case 0x26bda4u: goto label_26bda4;
        default: break;
    }

    ctx->pc = 0x26bc08u;

label_26bc08:
    // 0x26bc08: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x26bc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
label_26bc0c:
    // 0x26bc0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26bc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bc10:
    // 0x26bc10: 0xffb00300  sd          $s0, 0x300($sp)
    ctx->pc = 0x26bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 16));
label_26bc14:
    // 0x26bc14: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x26bc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_26bc18:
    // 0x26bc18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26bc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26bc1c:
    // 0x26bc1c: 0xffb50350  sd          $s5, 0x350($sp)
    ctx->pc = 0x26bc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 21));
label_26bc20:
    // 0x26bc20: 0xffb40340  sd          $s4, 0x340($sp)
    ctx->pc = 0x26bc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 20));
label_26bc24:
    // 0x26bc24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26bc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26bc28:
    // 0x26bc28: 0xffb30330  sd          $s3, 0x330($sp)
    ctx->pc = 0x26bc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 19));
label_26bc2c:
    // 0x26bc2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26bc2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bc30:
    // 0x26bc30: 0xffb20320  sd          $s2, 0x320($sp)
    ctx->pc = 0x26bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 18));
label_26bc34:
    // 0x26bc34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26bc34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bc38:
    // 0x26bc38: 0xffb10310  sd          $s1, 0x310($sp)
    ctx->pc = 0x26bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 17));
label_26bc3c:
    // 0x26bc3c: 0xffbf0360  sd          $ra, 0x360($sp)
    ctx->pc = 0x26bc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 31));
label_26bc40:
    // 0x26bc40: 0xc049cb6  jal         func_1272D8
label_26bc44:
    if (ctx->pc == 0x26BC44u) {
        ctx->pc = 0x26BC44u;
            // 0x26bc44: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BC48u;
        goto label_26bc48;
    }
    ctx->pc = 0x26BC40u;
    SET_GPR_U32(ctx, 31, 0x26BC48u);
    ctx->pc = 0x26BC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC40u;
            // 0x26bc44: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC48u; }
        if (ctx->pc != 0x26BC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC48u; }
        if (ctx->pc != 0x26BC48u) { return; }
    }
    ctx->pc = 0x26BC48u;
label_26bc48:
    // 0x26bc48: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x26bc48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_26bc4c:
    // 0x26bc4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26bc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bc50:
    // 0x26bc50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26bc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26bc54:
    // 0x26bc54: 0xc049cb6  jal         func_1272D8
label_26bc58:
    if (ctx->pc == 0x26BC58u) {
        ctx->pc = 0x26BC58u;
            // 0x26bc58: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26BC5Cu;
        goto label_26bc5c;
    }
    ctx->pc = 0x26BC54u;
    SET_GPR_U32(ctx, 31, 0x26BC5Cu);
    ctx->pc = 0x26BC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC54u;
            // 0x26bc58: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC5Cu; }
        if (ctx->pc != 0x26BC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC5Cu; }
        if (ctx->pc != 0x26BC5Cu) { return; }
    }
    ctx->pc = 0x26BC5Cu;
label_26bc5c:
    // 0x26bc5c: 0x27b10200  addiu       $s1, $sp, 0x200
    ctx->pc = 0x26bc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_26bc60:
    // 0x26bc60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26bc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bc64:
    // 0x26bc64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26bc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bc68:
    // 0x26bc68: 0xc049cb6  jal         func_1272D8
label_26bc6c:
    if (ctx->pc == 0x26BC6Cu) {
        ctx->pc = 0x26BC6Cu;
            // 0x26bc6c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26BC70u;
        goto label_26bc70;
    }
    ctx->pc = 0x26BC68u;
    SET_GPR_U32(ctx, 31, 0x26BC70u);
    ctx->pc = 0x26BC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC68u;
            // 0x26bc6c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC70u; }
        if (ctx->pc != 0x26BC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC70u; }
        if (ctx->pc != 0x26BC70u) { return; }
    }
    ctx->pc = 0x26BC70u;
label_26bc70:
    // 0x26bc70: 0x8e050188  lw          $a1, 0x188($s0)
    ctx->pc = 0x26bc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_26bc74:
    // 0x26bc74: 0x8ca203f8  lw          $v0, 0x3F8($a1)
    ctx->pc = 0x26bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1016)));
label_26bc78:
    // 0x26bc78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_26bc7c:
    if (ctx->pc == 0x26BC7Cu) {
        ctx->pc = 0x26BC7Cu;
            // 0x26bc7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26BC80u;
        goto label_26bc80;
    }
    ctx->pc = 0x26BC78u;
    {
        const bool branch_taken_0x26bc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC78u;
            // 0x26bc7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc78) {
            ctx->pc = 0x26BCBCu;
            goto label_26bcbc;
        }
    }
    ctx->pc = 0x26BC80u;
label_26bc80:
    // 0x26bc80: 0x24a503f8  addiu       $a1, $a1, 0x3F8
    ctx->pc = 0x26bc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1016));
label_26bc84:
    // 0x26bc84: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x26bc84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26bc88:
    // 0x26bc88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26bc88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26bc8c:
    // 0x26bc8c: 0xc0990f0  jal         func_2643C0
label_26bc90:
    if (ctx->pc == 0x26BC90u) {
        ctx->pc = 0x26BC90u;
            // 0x26bc90: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26BC94u;
        goto label_26bc94;
    }
    ctx->pc = 0x26BC8Cu;
    SET_GPR_U32(ctx, 31, 0x26BC94u);
    ctx->pc = 0x26BC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC8Cu;
            // 0x26bc90: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (runtime->hasFunction(0x2643C0u)) {
        auto targetFn = runtime->lookupFunction(0x2643C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC94u; }
        if (ctx->pc != 0x26BC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002643C0_0x2643c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC94u; }
        if (ctx->pc != 0x26BC94u) { return; }
    }
    ctx->pc = 0x26BC94u;
label_26bc94:
    // 0x26bc94: 0x8e050188  lw          $a1, 0x188($s0)
    ctx->pc = 0x26bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_26bc98:
    // 0x26bc98: 0x8ca203fc  lw          $v0, 0x3FC($a1)
    ctx->pc = 0x26bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1020)));
label_26bc9c:
    // 0x26bc9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26bca0:
    if (ctx->pc == 0x26BCA0u) {
        ctx->pc = 0x26BCA0u;
            // 0x26bca0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26BCA4u;
        goto label_26bca4;
    }
    ctx->pc = 0x26BC9Cu;
    {
        const bool branch_taken_0x26bc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC9Cu;
            // 0x26bca0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc9c) {
            ctx->pc = 0x26BCBCu;
            goto label_26bcbc;
        }
    }
    ctx->pc = 0x26BCA4u;
label_26bca4:
    // 0x26bca4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x26bca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26bca8:
    // 0x26bca8: 0x24a503fc  addiu       $a1, $a1, 0x3FC
    ctx->pc = 0x26bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1020));
label_26bcac:
    // 0x26bcac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26bcacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26bcb0:
    // 0x26bcb0: 0xc0990f0  jal         func_2643C0
label_26bcb4:
    if (ctx->pc == 0x26BCB4u) {
        ctx->pc = 0x26BCB4u;
            // 0x26bcb4: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26BCB8u;
        goto label_26bcb8;
    }
    ctx->pc = 0x26BCB0u;
    SET_GPR_U32(ctx, 31, 0x26BCB8u);
    ctx->pc = 0x26BCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCB0u;
            // 0x26bcb4: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (runtime->hasFunction(0x2643C0u)) {
        auto targetFn = runtime->lookupFunction(0x2643C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCB8u; }
        if (ctx->pc != 0x26BCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002643C0_0x2643c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCB8u; }
        if (ctx->pc != 0x26BCB8u) { return; }
    }
    ctx->pc = 0x26BCB8u;
label_26bcb8:
    // 0x26bcb8: 0x8e050188  lw          $a1, 0x188($s0)
    ctx->pc = 0x26bcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_26bcbc:
    // 0x26bcbc: 0x8ca203f4  lw          $v0, 0x3F4($a1)
    ctx->pc = 0x26bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1012)));
label_26bcc0:
    // 0x26bcc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_26bcc4:
    if (ctx->pc == 0x26BCC4u) {
        ctx->pc = 0x26BCC4u;
            // 0x26bcc4: 0x24a503f4  addiu       $a1, $a1, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1012));
        ctx->pc = 0x26BCC8u;
        goto label_26bcc8;
    }
    ctx->pc = 0x26BCC0u;
    {
        const bool branch_taken_0x26bcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCC0u;
            // 0x26bcc4: 0x24a503f4  addiu       $a1, $a1, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcc0) {
            ctx->pc = 0x26BCDCu;
            goto label_26bcdc;
        }
    }
    ctx->pc = 0x26BCC8u;
label_26bcc8:
    // 0x26bcc8: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x26bcc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bccc:
    // 0x26bccc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26bcd0:
    // 0x26bcd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26bcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26bcd4:
    // 0x26bcd4: 0xc0990f0  jal         func_2643C0
label_26bcd8:
    if (ctx->pc == 0x26BCD8u) {
        ctx->pc = 0x26BCD8u;
            // 0x26bcd8: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26BCDCu;
        goto label_26bcdc;
    }
    ctx->pc = 0x26BCD4u;
    SET_GPR_U32(ctx, 31, 0x26BCDCu);
    ctx->pc = 0x26BCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCD4u;
            // 0x26bcd8: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (runtime->hasFunction(0x2643C0u)) {
        auto targetFn = runtime->lookupFunction(0x2643C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCDCu; }
        if (ctx->pc != 0x26BCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002643C0_0x2643c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCDCu; }
        if (ctx->pc != 0x26BCDCu) { return; }
    }
    ctx->pc = 0x26BCDCu;
label_26bcdc:
    // 0x26bcdc: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x26bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
label_26bce0:
    // 0x26bce0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26bce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26bce4:
    // 0x26bce4: 0xc04a8f8  jal         func_12A3E0
label_26bce8:
    if (ctx->pc == 0x26BCE8u) {
        ctx->pc = 0x26BCE8u;
            // 0x26bce8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26BCECu;
        goto label_26bcec;
    }
    ctx->pc = 0x26BCE4u;
    SET_GPR_U32(ctx, 31, 0x26BCECu);
    ctx->pc = 0x26BCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCE4u;
            // 0x26bce8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCECu; }
        if (ctx->pc != 0x26BCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BCECu; }
        if (ctx->pc != 0x26BCECu) { return; }
    }
    ctx->pc = 0x26BCECu;
label_26bcec:
    // 0x26bcec: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_26bcf0:
    if (ctx->pc == 0x26BCF0u) {
        ctx->pc = 0x26BCF0u;
            // 0x26bcf0: 0x8e0401b8  lw          $a0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->pc = 0x26BCF4u;
        goto label_26bcf4;
    }
    ctx->pc = 0x26BCECu;
    {
        const bool branch_taken_0x26bcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bcec) {
            ctx->pc = 0x26BCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCECu;
            // 0x26bcf0: 0x8e0401b8  lw          $a0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26BD28u;
            goto label_26bd28;
        }
    }
    ctx->pc = 0x26BCF4u;
label_26bcf4:
    // 0x26bcf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26bcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26bcf8:
    // 0x26bcf8: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x26bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_26bcfc:
    // 0x26bcfc: 0xc04a8f8  jal         func_12A3E0
label_26bd00:
    if (ctx->pc == 0x26BD00u) {
        ctx->pc = 0x26BD00u;
            // 0x26bd00: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26BD04u;
        goto label_26bd04;
    }
    ctx->pc = 0x26BCFCu;
    SET_GPR_U32(ctx, 31, 0x26BD04u);
    ctx->pc = 0x26BD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCFCu;
            // 0x26bd00: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD04u; }
        if (ctx->pc != 0x26BD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD04u; }
        if (ctx->pc != 0x26BD04u) { return; }
    }
    ctx->pc = 0x26BD04u;
label_26bd04:
    // 0x26bd04: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_26bd08:
    if (ctx->pc == 0x26BD08u) {
        ctx->pc = 0x26BD08u;
            // 0x26bd08: 0x8e0401b8  lw          $a0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->pc = 0x26BD0Cu;
        goto label_26bd0c;
    }
    ctx->pc = 0x26BD04u;
    {
        const bool branch_taken_0x26bd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bd04) {
            ctx->pc = 0x26BD08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD04u;
            // 0x26bd08: 0x8e0401b8  lw          $a0, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26BD28u;
            goto label_26bd28;
        }
    }
    ctx->pc = 0x26BD0Cu;
label_26bd0c:
    // 0x26bd0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26bd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bd10:
    // 0x26bd10: 0x260403c0  addiu       $a0, $s0, 0x3C0
    ctx->pc = 0x26bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
label_26bd14:
    // 0x26bd14: 0xc04a8f8  jal         func_12A3E0
label_26bd18:
    if (ctx->pc == 0x26BD18u) {
        ctx->pc = 0x26BD18u;
            // 0x26bd18: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x26BD1Cu;
        goto label_26bd1c;
    }
    ctx->pc = 0x26BD14u;
    SET_GPR_U32(ctx, 31, 0x26BD1Cu);
    ctx->pc = 0x26BD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD14u;
            // 0x26bd18: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD1Cu; }
        if (ctx->pc != 0x26BD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD1Cu; }
        if (ctx->pc != 0x26BD1Cu) { return; }
    }
    ctx->pc = 0x26BD1Cu;
label_26bd1c:
    // 0x26bd1c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_26bd20:
    if (ctx->pc == 0x26BD20u) {
        ctx->pc = 0x26BD20u;
            // 0x26bd20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BD24u;
        goto label_26bd24;
    }
    ctx->pc = 0x26BD1Cu;
    {
        const bool branch_taken_0x26bd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD1Cu;
            // 0x26bd20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd1c) {
            ctx->pc = 0x26BD84u;
            goto label_26bd84;
        }
    }
    ctx->pc = 0x26BD24u;
label_26bd24:
    // 0x26bd24: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x26bd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_26bd28:
    // 0x26bd28: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x26bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_26bd2c:
    // 0x26bd2c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_26bd30:
    if (ctx->pc == 0x26BD30u) {
        ctx->pc = 0x26BD30u;
            // 0x26bd30: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BD34u;
        goto label_26bd34;
    }
    ctx->pc = 0x26BD2Cu;
    {
        const bool branch_taken_0x26bd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD2Cu;
            // 0x26bd30: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd2c) {
            ctx->pc = 0x26BD64u;
            goto label_26bd64;
        }
    }
    ctx->pc = 0x26BD34u;
label_26bd34:
    // 0x26bd34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26bd34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26bd38:
    // 0x26bd38: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x26bd38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26bd3c:
    // 0x26bd3c: 0x40f809  jalr        $v0
label_26bd40:
    if (ctx->pc == 0x26BD40u) {
        ctx->pc = 0x26BD40u;
            // 0x26bd40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26BD44u;
        goto label_26bd44;
    }
    ctx->pc = 0x26BD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26BD44u);
        ctx->pc = 0x26BD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD3Cu;
            // 0x26bd40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26BD44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26BD44u; }
            if (ctx->pc != 0x26BD44u) { return; }
        }
        }
    }
    ctx->pc = 0x26BD44u;
label_26bd44:
    // 0x26bd44: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
label_26bd48:
    if (ctx->pc == 0x26BD48u) {
        ctx->pc = 0x26BD48u;
            // 0x26bd48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BD4Cu;
        goto label_26bd4c;
    }
    ctx->pc = 0x26BD44u;
    {
        const bool branch_taken_0x26bd44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26BD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD44u;
            // 0x26bd48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd44) {
            ctx->pc = 0x26BD84u;
            goto label_26bd84;
        }
    }
    ctx->pc = 0x26BD4Cu;
label_26bd4c:
    // 0x26bd4c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26bd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26bd50:
    // 0x26bd50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26bd54:
    // 0x26bd54: 0xc08b5ac  jal         func_22D6B0
label_26bd58:
    if (ctx->pc == 0x26BD58u) {
        ctx->pc = 0x26BD58u;
            // 0x26bd58: 0x24a589b0  addiu       $a1, $a1, -0x7650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937008));
        ctx->pc = 0x26BD5Cu;
        goto label_26bd5c;
    }
    ctx->pc = 0x26BD54u;
    SET_GPR_U32(ctx, 31, 0x26BD5Cu);
    ctx->pc = 0x26BD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD54u;
            // 0x26bd58: 0x24a589b0  addiu       $a1, $a1, -0x7650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD5Cu; }
        if (ctx->pc != 0x26BD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD5Cu; }
        if (ctx->pc != 0x26BD5Cu) { return; }
    }
    ctx->pc = 0x26BD5Cu;
label_26bd5c:
    // 0x26bd5c: 0x10000009  b           . + 4 + (0x9 << 2)
label_26bd60:
    if (ctx->pc == 0x26BD60u) {
        ctx->pc = 0x26BD60u;
            // 0x26bd60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x26BD64u;
        goto label_26bd64;
    }
    ctx->pc = 0x26BD5Cu;
    {
        const bool branch_taken_0x26bd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD5Cu;
            // 0x26bd60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd5c) {
            ctx->pc = 0x26BD84u;
            goto label_26bd84;
        }
    }
    ctx->pc = 0x26BD64u;
label_26bd64:
    // 0x26bd64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26bd68:
    // 0x26bd68: 0xc09816c  jal         func_2605B0
label_26bd6c:
    if (ctx->pc == 0x26BD6Cu) {
        ctx->pc = 0x26BD6Cu;
            // 0x26bd6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BD70u;
        goto label_26bd70;
    }
    ctx->pc = 0x26BD68u;
    SET_GPR_U32(ctx, 31, 0x26BD70u);
    ctx->pc = 0x26BD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD68u;
            // 0x26bd6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2605B0u;
    if (runtime->hasFunction(0x2605B0u)) {
        auto targetFn = runtime->lookupFunction(0x2605B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD70u; }
        if (ctx->pc != 0x26BD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002605B0_0x2605b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD70u; }
        if (ctx->pc != 0x26BD70u) { return; }
    }
    ctx->pc = 0x26BD70u;
label_26bd70:
    // 0x26bd70: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_26bd74:
    if (ctx->pc == 0x26BD74u) {
        ctx->pc = 0x26BD74u;
            // 0x26bd74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BD78u;
        goto label_26bd78;
    }
    ctx->pc = 0x26BD70u;
    {
        const bool branch_taken_0x26bd70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD70u;
            // 0x26bd74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd70) {
            ctx->pc = 0x26BD80u;
            goto label_26bd80;
        }
    }
    ctx->pc = 0x26BD78u;
label_26bd78:
    // 0x26bd78: 0xc09a152  jal         func_268548
label_26bd7c:
    if (ctx->pc == 0x26BD7Cu) {
        ctx->pc = 0x26BD7Cu;
            // 0x26bd7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26BD80u;
        goto label_26bd80;
    }
    ctx->pc = 0x26BD78u;
    SET_GPR_U32(ctx, 31, 0x26BD80u);
    ctx->pc = 0x26BD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BD78u;
            // 0x26bd7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268548u;
    if (runtime->hasFunction(0x268548u)) {
        auto targetFn = runtime->lookupFunction(0x268548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD80u; }
        if (ctx->pc != 0x26BD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268548_0x268548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BD80u; }
        if (ctx->pc != 0x26BD80u) { return; }
    }
    ctx->pc = 0x26BD80u;
label_26bd80:
    // 0x26bd80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26bd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bd84:
    // 0x26bd84: 0xdfbf0360  ld          $ra, 0x360($sp)
    ctx->pc = 0x26bd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 864)));
label_26bd88:
    // 0x26bd88: 0xdfb50350  ld          $s5, 0x350($sp)
    ctx->pc = 0x26bd88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 848)));
label_26bd8c:
    // 0x26bd8c: 0xdfb40340  ld          $s4, 0x340($sp)
    ctx->pc = 0x26bd8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 832)));
label_26bd90:
    // 0x26bd90: 0xdfb30330  ld          $s3, 0x330($sp)
    ctx->pc = 0x26bd90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 816)));
label_26bd94:
    // 0x26bd94: 0xdfb20320  ld          $s2, 0x320($sp)
    ctx->pc = 0x26bd94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 800)));
label_26bd98:
    // 0x26bd98: 0xdfb10310  ld          $s1, 0x310($sp)
    ctx->pc = 0x26bd98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_26bd9c:
    // 0x26bd9c: 0xdfb00300  ld          $s0, 0x300($sp)
    ctx->pc = 0x26bd9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_26bda0:
    // 0x26bda0: 0x3e00008  jr          $ra
label_26bda4:
    if (ctx->pc == 0x26BDA4u) {
        ctx->pc = 0x26BDA4u;
            // 0x26bda4: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->pc = 0x26BDA8u;
        goto label_fallthrough_0x26bda0;
    }
    ctx->pc = 0x26BDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDA0u;
            // 0x26bda4: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26bda0:
    ctx->pc = 0x26BDA8u;
    ctx->pc = 0x26bda8u;
}
