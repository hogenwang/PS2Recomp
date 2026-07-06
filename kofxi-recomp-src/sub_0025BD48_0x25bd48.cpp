#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025BD48
// Address: 0x25bd48 - 0x25be80
void sub_0025BD48_0x25bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BD48_0x25bd48");
#endif

    switch (ctx->pc) {
        case 0x25bdb0u: goto label_25bdb0;
        case 0x25bdf8u: goto label_25bdf8;
        case 0x25be04u: goto label_25be04;
        case 0x25be1cu: goto label_25be1c;
        case 0x25be2cu: goto label_25be2c;
        case 0x25be40u: goto label_25be40;
        case 0x25be5cu: goto label_25be5c;
        default: break;
    }

    ctx->pc = 0x25bd48u;

    // 0x25bd48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25bd4c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x25bd4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bd50: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x25bd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x25bd54: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x25bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25bd58: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25bd58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bd5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25bd60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x25bd60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bd64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25bd68: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x25bd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bd6c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25bd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25bd70: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x25bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25bd74: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x25BD74u;
    {
        const bool branch_taken_0x25bd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD74u;
            // 0x25bd78: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd74) {
            ctx->pc = 0x25BE60u;
            goto label_25be60;
        }
    }
    ctx->pc = 0x25BD7Cu;
    // 0x25bd7c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x25bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25bd80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bd84: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x25bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25bd88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25bd8c: 0x14650035  bne         $v1, $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x25BD8Cu;
    {
        const bool branch_taken_0x25bd8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x25BD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BD8Cu;
            // 0x25bd90: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd8c) {
            ctx->pc = 0x25BE64u;
            goto label_25be64;
        }
    }
    ctx->pc = 0x25BD94u;
    // 0x25bd94: 0x3c063b9a  lui         $a2, 0x3B9A
    ctx->pc = 0x25bd94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15258 << 16));
    // 0x25bd98: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x25bd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bd9c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x25bd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25bda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25bda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bda4: 0x34c6ca00  ori         $a2, $a2, 0xCA00
    ctx->pc = 0x25bda4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51712);
    // 0x25bda8: 0xc08aa68  jal         func_22A9A0
    ctx->pc = 0x25BDA8u;
    SET_GPR_U32(ctx, 31, 0x25BDB0u);
    ctx->pc = 0x25BDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BDA8u;
            // 0x25bdac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (runtime->hasFunction(0x22A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x22A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BDB0u; }
        if (ctx->pc != 0x25BDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A9A0_0x22a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BDB0u; }
        if (ctx->pc != 0x25BDB0u) { return; }
    }
    ctx->pc = 0x25BDB0u;
label_25bdb0:
    // 0x25bdb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25bdb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bdb4: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x25BDB4u;
    {
        const bool branch_taken_0x25bdb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BDB4u;
            // 0x25bdb8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bdb4) {
            ctx->pc = 0x25BE64u;
            goto label_25be64;
        }
    }
    ctx->pc = 0x25BDBCu;
    // 0x25bdbc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x25BDBCu;
    {
        const bool branch_taken_0x25bdbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BDBCu;
            // 0x25bdc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bdbc) {
            ctx->pc = 0x25BDFCu;
            goto label_25bdfc;
        }
    }
    ctx->pc = 0x25BDC4u;
    // 0x25bdc4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x25bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x25bdc8: 0x30420087  andi        $v0, $v0, 0x87
    ctx->pc = 0x25bdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)135);
    // 0x25bdcc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25BDCCu;
    {
        const bool branch_taken_0x25bdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bdcc) {
            ctx->pc = 0x25BDD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25BDCCu;
            // 0x25bdd0: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25BDE8u;
            goto label_25bde8;
        }
    }
    ctx->pc = 0x25BDD4u;
    // 0x25bdd4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x25bdd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25bdd8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x25bdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x25bddc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25BDDCu;
    {
        const bool branch_taken_0x25bddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bddc) {
            ctx->pc = 0x25BDFCu;
            goto label_25bdfc;
        }
    }
    ctx->pc = 0x25BDE4u;
    // 0x25bde4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x25bde4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_25bde8:
    // 0x25bde8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bdec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25bdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bdf0: 0xc094198  jal         func_250660
    ctx->pc = 0x25BDF0u;
    SET_GPR_U32(ctx, 31, 0x25BDF8u);
    ctx->pc = 0x25BDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BDF0u;
            // 0x25bdf4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250660u;
    if (runtime->hasFunction(0x250660u)) {
        auto targetFn = runtime->lookupFunction(0x250660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BDF8u; }
        if (ctx->pc != 0x25BDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00250660_0x250660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BDF8u; }
        if (ctx->pc != 0x25BDF8u) { return; }
    }
    ctx->pc = 0x25BDF8u;
label_25bdf8:
    // 0x25bdf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25bdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25bdfc:
    // 0x25bdfc: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x25BDFCu;
    SET_GPR_U32(ctx, 31, 0x25BE04u);
    ctx->pc = 0x25BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BDFCu;
            // 0x25be00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (runtime->hasFunction(0x22B220u)) {
        auto targetFn = runtime->lookupFunction(0x22B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE04u; }
        if (ctx->pc != 0x25BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B220_0x22b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE04u; }
        if (ctx->pc != 0x25BE04u) { return; }
    }
    ctx->pc = 0x25BE04u;
label_25be04:
    // 0x25be04: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x25be04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x25be08: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x25be08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25be0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25be0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25be10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25be14: 0xc08c330  jal         func_230CC0
    ctx->pc = 0x25BE14u;
    SET_GPR_U32(ctx, 31, 0x25BE1Cu);
    ctx->pc = 0x25BE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE14u;
            // 0x25be18: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230CC0u;
    if (runtime->hasFunction(0x230CC0u)) {
        auto targetFn = runtime->lookupFunction(0x230CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE1Cu; }
        if (ctx->pc != 0x25BE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230CC0_0x230cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE1Cu; }
        if (ctx->pc != 0x25BE1Cu) { return; }
    }
    ctx->pc = 0x25BE1Cu;
label_25be1c:
    // 0x25be1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25BE1Cu;
    {
        const bool branch_taken_0x25be1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be1c) {
            ctx->pc = 0x25BE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE1Cu;
            // 0x25be20: 0x96020078  lhu         $v0, 0x78($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25BE48u;
            goto label_25be48;
        }
    }
    ctx->pc = 0x25BE24u;
    // 0x25be24: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25BE24u;
    SET_GPR_U32(ctx, 31, 0x25BE2Cu);
    ctx->pc = 0x25BE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE24u;
            // 0x25be28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE2Cu; }
        if (ctx->pc != 0x25BE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE2Cu; }
        if (ctx->pc != 0x25BE2Cu) { return; }
    }
    ctx->pc = 0x25BE2Cu;
label_25be2c:
    // 0x25be2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x25be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25be30: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x25BE30u;
    {
        const bool branch_taken_0x25be30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE30u;
            // 0x25be34: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be30) {
            ctx->pc = 0x25BE64u;
            goto label_25be64;
        }
    }
    ctx->pc = 0x25BE38u;
    // 0x25be38: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25BE38u;
    SET_GPR_U32(ctx, 31, 0x25BE40u);
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE40u; }
        if (ctx->pc != 0x25BE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE40u; }
        if (ctx->pc != 0x25BE40u) { return; }
    }
    ctx->pc = 0x25BE40u;
label_25be40:
    // 0x25be40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25BE40u;
    {
        const bool branch_taken_0x25be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE40u;
            // 0x25be44: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be40) {
            ctx->pc = 0x25BE64u;
            goto label_25be64;
        }
    }
    ctx->pc = 0x25BE48u;
label_25be48:
    // 0x25be48: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x25be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x25be4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BE4Cu;
    {
        const bool branch_taken_0x25be4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE4Cu;
            // 0x25be50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be4c) {
            ctx->pc = 0x25BE60u;
            goto label_25be60;
        }
    }
    ctx->pc = 0x25BE54u;
    // 0x25be54: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x25BE54u;
    SET_GPR_U32(ctx, 31, 0x25BE5Cu);
    ctx->pc = 0x25BE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE54u;
            // 0x25be58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (runtime->hasFunction(0x2308F0u)) {
        auto targetFn = runtime->lookupFunction(0x2308F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE5Cu; }
        if (ctx->pc != 0x25BE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002308F0_0x2308f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BE5Cu; }
        if (ctx->pc != 0x25BE5Cu) { return; }
    }
    ctx->pc = 0x25BE5Cu;
label_25be5c:
    // 0x25be5c: 0x0  nop
    ctx->pc = 0x25be5cu;
    // NOP
label_25be60:
    // 0x25be60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25be60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25be64:
    // 0x25be64: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x25be64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25be68: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x25be68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25be6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25be6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25be70: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x25be70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25be74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25be74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25be78: 0x3e00008  jr          $ra
    ctx->pc = 0x25BE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE78u;
            // 0x25be7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BE80u;
    ctx->pc = 0x25be80u;
}
