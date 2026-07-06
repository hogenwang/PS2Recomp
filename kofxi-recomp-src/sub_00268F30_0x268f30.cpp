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

// Function: sub_00268F30
// Address: 0x268f30 - 0x2691d8
void sub_00268F30_0x268f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268F30_0x268f30");
#endif

    switch (ctx->pc) {
        case 0x268ff4u: goto label_268ff4;
        case 0x269010u: goto label_269010;
        case 0x269018u: goto label_269018;
        case 0x269024u: goto label_269024;
        case 0x269050u: goto label_269050;
        case 0x26908cu: goto label_26908c;
        case 0x26909cu: goto label_26909c;
        case 0x2690f0u: goto label_2690f0;
        case 0x26910cu: goto label_26910c;
        case 0x269134u: goto label_269134;
        case 0x269158u: goto label_269158;
        case 0x269168u: goto label_269168;
        case 0x269188u: goto label_269188;
        case 0x2691a8u: goto label_2691a8;
        default: break;
    }

    ctx->pc = 0x268f30u;

    // 0x268f30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x268f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x268f34: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x268f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x268f38: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x268f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x268f3c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x268f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x268f40: 0x2495004c  addiu       $s5, $a0, 0x4C
    ctx->pc = 0x268f40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x268f44: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x268f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x268f48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x268f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x268f4c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x268f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x268f50: 0x24920030  addiu       $s2, $a0, 0x30
    ctx->pc = 0x268f50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x268f54: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x268f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x268f58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x268f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x268f5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x268f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x268f60: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x268f60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x268f64: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x268f64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x268f68: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x268f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x268f6c: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x268f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x268f70: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x268f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x268f74: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x268f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x268f78: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x268f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x268f7c: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x268f7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x268f80: 0x90440006  lbu         $a0, 0x6($v0)
    ctx->pc = 0x268f80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x268f84: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x268f84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x268f88: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x268f88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x268f8c: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x268f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x268f90: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x268f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x268f94: 0xa3a50009  sb          $a1, 0x9($sp)
    ctx->pc = 0x268f94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x268f98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x268f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x268f9c: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x268f9cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x268fa0: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x268fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x268fa4: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x268fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x268fa8: 0xa3a00008  sb          $zero, 0x8($sp)
    ctx->pc = 0x268fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x268fac: 0x8a22000f  lwl         $v0, 0xF($s1)
    ctx->pc = 0x268facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x268fb0: 0x9a22000c  lwr         $v0, 0xC($s1)
    ctx->pc = 0x268fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x268fb4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x268fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x268fb8: 0x8a230013  lwl         $v1, 0x13($s1)
    ctx->pc = 0x268fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x268fbc: 0x9a230010  lwr         $v1, 0x10($s1)
    ctx->pc = 0x268fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x268fc0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x268fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x268fc4: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x268fc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x268fc8: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x268fc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x268fcc: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x268fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x268fd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x268fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x268fd4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x268fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x268fd8: 0xa7a2000a  sh          $v0, 0xA($sp)
    ctx->pc = 0x268fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x268fdc: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x268fdcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x268fe0: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x268fe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x268fe4: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x268fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x268fe8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x268fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x268fec: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x268FECu;
    SET_GPR_U32(ctx, 31, 0x268FF4u);
    ctx->pc = 0x268FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FECu;
    // 0x268ff0: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x268FECu, 0x268FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FF4u;
label_268ff4:
    // 0x268ff4: 0x2c42010c  sltiu       $v0, $v0, 0x10C
    ctx->pc = 0x268ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)268) ? 1 : 0);
    // 0x268ff8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268FF8u;
    {
        const bool branch_taken_0x268ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FF8u;
        // 0x268ffc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ff8) {
            ctx->pc = 0x26900Cu;
            goto label_26900c;
        }
    }
    ctx->pc = 0x269000u;
    // 0x269000: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x269000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x269004: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x269004u;
    {
        const bool branch_taken_0x269004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269004u;
        // 0x269008: 0x24a57ef8  addiu       $a1, $a1, 0x7EF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269004) {
            ctx->pc = 0x269180u;
            goto label_269180;
        }
    }
    ctx->pc = 0x26900Cu;
label_26900c:
    // 0x26900c: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x26900cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_269010:
    // 0x269010: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x269010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269014: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x269014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_269018:
    // 0x269018: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x269018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x26901c: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x26901Cu;
    SET_GPR_U32(ctx, 31, 0x269024u);
    ctx->pc = 0x269020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26901Cu;
    // 0x269020: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x26901Cu, 0x269024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269024u;
label_269024:
    // 0x269024: 0x2c4200f8  sltiu       $v0, $v0, 0xF8
    ctx->pc = 0x269024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)248) ? 1 : 0);
    // 0x269028: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269028u;
    {
        const bool branch_taken_0x269028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269028u;
        // 0x26902c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269028) {
            ctx->pc = 0x26903Cu;
            goto label_26903c;
        }
    }
    ctx->pc = 0x269030u;
    // 0x269030: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x269030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x269034: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x269034u;
    {
        const bool branch_taken_0x269034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269034u;
        // 0x269038: 0x24a57f20  addiu       $a1, $a1, 0x7F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269034) {
            ctx->pc = 0x269180u;
            goto label_269180;
        }
    }
    ctx->pc = 0x26903Cu;
label_26903c:
    // 0x26903c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x26903cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x269040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269044: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x269044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x269048: 0xc09ae16  jal         func_26B858
    ctx->pc = 0x269048u;
    SET_GPR_U32(ctx, 31, 0x269050u);
    ctx->pc = 0x26904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269048u;
    // 0x26904c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B858u, 0x269048u, 0x269050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269050u;
label_269050:
    // 0x269050: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269050u;
    {
        const bool branch_taken_0x269050 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x269054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269050u;
        // 0x269054: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269050) {
            ctx->pc = 0x269064u;
            goto label_269064;
        }
    }
    ctx->pc = 0x269058u;
    // 0x269058: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x269058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26905c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x26905Cu;
    {
        const bool branch_taken_0x26905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26905Cu;
        // 0x269060: 0x24a57f48  addiu       $a1, $a1, 0x7F48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26905c) {
            ctx->pc = 0x269180u;
            goto label_269180;
        }
    }
    ctx->pc = 0x269064u;
label_269064:
    // 0x269064: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x269064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x269068: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x269068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x26906c: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x26906cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x269070: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x269070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x269074: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x269074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x269078: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x269078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26907c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x26907Cu;
    {
        const bool branch_taken_0x26907c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26907c) {
            ctx->pc = 0x269080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26907Cu;
            // 0x269080: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2690B4u;
            goto label_2690b4;
        }
    }
    ctx->pc = 0x269084u;
    // 0x269084: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x269084u;
    SET_GPR_U32(ctx, 31, 0x26908Cu);
    ctx->pc = 0x269088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269084u;
    // 0x269088: 0x97a4000a  lhu         $a0, 0xA($sp) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x269084u, 0x26908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26908Cu;
label_26908c:
    // 0x26908c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269090: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x269090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269094: 0xc09adee  jal         func_26B7B8
    ctx->pc = 0x269094u;
    SET_GPR_U32(ctx, 31, 0x26909Cu);
    ctx->pc = 0x269098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269094u;
    // 0x269098: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B7B8u, 0x269094u, 0x26909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26909Cu;
label_26909c:
    // 0x26909c: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26909Cu;
    {
        const bool branch_taken_0x26909c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2690A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26909Cu;
        // 0x2690a0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26909c) {
            ctx->pc = 0x2690B0u;
            goto label_2690b0;
        }
    }
    ctx->pc = 0x2690A4u;
    // 0x2690a4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2690a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2690a8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2690A8u;
    {
        const bool branch_taken_0x2690a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690A8u;
        // 0x2690ac: 0x24a57f78  addiu       $a1, $a1, 0x7F78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690a8) {
            ctx->pc = 0x269180u;
            goto label_269180;
        }
    }
    ctx->pc = 0x2690B0u;
label_2690b0:
    // 0x2690b0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2690b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2690b4:
    // 0x2690b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2690b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2690b8: 0x90900000  lbu         $s0, 0x0($a0)
    ctx->pc = 0x2690b8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2690bc: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2690BCu;
    {
        const bool branch_taken_0x2690bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2690C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690BCu;
        // 0x2690c0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690bc) {
            ctx->pc = 0x2690D0u;
            goto label_2690d0;
        }
    }
    ctx->pc = 0x2690C4u;
    // 0x2690c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2690c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2690c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2690C8u;
    {
        const bool branch_taken_0x2690c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690C8u;
        // 0x2690cc: 0x24a57fa8  addiu       $a1, $a1, 0x7FA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690c8) {
            ctx->pc = 0x2691A0u;
            goto label_2691a0;
        }
    }
    ctx->pc = 0x2690D0u;
label_2690d0:
    // 0x2690d0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2690d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2690d4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2690d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2690d8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2690d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2690dc: 0x10c70006  beq         $a2, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2690DCu;
    {
        const bool branch_taken_0x2690dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2690E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690DCu;
        // 0x2690e0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690dc) {
            ctx->pc = 0x2690F8u;
            goto label_2690f8;
        }
    }
    ctx->pc = 0x2690E4u;
    // 0x2690e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2690e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2690e8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2690E8u;
    SET_GPR_U32(ctx, 31, 0x2690F0u);
    ctx->pc = 0x2690ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2690E8u;
    // 0x2690ec: 0x24a57fd8  addiu       $a1, $a1, 0x7FD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2690E8u, 0x2690F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2690F0u;
label_2690f0:
    // 0x2690f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2690F0u;
    {
        const bool branch_taken_0x2690f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690F0u;
        // 0x2690f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690f0) {
            ctx->pc = 0x2691B4u;
            goto label_2691b4;
        }
    }
    ctx->pc = 0x2690F8u;
label_2690f8:
    // 0x2690f8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2690f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2690fc: 0x248400ec  addiu       $a0, $a0, 0xEC
    ctx->pc = 0x2690fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
    // 0x269100: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x269100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
    // 0x269104: 0xc049c22  jal         func_127088
    ctx->pc = 0x269104u;
    SET_GPR_U32(ctx, 31, 0x26910Cu);
    ctx->pc = 0x269108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269104u;
    // 0x269108: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x269104u, 0x26910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26910Cu;
label_26910c:
    // 0x26910c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26910Cu;
    {
        const bool branch_taken_0x26910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26910Cu;
        // 0x269110: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26910c) {
            ctx->pc = 0x26913Cu;
            goto label_26913c;
        }
    }
    ctx->pc = 0x269114u;
    // 0x269114: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x269114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x269118: 0x24a58018  addiu       $a1, $a1, -0x7FE8
    ctx->pc = 0x269118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934552));
    // 0x26911c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x269120: 0x904900ef  lbu         $t1, 0xEF($v0)
    ctx->pc = 0x269120u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 239)));
    // 0x269124: 0x904600ec  lbu         $a2, 0xEC($v0)
    ctx->pc = 0x269124u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x269128: 0x904700ed  lbu         $a3, 0xED($v0)
    ctx->pc = 0x269128u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 237)));
    // 0x26912c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26912Cu;
    SET_GPR_U32(ctx, 31, 0x269134u);
    ctx->pc = 0x269130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26912Cu;
    // 0x269130: 0x904800ee  lbu         $t0, 0xEE($v0) (Delay Slot)
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 238)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26912Cu, 0x269134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269134u;
label_269134:
    // 0x269134: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x269134u;
    {
        const bool branch_taken_0x269134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269134u;
        // 0x269138: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269134) {
            ctx->pc = 0x2691B4u;
            goto label_2691b4;
        }
    }
    ctx->pc = 0x26913Cu;
label_26913c:
    // 0x26913c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x26913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x269140: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x269140u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x269144: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x269144u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x269148: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x269148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x26914c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26914cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x269150: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x269150u;
    SET_GPR_U32(ctx, 31, 0x269158u);
    ctx->pc = 0x269154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269150u;
    // 0x269154: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x269150u, 0x269158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269158u;
label_269158:
    // 0x269158: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x269158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26915c: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x26915cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x269160: 0xc09b218  jal         func_26C860
    ctx->pc = 0x269160u;
    SET_GPR_U32(ctx, 31, 0x269168u);
    ctx->pc = 0x269164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269160u;
    // 0x269164: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C860u, 0x269160u, 0x269168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269168u;
label_269168:
    // 0x269168: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x269168u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26916c: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26916Cu;
    {
        const bool branch_taken_0x26916c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26916c) {
            ctx->pc = 0x269170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26916Cu;
            // 0x269170: 0x80620002  lb          $v0, 0x2($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269190u;
            goto label_269190;
        }
    }
    ctx->pc = 0x269174u;
    // 0x269174: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x269174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x269178: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x269178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26917c: 0x24a58050  addiu       $a1, $a1, -0x7FB0
    ctx->pc = 0x26917cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934608));
label_269180:
    // 0x269180: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x269180u;
    SET_GPR_U32(ctx, 31, 0x269188u);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x269180u, 0x269188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269188u;
label_269188:
    // 0x269188: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x269188u;
    {
        const bool branch_taken_0x269188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269188u;
        // 0x26918c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269188) {
            ctx->pc = 0x2691B4u;
            goto label_2691b4;
        }
    }
    ctx->pc = 0x269190u;
label_269190:
    // 0x269190: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269190u;
    {
        const bool branch_taken_0x269190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x269194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269190u;
        // 0x269194: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269190) {
            ctx->pc = 0x2691B0u;
            goto label_2691b0;
        }
    }
    ctx->pc = 0x269198u;
    // 0x269198: 0x90660002  lbu         $a2, 0x2($v1)
    ctx->pc = 0x269198u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26919c: 0x24a58070  addiu       $a1, $a1, -0x7F90
    ctx->pc = 0x26919cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934640));
label_2691a0:
    // 0x2691a0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2691A0u;
    SET_GPR_U32(ctx, 31, 0x2691A8u);
    ctx->pc = 0x2691A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691A0u;
    // 0x2691a4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2691A0u, 0x2691A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691A8u;
label_2691a8:
    // 0x2691a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2691A8u;
    {
        const bool branch_taken_0x2691a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691A8u;
        // 0x2691ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691a8) {
            ctx->pc = 0x2691B4u;
            goto label_2691b4;
        }
    }
    ctx->pc = 0x2691B0u;
label_2691b0:
    // 0x2691b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2691b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2691b4:
    // 0x2691b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2691b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2691b8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2691b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2691bc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2691bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2691c0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2691c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2691c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2691c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2691c8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2691c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2691cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2691ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2691d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2691D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2691D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691D0u;
        // 0x2691d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2691D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2691D8u;
}
