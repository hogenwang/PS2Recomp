#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026EBD0
// Address: 0x26ebd0 - 0x26ee58
void sub_0026EBD0_0x26ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EBD0_0x26ebd0");
#endif

    switch (ctx->pc) {
        case 0x26ec10u: goto label_26ec10;
        case 0x26ec34u: goto label_26ec34;
        case 0x26ec48u: goto label_26ec48;
        case 0x26ec6cu: goto label_26ec6c;
        case 0x26ec9cu: goto label_26ec9c;
        case 0x26ecb4u: goto label_26ecb4;
        case 0x26ed38u: goto label_26ed38;
        case 0x26eda4u: goto label_26eda4;
        case 0x26edacu: goto label_26edac;
        case 0x26ede4u: goto label_26ede4;
        case 0x26edfcu: goto label_26edfc;
        case 0x26ee0cu: goto label_26ee0c;
        case 0x26ee14u: goto label_26ee14;
        default: break;
    }

    ctx->pc = 0x26ebd0u;

    // 0x26ebd0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x26ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x26ebd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ebd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebd8: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x26ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x26ebdc: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x26ebdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x26ebe0: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x26ebe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ebe4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x26ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x26ebe8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26ebe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebec: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x26ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x26ebf0: 0x2672004c  addiu       $s2, $s3, 0x4C
    ctx->pc = 0x26ebf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x26ebf4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x26ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x26ebf8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x26ebf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ebfc: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x26ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x26ec00: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x26ec00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x26ec04: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x26ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x26ec08: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26EC08u;
    SET_GPR_U32(ctx, 31, 0x26EC10u);
    ctx->pc = 0x26EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC08u;
    // 0x26ec0c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26EC08u, 0x26EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC10u;
label_26ec10:
    // 0x26ec10: 0x8e630188  lw          $v1, 0x188($s3)
    ctx->pc = 0x26ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 392)));
    // 0x26ec14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26ec18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26ec18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26ec1c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26ec1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26ec20: 0x88640010  lwl         $a0, 0x10($v1)
    ctx->pc = 0x26ec20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26ec24: 0x9864000d  lwr         $a0, 0xD($v1)
    ctx->pc = 0x26ec24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26ec28: 0x26109548  addiu       $s0, $s0, -0x6AB8
    ctx->pc = 0x26ec28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939976));
    // 0x26ec2c: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26EC2Cu;
    SET_GPR_U32(ctx, 31, 0x26EC34u);
    ctx->pc = 0x26EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC2Cu;
    // 0x26ec30: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264360u, 0x26EC2Cu, 0x26EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC34u;
label_26ec34:
    // 0x26ec34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26ec34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26ec38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26ec3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ec40: 0xc043e24  jal         func_10F890
    ctx->pc = 0x26EC40u;
    SET_GPR_U32(ctx, 31, 0x26EC48u);
    ctx->pc = 0x26EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC40u;
    // 0x26ec44: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x26EC40u, 0x26EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC48u;
label_26ec48:
    // 0x26ec48: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ec4c: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x26ec4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x26ec50: 0x92620068  lbu         $v0, 0x68($s3)
    ctx->pc = 0x26ec50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x26ec54: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ec58: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x26ec58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ec5c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ec60: 0x92620069  lbu         $v0, 0x69($s3)
    ctx->pc = 0x26ec60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 105)));
    // 0x26ec64: 0xc09b660  jal         func_26D980
    ctx->pc = 0x26EC64u;
    SET_GPR_U32(ctx, 31, 0x26EC6Cu);
    ctx->pc = 0x26EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC64u;
    // 0x26ec68: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D980u, 0x26EC64u, 0x26EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC6Cu;
label_26ec6c:
    // 0x26ec6c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ec70: 0x2665006a  addiu       $a1, $s3, 0x6A
    ctx->pc = 0x26ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 106));
    // 0x26ec74: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x26ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x26ec78: 0x8e640188  lw          $a0, 0x188($s3)
    ctx->pc = 0x26ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 392)));
    // 0x26ec7c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ec80: 0x88820010  lwl         $v0, 0x10($a0)
    ctx->pc = 0x26ec80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x26ec84: 0x9882000d  lwr         $v0, 0xD($a0)
    ctx->pc = 0x26ec84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x26ec88: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x26ec8c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ec90: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x26ec90u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26ec94: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26EC94u;
    SET_GPR_U32(ctx, 31, 0x26EC9Cu);
    ctx->pc = 0x26EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EC94u;
    // 0x26ec98: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26EC94u, 0x26EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC9Cu;
label_26ec9c:
    // 0x26ec9c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26eca0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x26eca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x26eca4: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x26eca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
    // 0x26eca8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26eca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ecac: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26ECACu;
    SET_GPR_U32(ctx, 31, 0x26ECB4u);
    ctx->pc = 0x26ECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ECACu;
    // 0x26ecb0: 0x248400ec  addiu       $a0, $a0, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26ECACu, 0x26ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ECB4u;
label_26ecb4:
    // 0x26ecb4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ecb8: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x26ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x26ecbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ecc0: 0xa08300f0  sb          $v1, 0xF0($a0)
    ctx->pc = 0x26ecc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 240), (uint8_t)GPR_U32(ctx, 3));
    // 0x26ecc4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ecc8: 0xa05100f1  sb          $s1, 0xF1($v0)
    ctx->pc = 0x26ecc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 241), (uint8_t)GPR_U32(ctx, 17));
    // 0x26eccc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ecd0: 0xa06500f2  sb          $a1, 0xF2($v1)
    ctx->pc = 0x26ecd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 242), (uint8_t)GPR_U32(ctx, 5));
    // 0x26ecd4: 0x8e62017c  lw          $v0, 0x17C($s3)
    ctx->pc = 0x26ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
    // 0x26ecd8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x26ECD8u;
    {
        const bool branch_taken_0x26ecd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ecd8) {
            ctx->pc = 0x26ECDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ECD8u;
            // 0x26ecdc: 0x8e620188  lw          $v0, 0x188($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26ED48u;
            goto label_26ed48;
        }
    }
    ctx->pc = 0x26ECE0u;
    // 0x26ece0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x26ece0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26ece4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x26ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x26ece8: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26ece8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26ecec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26ECECu;
    {
        const bool branch_taken_0x26ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECECu;
        // 0x26ecf0: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecec) {
            ctx->pc = 0x26ED44u;
            goto label_26ed44;
        }
    }
    ctx->pc = 0x26ECF4u;
    // 0x26ecf4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ecf8: 0xa06200f3  sb          $v0, 0xF3($v1)
    ctx->pc = 0x26ecf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 243), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ecfc: 0x8e64017c  lw          $a0, 0x17C($s3)
    ctx->pc = 0x26ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
    // 0x26ed00: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x26ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ed04: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x26ed04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x26ed08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26ed0c: 0xa0a200f4  sb          $v0, 0xF4($a1)
    ctx->pc = 0x26ed0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 244), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ed10: 0x8e63017c  lw          $v1, 0x17C($s3)
    ctx->pc = 0x26ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
    // 0x26ed14: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ed18: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x26ed18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ed1c: 0xa08200f5  sb          $v0, 0xF5($a0)
    ctx->pc = 0x26ed1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 245), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ed20: 0x8e63017c  lw          $v1, 0x17C($s3)
    ctx->pc = 0x26ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
    // 0x26ed24: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ed28: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x26ed28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x26ed2c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x26ed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26ed30: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26ED30u;
    SET_GPR_U32(ctx, 31, 0x26ED38u);
    ctx->pc = 0x26ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED30u;
    // 0x26ed34: 0x248400f6  addiu       $a0, $a0, 0xF6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 246));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26ED30u, 0x26ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED38u;
label_26ed38:
    // 0x26ed38: 0x8e63017c  lw          $v1, 0x17C($s3)
    ctx->pc = 0x26ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
    // 0x26ed3c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x26ed3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x26ed40: 0x2454000a  addiu       $s4, $v0, 0xA
    ctx->pc = 0x26ed40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_26ed44:
    // 0x26ed44: 0x8e620188  lw          $v0, 0x188($s3)
    ctx->pc = 0x26ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 392)));
label_26ed48:
    // 0x26ed48: 0x8c4303e8  lw          $v1, 0x3E8($v0)
    ctx->pc = 0x26ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
    // 0x26ed4c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x26ED4Cu;
    {
        const bool branch_taken_0x26ed4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED4Cu;
        // 0x26ed50: 0x26820006  addiu       $v0, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed4c) {
            ctx->pc = 0x26EE1Cu;
            goto label_26ee1c;
        }
    }
    ctx->pc = 0x26ED54u;
    // 0x26ed54: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26ed54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26ed58: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26ED58u;
    {
        const bool branch_taken_0x26ed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED58u;
        // 0x26ed5c: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed58) {
            ctx->pc = 0x26EE1Cu;
            goto label_26ee1c;
        }
    }
    ctx->pc = 0x26ED60u;
    // 0x26ed60: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ed64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ed68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26ed68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ed6c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x26ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x26ed70: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26ed70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26ed74: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26ed74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26ed78: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ed7c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x26ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x26ed80: 0xa04400ec  sb          $a0, 0xEC($v0)
    ctx->pc = 0x26ed80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 4));
    // 0x26ed84: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26ed84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26ed88: 0x268200ec  addiu       $v0, $s4, 0xEC
    ctx->pc = 0x26ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 236));
    // 0x26ed8c: 0x8e650188  lw          $a1, 0x188($s3)
    ctx->pc = 0x26ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 392)));
    // 0x26ed90: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x26ed90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x26ed94: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ed98: 0x24a503e8  addiu       $a1, $a1, 0x3E8
    ctx->pc = 0x26ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
    // 0x26ed9c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26ED9Cu;
    SET_GPR_U32(ctx, 31, 0x26EDA4u);
    ctx->pc = 0x26EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED9Cu;
    // 0x26eda0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26ED9Cu, 0x26EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDA4u;
label_26eda4:
    // 0x26eda4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26EDA4u;
    SET_GPR_U32(ctx, 31, 0x26EDACu);
    ctx->pc = 0x26EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDA4u;
    // 0x26eda8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26EDA4u, 0x26EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDACu;
label_26edac:
    // 0x26edac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x26edb0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x26edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x26edb4: 0x2c420138  sltiu       $v0, $v0, 0x138
    ctx->pc = 0x26edb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x26edb8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26EDB8u;
    {
        const bool branch_taken_0x26edb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDB8u;
        // 0x26edbc: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edb8) {
            ctx->pc = 0x26EE24u;
            goto label_26ee24;
        }
    }
    ctx->pc = 0x26EDC0u;
    // 0x26edc0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26edc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26edc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edc8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x26edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x26edcc: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26edccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26edd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26edd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26edd4: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x26edd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26edd8: 0x261000ec  addiu       $s0, $s0, 0xEC
    ctx->pc = 0x26edd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x26eddc: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26EDDCu;
    SET_GPR_U32(ctx, 31, 0x26EDE4u);
    ctx->pc = 0x26EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDDCu;
    // 0x26ede0: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26EDDCu, 0x26EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDE4u;
label_26ede4:
    // 0x26ede4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x26ede4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ede8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26ede8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edec: 0x268200ec  addiu       $v0, $s4, 0xEC
    ctx->pc = 0x26edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 236));
    // 0x26edf0: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x26edf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26edf4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26EDF4u;
    SET_GPR_U32(ctx, 31, 0x26EDFCu);
    ctx->pc = 0x26EDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDF4u;
    // 0x26edf8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26EDF4u, 0x26EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDFCu;
label_26edfc:
    // 0x26edfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26edfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26ee00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee04: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26EE04u;
    SET_GPR_U32(ctx, 31, 0x26EE0Cu);
    ctx->pc = 0x26EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE04u;
    // 0x26ee08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26EE04u, 0x26EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE0Cu;
label_26ee0c:
    // 0x26ee0c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26EE0Cu;
    SET_GPR_U32(ctx, 31, 0x26EE14u);
    ctx->pc = 0x26EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE0Cu;
    // 0x26ee10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26EE0Cu, 0x26EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE14u;
label_26ee14:
    // 0x26ee14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26EE14u;
    {
        const bool branch_taken_0x26ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE14u;
        // 0x26ee18: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee14) {
            ctx->pc = 0x26EE24u;
            goto label_26ee24;
        }
    }
    ctx->pc = 0x26EE1Cu;
label_26ee1c:
    // 0x26ee1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26EE1Cu;
    {
        const bool branch_taken_0x26ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE1Cu;
        // 0x26ee20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee1c) {
            ctx->pc = 0x26EE38u;
            goto label_26ee38;
        }
    }
    ctx->pc = 0x26EE24u;
label_26ee24:
    // 0x26ee24: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ee28: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x26ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ee2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ee2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee30: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x26ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x26ee34: 0xa06400ec  sb          $a0, 0xEC($v1)
    ctx->pc = 0x26ee34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 236), (uint8_t)GPR_U32(ctx, 4));
label_26ee38:
    // 0x26ee38: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x26ee38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x26ee3c: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x26ee3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x26ee40: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x26ee40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26ee44: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x26ee44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26ee48: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x26ee48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26ee4c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x26ee4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26ee50: 0x3e00008  jr          $ra
    ctx->pc = 0x26EE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE50u;
        // 0x26ee54: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EE58u;
}
