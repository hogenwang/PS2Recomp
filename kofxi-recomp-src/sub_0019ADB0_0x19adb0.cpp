#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019ADB0
// Address: 0x19adb0 - 0x19b760
void sub_0019ADB0_0x19adb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ADB0_0x19adb0");
#endif

    switch (ctx->pc) {
        case 0x19add8u: goto label_19add8;
        case 0x19adf0u: goto label_19adf0;
        case 0x19aed0u: goto label_19aed0;
        case 0x19af48u: goto label_19af48;
        case 0x19b170u: goto label_19b170;
        case 0x19b470u: goto label_19b470;
        case 0x19b640u: goto label_19b640;
        case 0x19b720u: goto label_19b720;
        default: break;
    }

    ctx->pc = 0x19adb0u;

    // 0x19adb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19adb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19adb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19adb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19adbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19adc0: 0x8c63d514  lw          $v1, -0x2AEC($v1)
    ctx->pc = 0x19adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956308)));
    // 0x19adc4: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x19adc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x19adc8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ADC8u;
    {
        const bool branch_taken_0x19adc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ADCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADC8u;
            // 0x19adcc: 0x2610d500  addiu       $s0, $s0, -0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adc8) {
            ctx->pc = 0x19ADDCu;
            goto label_19addc;
        }
    }
    ctx->pc = 0x19ADD0u;
    // 0x19add0: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19ADD0u;
    SET_GPR_U32(ctx, 31, 0x19ADD8u);
    ctx->pc = 0x19ADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADD0u;
            // 0x19add4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADD8u; }
        if (ctx->pc != 0x19ADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADD8u; }
        if (ctx->pc != 0x19ADD8u) { return; }
    }
    ctx->pc = 0x19ADD8u;
label_19add8:
    // 0x19add8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x19add8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_19addc:
    // 0x19addc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19addcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ade0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ade0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ade4: 0x3e00008  jr          $ra
    ctx->pc = 0x19ADE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ADE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ADE4u;
            // 0x19ade8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ADECu;
    // 0x19adec: 0x0  nop
    ctx->pc = 0x19adecu;
    // NOP
label_19adf0:
    // 0x19adf0: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x19adf0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19adf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19adf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adf8: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x19adf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19adfc: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x19adfcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x19ae00: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19ae00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ae04: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x19ae04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x19ae08: 0xad600028  sw          $zero, 0x28($t3)
    ctx->pc = 0x19ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 0));
    // 0x19ae0c: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x19ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x19ae10: 0x856a0000  lh          $t2, 0x0($t3)
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x19ae14: 0x240301e0  addiu       $v1, $zero, 0x1E0
    ctx->pc = 0x19ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x19ae18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ae1c: 0xa56a0004  sh          $t2, 0x4($t3)
    ctx->pc = 0x19ae1cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x19ae20: 0xa56a0008  sh          $t2, 0x8($t3)
    ctx->pc = 0x19ae20u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 10));
    // 0x19ae24: 0x856a0002  lh          $t2, 0x2($t3)
    ctx->pc = 0x19ae24u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x19ae28: 0xa56a0006  sh          $t2, 0x6($t3)
    ctx->pc = 0x19ae28u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x19ae2c: 0xa56a000a  sh          $t2, 0xA($t3)
    ctx->pc = 0x19ae2cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 10), (uint16_t)GPR_U32(ctx, 10));
    // 0x19ae30: 0xa169001c  sb          $t1, 0x1C($t3)
    ctx->pc = 0x19ae30u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 28), (uint8_t)GPR_U32(ctx, 9));
    // 0x19ae34: 0xa160001d  sb          $zero, 0x1D($t3)
    ctx->pc = 0x19ae34u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ae38: 0xad68002c  sw          $t0, 0x2C($t3)
    ctx->pc = 0x19ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 8));
    // 0x19ae3c: 0xa5600020  sh          $zero, 0x20($t3)
    ctx->pc = 0x19ae3cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ae40: 0xa567001e  sh          $a3, 0x1E($t3)
    ctx->pc = 0x19ae40u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 30), (uint16_t)GPR_U32(ctx, 7));
    // 0x19ae44: 0xa5670022  sh          $a3, 0x22($t3)
    ctx->pc = 0x19ae44u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 34), (uint16_t)GPR_U32(ctx, 7));
    // 0x19ae48: 0xa5600024  sh          $zero, 0x24($t3)
    ctx->pc = 0x19ae48u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ae4c: 0xa5660030  sh          $a2, 0x30($t3)
    ctx->pc = 0x19ae4cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x19ae50: 0xa560003a  sh          $zero, 0x3A($t3)
    ctx->pc = 0x19ae50u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ae54: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x19ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x19ae58: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x19ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x19ae5c: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x19ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
    // 0x19ae60: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x19ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x19ae64: 0xa5600032  sh          $zero, 0x32($t3)
    ctx->pc = 0x19ae64u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ae68: 0xa5600034  sh          $zero, 0x34($t3)
    ctx->pc = 0x19ae68u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ae6c: 0xa5640036  sh          $a0, 0x36($t3)
    ctx->pc = 0x19ae6cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x19ae70: 0xa5630038  sh          $v1, 0x38($t3)
    ctx->pc = 0x19ae70u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ae74: 0x8c42d50c  lw          $v0, -0x2AF4($v0)
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956300)));
    // 0x19ae78: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x19ae78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19ae7c: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x19AE7Cu;
    {
        const bool branch_taken_0x19ae7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x19ae7c) {
            ctx->pc = 0x19AE9Cu;
            goto label_19ae9c;
        }
    }
    ctx->pc = 0x19AE84u;
    // 0x19ae84: 0x8562001e  lh          $v0, 0x1E($t3)
    ctx->pc = 0x19ae84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x19ae88: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19ae88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x19ae8c: 0xa562001e  sh          $v0, 0x1E($t3)
    ctx->pc = 0x19ae8cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x19ae90: 0x85620022  lh          $v0, 0x22($t3)
    ctx->pc = 0x19ae90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 34)));
    // 0x19ae94: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19ae94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x19ae98: 0xa5620022  sh          $v0, 0x22($t3)
    ctx->pc = 0x19ae98u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 34), (uint16_t)GPR_U32(ctx, 2));
label_19ae9c:
    // 0x19ae9c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aea0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x19aea4: 0x8c46ae00  lw          $a2, -0x5200($v0)
    ctx->pc = 0x19aea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946304)));
    // 0x19aea8: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x19aea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x19aeac: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x19aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x19aeb0: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x19aeb4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x19aeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x19aeb8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aebc: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x19aebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x19aec0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x19aec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x19aec4: 0x8055768  j           func_155DA0
    ctx->pc = 0x19AEC4u;
    ctx->pc = 0x19AEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AEC4u;
            // 0x19aec8: 0xac43ae00  sw          $v1, -0x5200($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00155DA0_0x155da0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19AECCu;
    // 0x19aecc: 0x0  nop
    ctx->pc = 0x19aeccu;
    // NOP
label_19aed0:
    // 0x19aed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19aed4: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x19aed4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x19aed8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19aedc: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x19aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x19aee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19aee4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19aee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19aee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19aeec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19aeecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aef0: 0x8c42ae00  lw          $v0, -0x5200($v0)
    ctx->pc = 0x19aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946304)));
    // 0x19aef4: 0x24e7d500  addiu       $a3, $a3, -0x2B00
    ctx->pc = 0x19aef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956288));
    // 0x19aef8: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x19aef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19aefc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x19af00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AF00u;
    {
        const bool branch_taken_0x19af00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF00u;
            // 0x19af04: 0x24c6ae00  addiu       $a2, $a2, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af00) {
            ctx->pc = 0x19AF10u;
            goto label_19af10;
        }
    }
    ctx->pc = 0x19AF08u;
    // 0x19af08: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x19af08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x19af0c: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x19af0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
label_19af10:
    // 0x19af10: 0x8203001d  lb          $v1, 0x1D($s0)
    ctx->pc = 0x19af10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x19af14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19af18: 0x106401c1  beq         $v1, $a0, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x19AF18u;
    {
        const bool branch_taken_0x19af18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x19af18) {
            ctx->pc = 0x19B620u;
            goto label_19b620;
        }
    }
    ctx->pc = 0x19AF20u;
    // 0x19af20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19af20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19af24: 0x506201b3  beql        $v1, $v0, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x19AF24u;
    {
        const bool branch_taken_0x19af24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19af24) {
            ctx->pc = 0x19AF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF24u;
            // 0x19af28: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B5F4u;
            goto label_19b5f4;
        }
    }
    ctx->pc = 0x19AF2Cu;
    // 0x19af2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af30: 0x506201a5  beql        $v1, $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x19AF30u;
    {
        const bool branch_taken_0x19af30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19af30) {
            ctx->pc = 0x19AF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF30u;
            // 0x19af34: 0x86020020  lh          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B5C8u;
            goto label_19b5c8;
        }
    }
    ctx->pc = 0x19AF38u;
    // 0x19af38: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AF38u;
    {
        const bool branch_taken_0x19af38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af38) {
            ctx->pc = 0x19AF3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF38u;
            // 0x19af3c: 0x86040026  lh          $a0, 0x26($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AF4Cu;
            goto label_19af4c;
        }
    }
    ctx->pc = 0x19AF40u;
    // 0x19af40: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x19AF40u;
    {
        const bool branch_taken_0x19af40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af40) {
            ctx->pc = 0x19B620u;
            goto label_19b620;
        }
    }
    ctx->pc = 0x19AF48u;
label_19af48:
    // 0x19af48: 0x86040026  lh          $a0, 0x26($s0)
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
label_19af4c:
    // 0x19af4c: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x19af4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x19af50: 0x8ce90010  lw          $t1, 0x10($a3)
    ctx->pc = 0x19af50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x19af54: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x19af54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19af58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19af58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19af5c: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x19af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x19af60: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x19af60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x19af64: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x19af68: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x19af68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19af6c: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x19af6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19af70: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19af70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19af74: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x19af74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x19af78: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x19af78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x19af7c: 0x2085021  addu        $t2, $s0, $t0
    ctx->pc = 0x19af7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x19af80: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x19af80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19af84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19af84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19af88: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x19af88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x19af8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19af90: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x19af90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19af94: 0xa542003c  sh          $v0, 0x3C($t2)
    ctx->pc = 0x19af94u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x19af98: 0x9542003c  lhu         $v0, 0x3C($t2)
    ctx->pc = 0x19af98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x19af9c: 0x3049f000  andi        $t1, $v0, 0xF000
    ctx->pc = 0x19af9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x19afa0: 0x11230179  beq         $t1, $v1, . + 4 + (0x179 << 2)
    ctx->pc = 0x19AFA0u;
    {
        const bool branch_taken_0x19afa0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x19AFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFA0u;
            // 0x19afa4: 0x2548003c  addiu       $t0, $t2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afa0) {
            ctx->pc = 0x19B588u;
            goto label_19b588;
        }
    }
    ctx->pc = 0x19AFA8u;
    // 0x19afa8: 0x3403d000  ori         $v1, $zero, 0xD000
    ctx->pc = 0x19afa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53248);
    // 0x19afac: 0x11230126  beq         $t1, $v1, . + 4 + (0x126 << 2)
    ctx->pc = 0x19AFACu;
    {
        const bool branch_taken_0x19afac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19afac) {
            ctx->pc = 0x19B448u;
            goto label_19b448;
        }
    }
    ctx->pc = 0x19AFB4u;
    // 0x19afb4: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x19afb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x19afb8: 0x1123011b  beq         $t1, $v1, . + 4 + (0x11B << 2)
    ctx->pc = 0x19AFB8u;
    {
        const bool branch_taken_0x19afb8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19afb8) {
            ctx->pc = 0x19B428u;
            goto label_19b428;
        }
    }
    ctx->pc = 0x19AFC0u;
    // 0x19afc0: 0x3403b000  ori         $v1, $zero, 0xB000
    ctx->pc = 0x19afc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45056);
    // 0x19afc4: 0x11230114  beq         $t1, $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x19AFC4u;
    {
        const bool branch_taken_0x19afc4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19afc4) {
            ctx->pc = 0x19B418u;
            goto label_19b418;
        }
    }
    ctx->pc = 0x19AFCCu;
    // 0x19afcc: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x19afccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x19afd0: 0x112300e9  beq         $t1, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x19AFD0u;
    {
        const bool branch_taken_0x19afd0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19afd0) {
            ctx->pc = 0x19B378u;
            goto label_19b378;
        }
    }
    ctx->pc = 0x19AFD8u;
    // 0x19afd8: 0x34039000  ori         $v1, $zero, 0x9000
    ctx->pc = 0x19afd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x19afdc: 0x112300dc  beq         $t1, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x19AFDCu;
    {
        const bool branch_taken_0x19afdc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19afdc) {
            ctx->pc = 0x19B350u;
            goto label_19b350;
        }
    }
    ctx->pc = 0x19AFE4u;
    // 0x19afe4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19afe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19afe8: 0x112300c9  beq         $t1, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x19AFE8u;
    {
        const bool branch_taken_0x19afe8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19afe8) {
            ctx->pc = 0x19B310u;
            goto label_19b310;
        }
    }
    ctx->pc = 0x19AFF0u;
    // 0x19aff0: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x19aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x19aff4: 0x112300ba  beq         $t1, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x19AFF4u;
    {
        const bool branch_taken_0x19aff4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19aff4) {
            ctx->pc = 0x19B2E0u;
            goto label_19b2e0;
        }
    }
    ctx->pc = 0x19AFFCu;
    // 0x19affc: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x19affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x19b000: 0x112300ab  beq         $t1, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x19B000u;
    {
        const bool branch_taken_0x19b000 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b000) {
            ctx->pc = 0x19B2B0u;
            goto label_19b2b0;
        }
    }
    ctx->pc = 0x19B008u;
    // 0x19b008: 0x24035000  addiu       $v1, $zero, 0x5000
    ctx->pc = 0x19b008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x19b00c: 0x112300a2  beq         $t1, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x19B00Cu;
    {
        const bool branch_taken_0x19b00c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b00c) {
            ctx->pc = 0x19B298u;
            goto label_19b298;
        }
    }
    ctx->pc = 0x19B014u;
    // 0x19b014: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x19b014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19b018: 0x11230099  beq         $t1, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x19B018u;
    {
        const bool branch_taken_0x19b018 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b018) {
            ctx->pc = 0x19B280u;
            goto label_19b280;
        }
    }
    ctx->pc = 0x19B020u;
    // 0x19b020: 0x24033000  addiu       $v1, $zero, 0x3000
    ctx->pc = 0x19b020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x19b024: 0x1123008c  beq         $t1, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x19B024u;
    {
        const bool branch_taken_0x19b024 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b024) {
            ctx->pc = 0x19B258u;
            goto label_19b258;
        }
    }
    ctx->pc = 0x19B02Cu;
    // 0x19b02c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x19b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x19b030: 0x1122003d  beq         $t1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x19B030u;
    {
        const bool branch_taken_0x19b030 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b030) {
            ctx->pc = 0x19B128u;
            goto label_19b128;
        }
    }
    ctx->pc = 0x19B038u;
    // 0x19b038: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x19b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x19b03c: 0x11220034  beq         $t1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x19B03Cu;
    {
        const bool branch_taken_0x19b03c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b03c) {
            ctx->pc = 0x19B110u;
            goto label_19b110;
        }
    }
    ctx->pc = 0x19B044u;
    // 0x19b044: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B044u;
    {
        const bool branch_taken_0x19b044 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b044) {
            ctx->pc = 0x19B058u;
            goto label_19b058;
        }
    }
    ctx->pc = 0x19B04Cu;
    // 0x19b04c: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x19B04Cu;
    {
        const bool branch_taken_0x19b04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b04c) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B054u;
    // 0x19b054: 0x0  nop
    ctx->pc = 0x19b054u;
    // NOP
label_19b058:
    // 0x19b058: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x19b058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b05c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19b05cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b060: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x19b060u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b064: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x19b064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19b068: 0xa5020004  sh          $v0, 0x4($t0)
    ctx->pc = 0x19b068u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b06c: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x19b06cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19b070: 0xa1020006  sb          $v0, 0x6($t0)
    ctx->pc = 0x19b070u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b074: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x19b074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b078: 0xa1020007  sb          $v0, 0x7($t0)
    ctx->pc = 0x19b078u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b07c: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x19b07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b080: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x19b080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x19b084: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x19b084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b088: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x19b088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19b08c: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x19b08cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19b090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b094: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19b094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19b098: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19b098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b09c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19b0a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19b0a4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19b0a8: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x19b0a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19b0ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19b0acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19b0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19b0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b0b4: 0x0  nop
    ctx->pc = 0x19b0b4u;
    // NOP
    // 0x19b0b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19b0bc: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x19b0bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x19b0c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19b0c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19b0c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19b0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19b0c8: 0x0  nop
    ctx->pc = 0x19b0c8u;
    // NOP
    // 0x19b0cc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x19b0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b0d0: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b0d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b0d8: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x19b0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b0dc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x19b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19b0e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b0e4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x19b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x19b0e8: 0x8602001e  lh          $v0, 0x1E($s0)
    ctx->pc = 0x19b0e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x19b0ec: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x19B0ECu;
    {
        const bool branch_taken_0x19b0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0ECu;
            // 0x19b0f0: 0xa6020020  sh          $v0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0ec) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B0F4u;
    // 0x19b0f4: 0x90e30008  lbu         $v1, 0x8($a3)
    ctx->pc = 0x19b0f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b0fc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19b0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19b100: 0xa0e30008  sb          $v1, 0x8($a3)
    ctx->pc = 0x19b100u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b104: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x19B104u;
    {
        const bool branch_taken_0x19b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B104u;
            // 0x19b108: 0xa202001d  sb          $v0, 0x1D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b104) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B10Cu;
    // 0x19b10c: 0x0  nop
    ctx->pc = 0x19b10cu;
    // NOP
label_19b110:
    // 0x19b110: 0x90e30008  lbu         $v1, 0x8($a3)
    ctx->pc = 0x19b110u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b118: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19b118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19b11c: 0xa0e30008  sb          $v1, 0x8($a3)
    ctx->pc = 0x19b11cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b120: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x19B120u;
    {
        const bool branch_taken_0x19b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B120u;
            // 0x19b124: 0xa202001d  sb          $v0, 0x1D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b120) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B128u;
label_19b128:
    // 0x19b128: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x19b128u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19b12c: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x19b12cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x19b130: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x19b130u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19b134: 0x86050030  lh          $a1, 0x30($s0)
    ctx->pc = 0x19b134u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b138: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x19b13c: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x19b13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x19b140: 0x86050024  lh          $a1, 0x24($s0)
    ctx->pc = 0x19b140u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b144: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b148: 0xa6050024  sh          $a1, 0x24($s0)
    ctx->pc = 0x19b148u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 5));
    // 0x19b14c: 0x8609003a  lh          $t1, 0x3A($s0)
    ctx->pc = 0x19b14cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x19b150: 0x31250003  andi        $a1, $t1, 0x3
    ctx->pc = 0x19b150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x19b154: 0x10a00114  beqz        $a1, . + 4 + (0x114 << 2)
    ctx->pc = 0x19B154u;
    {
        const bool branch_taken_0x19b154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b154) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B15Cu;
    // 0x19b15c: 0x860b0024  lh          $t3, 0x24($s0)
    ctx->pc = 0x19b15cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b160: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19b160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b164: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x19b164u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b168: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x19b168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x19b16c: 0x0  nop
    ctx->pc = 0x19b16cu;
    // NOP
label_19b170:
    // 0x19b170: 0xb2c3c  dsll32      $a1, $t3, 16
    ctx->pc = 0x19b170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << (32 + 16));
    // 0x19b174: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x19b174u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x19b178: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x19b178u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x19b17c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x19b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19b180: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x19b180u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b184: 0x30a5f000  andi        $a1, $a1, 0xF000
    ctx->pc = 0x19b184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x19b188: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19B188u;
    {
        const bool branch_taken_0x19b188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b188) {
            ctx->pc = 0x19B1C8u;
            goto label_19b1c8;
        }
    }
    ctx->pc = 0x19B190u;
    // 0x19b190: 0x10a8000d  beq         $a1, $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x19B190u;
    {
        const bool branch_taken_0x19b190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x19b190) {
            ctx->pc = 0x19B1C8u;
            goto label_19b1c8;
        }
    }
    ctx->pc = 0x19B198u;
    // 0x19b198: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B198u;
    {
        const bool branch_taken_0x19b198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b198) {
            ctx->pc = 0x19B1C8u;
            goto label_19b1c8;
        }
    }
    ctx->pc = 0x19B1A0u;
    // 0x19b1a0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B1A0u;
    {
        const bool branch_taken_0x19b1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b1a0) {
            ctx->pc = 0x19B1B0u;
            goto label_19b1b0;
        }
    }
    ctx->pc = 0x19B1A8u;
    // 0x19b1a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19B1A8u;
    {
        const bool branch_taken_0x19b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b1a8) {
            ctx->pc = 0x19B1D0u;
            goto label_19b1d0;
        }
    }
    ctx->pc = 0x19B1B0u;
label_19b1b0:
    // 0x19b1b0: 0x25450001  addiu       $a1, $t2, 0x1
    ctx->pc = 0x19b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x19b1b4: 0x30aaffff  andi        $t2, $a1, 0xFFFF
    ctx->pc = 0x19b1b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19b1b8: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x19b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19b1bc: 0x55c3c  dsll32      $t3, $a1, 16
    ctx->pc = 0x19b1bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19b1c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B1C0u;
    {
        const bool branch_taken_0x19b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1C0u;
            // 0x19b1c4: 0xb5c3f  dsra32      $t3, $t3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1c0) {
            ctx->pc = 0x19B1E0u;
            goto label_19b1e0;
        }
    }
    ctx->pc = 0x19B1C8u;
label_19b1c8:
    // 0x19b1c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19B1C8u;
    {
        const bool branch_taken_0x19b1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1C8u;
            // 0x19b1cc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1c8) {
            ctx->pc = 0x19B1E0u;
            goto label_19b1e0;
        }
    }
    ctx->pc = 0x19B1D0u;
label_19b1d0:
    // 0x19b1d0: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x19b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19b1d4: 0x55c3c  dsll32      $t3, $a1, 16
    ctx->pc = 0x19b1d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19b1d8: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x19b1d8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x19b1dc: 0x0  nop
    ctx->pc = 0x19b1dcu;
    // NOP
label_19b1e0:
    // 0x19b1e0: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x19B1E0u;
    {
        const bool branch_taken_0x19b1e0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b1e0) {
            ctx->pc = 0x19B170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b170;
        }
    }
    ctx->pc = 0x19B1E8u;
    // 0x19b1e8: 0x31220002  andi        $v0, $t1, 0x2
    ctx->pc = 0x19b1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x19b1ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B1ECu;
    {
        const bool branch_taken_0x19b1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b1ec) {
            ctx->pc = 0x19B1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1ECu;
            // 0x19b1f0: 0x86020030  lh          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19B1F4u;
    // 0x19b1f4: 0x86030030  lh          $v1, 0x30($s0)
    ctx->pc = 0x19b1f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b1f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B1F8u;
    {
        const bool branch_taken_0x19b1f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19B1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1F8u;
            // 0x19b1fc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1f8) {
            ctx->pc = 0x19B208u;
            goto label_19b208;
        }
    }
    ctx->pc = 0x19B200u;
    // 0x19b200: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19b200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b204: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19b204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19b208:
    // 0x19b208: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19b208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19b20c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19b20cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_19b210:
    // 0x19b210: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x19b210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19b214: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19b214u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19b218: 0x3142ffff  andi        $v0, $t2, 0xFFFF
    ctx->pc = 0x19b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x19b21c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x19b21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19b220: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B220u;
    {
        const bool branch_taken_0x19b220 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19B224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B220u;
            // 0x19b224: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b220) {
            ctx->pc = 0x19B230u;
            goto label_19b230;
        }
    }
    ctx->pc = 0x19B228u;
    // 0x19b228: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b22c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x19b22cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_19b230:
    // 0x19b230: 0x86020036  lh          $v0, 0x36($s0)
    ctx->pc = 0x19b230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x19b234: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B234u;
    {
        const bool branch_taken_0x19b234 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B234u;
            // 0x19b238: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b234) {
            ctx->pc = 0x19B244u;
            goto label_19b244;
        }
    }
    ctx->pc = 0x19B23Cu;
    // 0x19b23c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b240: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x19b240u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_19b244:
    // 0x19b244: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x19b244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x19b248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b24c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19b250: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x19B250u;
    {
        const bool branch_taken_0x19b250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B250u;
            // 0x19b254: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b250) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B258u;
label_19b258:
    // 0x19b258: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x19b258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19b25c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x19b25cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b260: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x19b260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x19b264: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x19b264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b268: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x19b268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x19b26c: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b26cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b274: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x19B274u;
    {
        const bool branch_taken_0x19b274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B274u;
            // 0x19b278: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b274) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B27Cu;
    // 0x19b27c: 0x0  nop
    ctx->pc = 0x19b27cu;
    // NOP
label_19b280:
    // 0x19b280: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x19b280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b284: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b28c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x19B28Cu;
    {
        const bool branch_taken_0x19b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B28Cu;
            // 0x19b290: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b28c) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B294u;
    // 0x19b294: 0x0  nop
    ctx->pc = 0x19b294u;
    // NOP
label_19b298:
    // 0x19b298: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x19b298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x19b29c: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x19b29cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b2a0: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b2a8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x19B2A8u;
    {
        const bool branch_taken_0x19b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2A8u;
            // 0x19b2ac: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2a8) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B2B0u;
label_19b2b0:
    // 0x19b2b0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x19b2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x19b2b4: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x19b2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b2b8: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x19b2b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b2bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b2c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b2c4: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x19b2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b2c8: 0x90e30008  lbu         $v1, 0x8($a3)
    ctx->pc = 0x19b2c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b2cc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x19b2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x19b2d0: 0xa0e30008  sb          $v1, 0x8($a3)
    ctx->pc = 0x19b2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b2d4: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x19B2D4u;
    {
        const bool branch_taken_0x19b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2D4u;
            // 0x19b2d8: 0xa202001d  sb          $v0, 0x1D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2d4) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B2DCu;
    // 0x19b2dc: 0x0  nop
    ctx->pc = 0x19b2dcu;
    // NOP
label_19b2e0:
    // 0x19b2e0: 0x90e30008  lbu         $v1, 0x8($a3)
    ctx->pc = 0x19b2e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b2e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b2e8: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x19b2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x19b2ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B2ECu;
    {
        const bool branch_taken_0x19b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B2ECu;
            // 0x19b2f0: 0xa0e30008  sb          $v1, 0x8($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b2ec) {
            ctx->pc = 0x19B300u;
            goto label_19b300;
        }
    }
    ctx->pc = 0x19B2F4u;
    // 0x19b2f4: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x19b2f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b2f8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19b2fc: 0xa0e20008  sb          $v0, 0x8($a3)
    ctx->pc = 0x19b2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 2));
label_19b300:
    // 0x19b300: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b304: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b308: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x19B308u;
    {
        const bool branch_taken_0x19b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B308u;
            // 0x19b30c: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b308) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B310u;
label_19b310:
    // 0x19b310: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b314: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b318: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x19b318u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b31c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x19b31cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19b320: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x19b320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x19b324: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x19b324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b328: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x19b328u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b32c: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b32cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b330: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x19b330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b334: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19b334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19b338: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x19b338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b33c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19b340: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x19b340u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b344: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x19b344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b348: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x19B348u;
    {
        const bool branch_taken_0x19b348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B348u;
            // 0x19b34c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b348) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B350u;
label_19b350:
    // 0x19b350: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x19b350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x19b354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b358: 0x0  nop
    ctx->pc = 0x19b358u;
    // NOP
    // 0x19b35c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b35cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19b360: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x19b360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x19b364: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b36c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x19B36Cu;
    {
        const bool branch_taken_0x19b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B36Cu;
            // 0x19b370: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b36c) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B374u;
    // 0x19b374: 0x0  nop
    ctx->pc = 0x19b374u;
    // NOP
label_19b378:
    // 0x19b378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b37c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B37Cu;
    {
        const bool branch_taken_0x19b37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b37c) {
            ctx->pc = 0x19B390u;
            goto label_19b390;
        }
    }
    ctx->pc = 0x19B384u;
    // 0x19b384: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x19b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19b388: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x19b388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b38c: 0x0  nop
    ctx->pc = 0x19b38cu;
    // NOP
label_19b390:
    // 0x19b390: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x19b390u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19b394: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B398u;
    {
        const bool branch_taken_0x19b398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b398) {
            ctx->pc = 0x19B3A8u;
            goto label_19b3a8;
        }
    }
    ctx->pc = 0x19B3A0u;
    // 0x19b3a0: 0x86020022  lh          $v0, 0x22($s0)
    ctx->pc = 0x19b3a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x19b3a4: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x19b3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
label_19b3a8:
    // 0x19b3a8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x19b3a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19b3ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19b3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19b3b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B3B0u;
    {
        const bool branch_taken_0x19b3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3b0) {
            ctx->pc = 0x19B3C8u;
            goto label_19b3c8;
        }
    }
    ctx->pc = 0x19B3B8u;
    // 0x19b3b8: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x19b3b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b3bc: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x19b3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x19b3c0: 0xa0e20008  sb          $v0, 0x8($a3)
    ctx->pc = 0x19b3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b3c4: 0x0  nop
    ctx->pc = 0x19b3c4u;
    // NOP
label_19b3c8:
    // 0x19b3c8: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x19b3c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x19b3cc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19b3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x19b3d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B3D0u;
    {
        const bool branch_taken_0x19b3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3d0) {
            ctx->pc = 0x19B3E0u;
            goto label_19b3e0;
        }
    }
    ctx->pc = 0x19B3D8u;
    // 0x19b3d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19b3dc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x19b3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_19b3e0:
    // 0x19b3e0: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x19b3e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x19b3e4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x19b3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x19b3e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19B3E8u;
    {
        const bool branch_taken_0x19b3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3e8) {
            ctx->pc = 0x19B408u;
            goto label_19b408;
        }
    }
    ctx->pc = 0x19B3F0u;
    // 0x19b3f0: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x19b3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19b3f4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x19b3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b3f8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x19b3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b3fc: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x19b3fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19b400: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x19b400u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b404: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x19b404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_19b408:
    // 0x19b408: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b40c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b410: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x19B410u;
    {
        const bool branch_taken_0x19b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B410u;
            // 0x19b414: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b410) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B418u;
label_19b418:
    // 0x19b418: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b41c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b420: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x19B420u;
    {
        const bool branch_taken_0x19b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B420u;
            // 0x19b424: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b420) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B428u;
label_19b428:
    // 0x19b428: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x19b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x19b42c: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x19b42cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b430: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x19b430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b434: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b43c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x19B43Cu;
    {
        const bool branch_taken_0x19b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B43Cu;
            // 0x19b440: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b43c) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B444u;
    // 0x19b444: 0x0  nop
    ctx->pc = 0x19b444u;
    // NOP
label_19b448:
    // 0x19b448: 0x86050024  lh          $a1, 0x24($s0)
    ctx->pc = 0x19b448u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b44c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19b44cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b450: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19b450u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b454: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b458: 0x5643c  dsll32      $t4, $a1, 16
    ctx->pc = 0x19b458u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19b45c: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x19b45cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x19b460: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x19b460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x19b464: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x19b464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x19b468: 0x240a3000  addiu       $t2, $zero, 0x3000
    ctx->pc = 0x19b468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x19b46c: 0x0  nop
    ctx->pc = 0x19b46cu;
    // NOP
label_19b470:
    // 0x19b470: 0xc2c3c  dsll32      $a1, $t4, 16
    ctx->pc = 0x19b470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) << (32 + 16));
    // 0x19b474: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x19b474u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x19b478: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x19b478u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x19b47c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x19b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19b480: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x19b480u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b484: 0x30a5f000  andi        $a1, $a1, 0xF000
    ctx->pc = 0x19b484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x19b488: 0x10aa000f  beq         $a1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x19B488u;
    {
        const bool branch_taken_0x19b488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x19b488) {
            ctx->pc = 0x19B4C8u;
            goto label_19b4c8;
        }
    }
    ctx->pc = 0x19B490u;
    // 0x19b490: 0x10a9000d  beq         $a1, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x19B490u;
    {
        const bool branch_taken_0x19b490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x19b490) {
            ctx->pc = 0x19B4C8u;
            goto label_19b4c8;
        }
    }
    ctx->pc = 0x19B498u;
    // 0x19b498: 0x10a8000b  beq         $a1, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B498u;
    {
        const bool branch_taken_0x19b498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x19b498) {
            ctx->pc = 0x19B4C8u;
            goto label_19b4c8;
        }
    }
    ctx->pc = 0x19B4A0u;
    // 0x19b4a0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B4A0u;
    {
        const bool branch_taken_0x19b4a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b4a0) {
            ctx->pc = 0x19B4B0u;
            goto label_19b4b0;
        }
    }
    ctx->pc = 0x19B4A8u;
    // 0x19b4a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19B4A8u;
    {
        const bool branch_taken_0x19b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b4a8) {
            ctx->pc = 0x19B4D0u;
            goto label_19b4d0;
        }
    }
    ctx->pc = 0x19B4B0u;
label_19b4b0:
    // 0x19b4b0: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x19b4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x19b4b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b4b8: 0x5643c  dsll32      $t4, $a1, 16
    ctx->pc = 0x19b4b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19b4bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19b4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19b4c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19B4C0u;
    {
        const bool branch_taken_0x19b4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4C0u;
            // 0x19b4c4: 0xc643f  dsra32      $t4, $t4, 16 (Delay Slot)
        SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4c0) {
            ctx->pc = 0x19B4E0u;
            goto label_19b4e0;
        }
    }
    ctx->pc = 0x19B4C8u;
label_19b4c8:
    // 0x19b4c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19B4C8u;
    {
        const bool branch_taken_0x19b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4C8u;
            // 0x19b4cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4c8) {
            ctx->pc = 0x19B4E0u;
            goto label_19b4e0;
        }
    }
    ctx->pc = 0x19B4D0u;
label_19b4d0:
    // 0x19b4d0: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x19b4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x19b4d4: 0x5643c  dsll32      $t4, $a1, 16
    ctx->pc = 0x19b4d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19b4d8: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x19b4d8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x19b4dc: 0x0  nop
    ctx->pc = 0x19b4dcu;
    // NOP
label_19b4e0:
    // 0x19b4e0: 0x1560ffe3  bnez        $t3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x19B4E0u;
    {
        const bool branch_taken_0x19b4e0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b4e0) {
            ctx->pc = 0x19B470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19b470;
        }
    }
    ctx->pc = 0x19B4E8u;
    // 0x19b4e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b4ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19B4ECu;
    {
        const bool branch_taken_0x19b4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b4ec) {
            ctx->pc = 0x19B520u;
            goto label_19b520;
        }
    }
    ctx->pc = 0x19B4F4u;
    // 0x19b4f4: 0x86040030  lh          $a0, 0x30($s0)
    ctx->pc = 0x19b4f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b4f8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B4F8u;
    {
        const bool branch_taken_0x19b4f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B4F8u;
            // 0x19b4fc: 0x41043  sra         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b4f8) {
            ctx->pc = 0x19B508u;
            goto label_19b508;
        }
    }
    ctx->pc = 0x19B500u;
    // 0x19b500: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19b504: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19b504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19b508:
    // 0x19b508: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x19b508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19b50c: 0x8602003a  lh          $v0, 0x3A($s0)
    ctx->pc = 0x19b50cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x19b510: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x19b510u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x19b514: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19b514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19b518: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19B518u;
    {
        const bool branch_taken_0x19b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B518u;
            // 0x19b51c: 0xa602003a  sh          $v0, 0x3A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b518) {
            ctx->pc = 0x19B530u;
            goto label_19b530;
        }
    }
    ctx->pc = 0x19B520u;
label_19b520:
    // 0x19b520: 0x8602003a  lh          $v0, 0x3A($s0)
    ctx->pc = 0x19b520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x19b524: 0x86050030  lh          $a1, 0x30($s0)
    ctx->pc = 0x19b524u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b528: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19b52c: 0xa602003a  sh          $v0, 0x3A($s0)
    ctx->pc = 0x19b52cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 2));
label_19b530:
    // 0x19b530: 0x86020036  lh          $v0, 0x36($s0)
    ctx->pc = 0x19b530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x19b534: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B534u;
    {
        const bool branch_taken_0x19b534 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19B538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B534u;
            // 0x19b538: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b534) {
            ctx->pc = 0x19B544u;
            goto label_19b544;
        }
    }
    ctx->pc = 0x19B53Cu;
    // 0x19b53c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b540: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x19b540u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_19b544:
    // 0x19b544: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x19b544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19b548: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19b548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19b54c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19b54cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19b550: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19b550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19b554: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x19b558: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x19b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19b55c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B55Cu;
    {
        const bool branch_taken_0x19b55c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19B560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B55Cu;
            // 0x19b560: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b55c) {
            ctx->pc = 0x19B56Cu;
            goto label_19b56c;
        }
    }
    ctx->pc = 0x19B564u;
    // 0x19b564: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b568: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19b568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19b56c:
    // 0x19b56c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x19b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19b570: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x19b570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b574: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b57c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19B57Cu;
    {
        const bool branch_taken_0x19b57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B57Cu;
            // 0x19b580: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b57c) {
            ctx->pc = 0x19B5A8u;
            goto label_19b5a8;
        }
    }
    ctx->pc = 0x19B584u;
    // 0x19b584: 0x0  nop
    ctx->pc = 0x19b584u;
    // NOP
label_19b588:
    // 0x19b588: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x19b588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19b58c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x19b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x19b590: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19b590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19b594: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19b594u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19b598: 0x86020024  lh          $v0, 0x24($s0)
    ctx->pc = 0x19b598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19b59c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b5a0: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x19b5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b5a4: 0x0  nop
    ctx->pc = 0x19b5a4u;
    // NOP
label_19b5a8:
    // 0x19b5a8: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x19b5a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b5ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b5b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19b5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19b5b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19b5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19b5b8: 0x1440fe63  bnez        $v0, . + 4 + (-0x19D << 2)
    ctx->pc = 0x19B5B8u;
    {
        const bool branch_taken_0x19b5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b5b8) {
            ctx->pc = 0x19AF48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19af48;
        }
    }
    ctx->pc = 0x19B5C0u;
    // 0x19b5c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19B5C0u;
    {
        const bool branch_taken_0x19b5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5c0) {
            ctx->pc = 0x19B620u;
            goto label_19b620;
        }
    }
    ctx->pc = 0x19B5C8u;
label_19b5c8:
    // 0x19b5c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19b5cc: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x19b5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b5d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19b5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19b5d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19b5d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19b5d8: 0x1c400011  bgtz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19B5D8u;
    {
        const bool branch_taken_0x19b5d8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19b5d8) {
            ctx->pc = 0x19B620u;
            goto label_19b620;
        }
    }
    ctx->pc = 0x19B5E0u;
    // 0x19b5e0: 0xa200001d  sb          $zero, 0x1D($s0)
    ctx->pc = 0x19b5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b5e4: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x19b5e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19b5e8: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x19b5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x19b5ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19B5ECu;
    {
        const bool branch_taken_0x19b5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5ECu;
            // 0x19b5f0: 0xa0e20008  sb          $v0, 0x8($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5ec) {
            ctx->pc = 0x19B620u;
            goto label_19b620;
        }
    }
    ctx->pc = 0x19B5F4u;
label_19b5f4:
    // 0x19b5f4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19B5F4u;
    {
        const bool branch_taken_0x19b5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b5f4) {
            ctx->pc = 0x19B5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B5F4u;
            // 0x19b5f8: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B614u;
            goto label_19b614;
        }
    }
    ctx->pc = 0x19B5FCu;
    // 0x19b5fc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x19b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19b600: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x19b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x19b604: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19b604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19b608: 0xac6200b8  sw          $v0, 0xB8($v1)
    ctx->pc = 0x19b608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 2));
    // 0x19b60c: 0xa204001d  sb          $a0, 0x1D($s0)
    ctx->pc = 0x19b60cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b610: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x19b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19b614:
    // 0x19b614: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19b618: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19b61c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_19b620:
    // 0x19b620: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19b620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19b624: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19b628: 0x8c43d530  lw          $v1, -0x2AD0($v0)
    ctx->pc = 0x19b628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956336)));
    // 0x19b62c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19b630: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19b630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19b634: 0xc44cd580  lwc1        $f12, -0x2A80($v0)
    ctx->pc = 0x19b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b638: 0xc0c7220  jal         func_31C880
    ctx->pc = 0x19B638u;
    SET_GPR_U32(ctx, 31, 0x19B640u);
    ctx->pc = 0x19B63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B638u;
            // 0x19b63c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31C880u;
    if (runtime->hasFunction(0x31C880u)) {
        auto targetFn = runtime->lookupFunction(0x31C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B640u; }
        if (ctx->pc != 0x19B640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031C880_0x31c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B640u; }
        if (ctx->pc != 0x19B640u) { return; }
    }
    ctx->pc = 0x19B640u;
label_19b640:
    // 0x19b640: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x19b640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19b644: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19B644u;
    {
        const bool branch_taken_0x19b644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B644u;
            // 0x19b648: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b644) {
            ctx->pc = 0x19B6ACu;
            goto label_19b6ac;
        }
    }
    ctx->pc = 0x19B64Cu;
    // 0x19b64c: 0x5880000e  blezl       $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x19B64Cu;
    {
        const bool branch_taken_0x19b64c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x19b64c) {
            ctx->pc = 0x19B650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B64Cu;
            // 0x19b650: 0x43403  sra         $a2, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B688u;
            goto label_19b688;
        }
    }
    ctx->pc = 0x19B654u;
    // 0x19b654: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x19b654u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b658: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x19b658u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x19b65c: 0x86060032  lh          $a2, 0x32($s0)
    ctx->pc = 0x19b65cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x19b660: 0x86050036  lh          $a1, 0x36($s0)
    ctx->pc = 0x19b660u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x19b664: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x19b664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x19b668: 0x86040030  lh          $a0, 0x30($s0)
    ctx->pc = 0x19b668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b66c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x19b66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x19b670: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19b670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19b674: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x19b674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x19b678: 0x5020000d  beql        $at, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x19B678u;
    {
        const bool branch_taken_0x19b678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b678) {
            ctx->pc = 0x19B67Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B678u;
            // 0x19b67c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B6B0u;
            goto label_19b6b0;
        }
    }
    ctx->pc = 0x19B680u;
    // 0x19b680: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19B680u;
    {
        const bool branch_taken_0x19b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B680u;
            // 0x19b684: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b680) {
            ctx->pc = 0x19B6ACu;
            goto label_19b6ac;
        }
    }
    ctx->pc = 0x19B688u;
label_19b688:
    // 0x19b688: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x19b688u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19b68c: 0x86050032  lh          $a1, 0x32($s0)
    ctx->pc = 0x19b68cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x19b690: 0x86040030  lh          $a0, 0x30($s0)
    ctx->pc = 0x19b690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b694: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x19b694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x19b698: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x19b698u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19b69c: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x19b69cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19b6a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B6A0u;
    {
        const bool branch_taken_0x19b6a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6a0) {
            ctx->pc = 0x19B6ACu;
            goto label_19b6ac;
        }
    }
    ctx->pc = 0x19B6A8u;
    // 0x19b6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b6ac:
    // 0x19b6ac: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x19b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19b6b0:
    // 0x19b6b0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19B6B0u;
    {
        const bool branch_taken_0x19b6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6b0) {
            ctx->pc = 0x19B710u;
            goto label_19b710;
        }
    }
    ctx->pc = 0x19B6B8u;
    // 0x19b6b8: 0x5880000c  blezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x19B6B8u;
    {
        const bool branch_taken_0x19b6b8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x19b6b8) {
            ctx->pc = 0x19B6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6B8u;
            // 0x19b6bc: 0x43403  sra         $a2, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B6ECu;
            goto label_19b6ec;
        }
    }
    ctx->pc = 0x19B6C0u;
    // 0x19b6c0: 0x43403  sra         $a2, $a0, 16
    ctx->pc = 0x19b6c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x19b6c4: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x19b6c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19b6c8: 0x86050034  lh          $a1, 0x34($s0)
    ctx->pc = 0x19b6c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19b6cc: 0x86040038  lh          $a0, 0x38($s0)
    ctx->pc = 0x19b6ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x19b6d0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x19b6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x19b6d4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x19b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19b6d8: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x19b6d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x19b6dc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x19B6DCu;
    {
        const bool branch_taken_0x19b6dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6dc) {
            ctx->pc = 0x19B710u;
            goto label_19b710;
        }
    }
    ctx->pc = 0x19B6E4u;
    // 0x19b6e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19B6E4u;
    {
        const bool branch_taken_0x19b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6E4u;
            // 0x19b6e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6e4) {
            ctx->pc = 0x19B710u;
            goto label_19b710;
        }
    }
    ctx->pc = 0x19B6ECu;
label_19b6ec:
    // 0x19b6ec: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x19b6ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19b6f0: 0x86050034  lh          $a1, 0x34($s0)
    ctx->pc = 0x19b6f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19b6f4: 0x86040030  lh          $a0, 0x30($s0)
    ctx->pc = 0x19b6f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b6f8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x19b6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x19b6fc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x19b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19b700: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x19b700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19b704: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19B704u;
    {
        const bool branch_taken_0x19b704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b704) {
            ctx->pc = 0x19B710u;
            goto label_19b710;
        }
    }
    ctx->pc = 0x19B70Cu;
    // 0x19b70c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b710:
    // 0x19b710: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B710u;
    {
        const bool branch_taken_0x19b710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b710) {
            ctx->pc = 0x19B714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B710u;
            // 0x19b714: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B724u;
            goto label_19b724;
        }
    }
    ctx->pc = 0x19B718u;
    // 0x19b718: 0xc055728  jal         func_155CA0
    ctx->pc = 0x19B718u;
    SET_GPR_U32(ctx, 31, 0x19B720u);
    ctx->pc = 0x19B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B718u;
            // 0x19b71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B720u; }
        if (ctx->pc != 0x19B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B720u; }
        if (ctx->pc != 0x19B720u) { return; }
    }
    ctx->pc = 0x19B720u;
label_19b720:
    // 0x19b720: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x19b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19b724:
    // 0x19b724: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x19b724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19b728: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19b728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b72c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x19b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x19b730: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x19b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19b734: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x19b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19b738: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19b738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b73c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x19b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x19b740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b74c: 0x3e00008  jr          $ra
    ctx->pc = 0x19B74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B74Cu;
            // 0x19b750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B754u;
    // 0x19b754: 0x0  nop
    ctx->pc = 0x19b754u;
    // NOP
    // 0x19b758: 0x0  nop
    ctx->pc = 0x19b758u;
    // NOP
    // 0x19b75c: 0x0  nop
    ctx->pc = 0x19b75cu;
    // NOP
    ctx->pc = 0x19b760u;
}
