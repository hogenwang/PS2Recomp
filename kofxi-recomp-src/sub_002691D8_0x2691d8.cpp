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

// Function: sub_002691D8
// Address: 0x2691d8 - 0x269428
void sub_002691D8_0x2691d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002691D8_0x2691d8");
#endif

    switch (ctx->pc) {
        case 0x26929cu: goto label_26929c;
        case 0x2692ccu: goto label_2692cc;
        case 0x2692f8u: goto label_2692f8;
        case 0x269334u: goto label_269334;
        case 0x269344u: goto label_269344;
        case 0x26935cu: goto label_26935c;
        case 0x269388u: goto label_269388;
        case 0x2693b0u: goto label_2693b0;
        case 0x2693ccu: goto label_2693cc;
        case 0x2693f4u: goto label_2693f4;
        default: break;
    }

    ctx->pc = 0x2691d8u;

    // 0x2691d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2691d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2691dc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2691dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2691e0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2691e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2691e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2691e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2691e8: 0x2495004c  addiu       $s5, $a0, 0x4C
    ctx->pc = 0x2691e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x2691ec: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2691ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2691f0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2691f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2691f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2691f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2691f8: 0x24920030  addiu       $s2, $a0, 0x30
    ctx->pc = 0x2691f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2691fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2691fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x269200: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x269200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x269204: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x269204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x269208: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x269208u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x26920c: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x26920cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x269210: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x269210u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x269214: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x269214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x269218: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x269218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x26921c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26921cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x269220: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x269220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x269224: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x269224u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x269228: 0x90440006  lbu         $a0, 0x6($v0)
    ctx->pc = 0x269228u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x26922c: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x26922cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x269230: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x269230u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x269234: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x269234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x269238: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x269238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x26923c: 0xa3a50009  sb          $a1, 0x9($sp)
    ctx->pc = 0x26923cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x269240: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x269240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x269244: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x269244u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x269248: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x269248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26924c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x26924cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x269250: 0xa3a00008  sb          $zero, 0x8($sp)
    ctx->pc = 0x269250u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x269254: 0x8a22000f  lwl         $v0, 0xF($s1)
    ctx->pc = 0x269254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x269258: 0x9a22000c  lwr         $v0, 0xC($s1)
    ctx->pc = 0x269258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x26925c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26925cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x269260: 0x8a230013  lwl         $v1, 0x13($s1)
    ctx->pc = 0x269260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x269264: 0x9a230010  lwr         $v1, 0x10($s1)
    ctx->pc = 0x269264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x269268: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x269268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x26926c: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x26926cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x269270: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x269270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x269274: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x269274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x269278: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x269278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26927c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x269280: 0xa7a2000a  sh          $v0, 0xA($sp)
    ctx->pc = 0x269280u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x269284: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x269284u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x269288: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x269288u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x26928c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x26928cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x269290: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x269290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x269294: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x269294u;
    SET_GPR_U32(ctx, 31, 0x26929Cu);
    ctx->pc = 0x269298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269294u;
    // 0x269298: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x269294u, 0x26929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26929Cu;
label_26929c:
    // 0x26929c: 0x2c42010c  sltiu       $v0, $v0, 0x10C
    ctx->pc = 0x26929cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)268) ? 1 : 0);
    // 0x2692a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2692A0u;
    {
        const bool branch_taken_0x2692a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692A0u;
        // 0x2692a4: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692a0) {
            ctx->pc = 0x2692B4u;
            goto label_2692b4;
        }
    }
    ctx->pc = 0x2692A8u;
    // 0x2692a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2692a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2692ac: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2692ACu;
    {
        const bool branch_taken_0x2692ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692ACu;
        // 0x2692b0: 0x24a57ef8  addiu       $a1, $a1, 0x7EF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692ac) {
            ctx->pc = 0x269354u;
            goto label_269354;
        }
    }
    ctx->pc = 0x2692B4u;
label_2692b4:
    // 0x2692b4: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x2692b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2692b8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x2692b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2692bc: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x2692bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x2692c0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2692c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2692c4: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2692C4u;
    SET_GPR_U32(ctx, 31, 0x2692CCu);
    ctx->pc = 0x2692C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692C4u;
    // 0x2692c8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x2692C4u, 0x2692CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692CCu;
label_2692cc:
    // 0x2692cc: 0x2c4200f8  sltiu       $v0, $v0, 0xF8
    ctx->pc = 0x2692ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)248) ? 1 : 0);
    // 0x2692d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2692D0u;
    {
        const bool branch_taken_0x2692d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692D0u;
        // 0x2692d4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692d0) {
            ctx->pc = 0x2692E4u;
            goto label_2692e4;
        }
    }
    ctx->pc = 0x2692D8u;
    // 0x2692d8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2692d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2692dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2692DCu;
    {
        const bool branch_taken_0x2692dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692DCu;
        // 0x2692e0: 0x24a57f20  addiu       $a1, $a1, 0x7F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692dc) {
            ctx->pc = 0x269354u;
            goto label_269354;
        }
    }
    ctx->pc = 0x2692E4u;
label_2692e4:
    // 0x2692e4: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x2692e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2692e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2692e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692ec: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2692ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2692f0: 0xc09ae16  jal         func_26B858
    ctx->pc = 0x2692F0u;
    SET_GPR_U32(ctx, 31, 0x2692F8u);
    ctx->pc = 0x2692F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692F0u;
    // 0x2692f4: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B858u, 0x2692F0u, 0x2692F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692F8u;
label_2692f8:
    // 0x2692f8: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2692F8u;
    {
        const bool branch_taken_0x2692f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2692FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692F8u;
        // 0x2692fc: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692f8) {
            ctx->pc = 0x26930Cu;
            goto label_26930c;
        }
    }
    ctx->pc = 0x269300u;
    // 0x269300: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x269300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x269304: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x269304u;
    {
        const bool branch_taken_0x269304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269304u;
        // 0x269308: 0x24a57f48  addiu       $a1, $a1, 0x7F48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269304) {
            ctx->pc = 0x269354u;
            goto label_269354;
        }
    }
    ctx->pc = 0x26930Cu;
label_26930c:
    // 0x26930c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x26930cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x269310: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x269310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x269314: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x269314u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x269318: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x269318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x26931c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26931cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x269320: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x269320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x269324: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x269324u;
    {
        const bool branch_taken_0x269324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269324) {
            ctx->pc = 0x269328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269324u;
            // 0x269328: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269368u;
            goto label_269368;
        }
    }
    ctx->pc = 0x26932Cu;
    // 0x26932c: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x26932Cu;
    SET_GPR_U32(ctx, 31, 0x269334u);
    ctx->pc = 0x269330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26932Cu;
    // 0x269330: 0x97a4000a  lhu         $a0, 0xA($sp) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x26932Cu, 0x269334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269334u;
label_269334:
    // 0x269334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x269334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269338: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x269338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26933c: 0xc09adee  jal         func_26B7B8
    ctx->pc = 0x26933Cu;
    SET_GPR_U32(ctx, 31, 0x269344u);
    ctx->pc = 0x269340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26933Cu;
    // 0x269340: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B7B8u, 0x26933Cu, 0x269344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269344u;
label_269344:
    // 0x269344: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269344u;
    {
        const bool branch_taken_0x269344 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x269348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269344u;
        // 0x269348: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269344) {
            ctx->pc = 0x269364u;
            goto label_269364;
        }
    }
    ctx->pc = 0x26934Cu;
    // 0x26934c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26934cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x269350: 0x24a57f78  addiu       $a1, $a1, 0x7F78
    ctx->pc = 0x269350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32632));
label_269354:
    // 0x269354: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x269354u;
    SET_GPR_U32(ctx, 31, 0x26935Cu);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x269354u, 0x26935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26935Cu;
label_26935c:
    // 0x26935c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26935Cu;
    {
        const bool branch_taken_0x26935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26935Cu;
        // 0x269360: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26935c) {
            ctx->pc = 0x269400u;
            goto label_269400;
        }
    }
    ctx->pc = 0x269364u;
label_269364:
    // 0x269364: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x269364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_269368:
    // 0x269368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x269368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26936c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x26936cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x269370: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x269370u;
    {
        const bool branch_taken_0x269370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x269374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269370u;
        // 0x269374: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269370) {
            ctx->pc = 0x269390u;
            goto label_269390;
        }
    }
    ctx->pc = 0x269378u;
    // 0x269378: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x269378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26937c: 0x24a57fa8  addiu       $a1, $a1, 0x7FA8
    ctx->pc = 0x26937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32680));
    // 0x269380: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x269380u;
    SET_GPR_U32(ctx, 31, 0x269388u);
    ctx->pc = 0x269384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269380u;
    // 0x269384: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x269380u, 0x269388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269388u;
label_269388:
    // 0x269388: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x269388u;
    {
        const bool branch_taken_0x269388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269388u;
        // 0x26938c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269388) {
            ctx->pc = 0x269400u;
            goto label_269400;
        }
    }
    ctx->pc = 0x269390u;
label_269390:
    // 0x269390: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x269390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x269394: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x269394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x269398: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x269398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26939c: 0x10c70006  beq         $a2, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x26939Cu;
    {
        const bool branch_taken_0x26939c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2693A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26939Cu;
        // 0x2693a0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26939c) {
            ctx->pc = 0x2693B8u;
            goto label_2693b8;
        }
    }
    ctx->pc = 0x2693A4u;
    // 0x2693a4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2693a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2693a8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2693A8u;
    SET_GPR_U32(ctx, 31, 0x2693B0u);
    ctx->pc = 0x2693ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693A8u;
    // 0x2693ac: 0x24a57fd8  addiu       $a1, $a1, 0x7FD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2693A8u, 0x2693B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693B0u;
label_2693b0:
    // 0x2693b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2693B0u;
    {
        const bool branch_taken_0x2693b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693B0u;
        // 0x2693b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693b0) {
            ctx->pc = 0x269400u;
            goto label_269400;
        }
    }
    ctx->pc = 0x2693B8u;
label_2693b8:
    // 0x2693b8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2693b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2693bc: 0x248400ec  addiu       $a0, $a0, 0xEC
    ctx->pc = 0x2693bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
    // 0x2693c0: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x2693c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
    // 0x2693c4: 0xc049c22  jal         func_127088
    ctx->pc = 0x2693C4u;
    SET_GPR_U32(ctx, 31, 0x2693CCu);
    ctx->pc = 0x2693C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693C4u;
    // 0x2693c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2693C4u, 0x2693CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693CCu;
label_2693cc:
    // 0x2693cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2693CCu;
    {
        const bool branch_taken_0x2693cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693CCu;
        // 0x2693d0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693cc) {
            ctx->pc = 0x2693FCu;
            goto label_2693fc;
        }
    }
    ctx->pc = 0x2693D4u;
    // 0x2693d4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2693d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2693d8: 0x24a58018  addiu       $a1, $a1, -0x7FE8
    ctx->pc = 0x2693d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934552));
    // 0x2693dc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2693dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2693e0: 0x904900ef  lbu         $t1, 0xEF($v0)
    ctx->pc = 0x2693e0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 239)));
    // 0x2693e4: 0x904600ec  lbu         $a2, 0xEC($v0)
    ctx->pc = 0x2693e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x2693e8: 0x904700ed  lbu         $a3, 0xED($v0)
    ctx->pc = 0x2693e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 237)));
    // 0x2693ec: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2693ECu;
    SET_GPR_U32(ctx, 31, 0x2693F4u);
    ctx->pc = 0x2693F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693ECu;
    // 0x2693f0: 0x904800ee  lbu         $t0, 0xEE($v0) (Delay Slot)
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 238)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2693ECu, 0x2693F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693F4u;
label_2693f4:
    // 0x2693f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2693F4u;
    {
        const bool branch_taken_0x2693f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693F4u;
        // 0x2693f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693f4) {
            ctx->pc = 0x269400u;
            goto label_269400;
        }
    }
    ctx->pc = 0x2693FCu;
label_2693fc:
    // 0x2693fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2693fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269400:
    // 0x269400: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x269400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x269404: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x269404u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x269408: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x269408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26940c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x26940cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269410: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x269410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269414: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x269414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269418: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x269418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26941c: 0x3e00008  jr          $ra
    ctx->pc = 0x26941Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26941Cu;
        // 0x269420: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26941Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269424u;
    // 0x269424: 0x0  nop
    ctx->pc = 0x269424u;
    // NOP
    if (ctx->pc == 0x269424u) { ctx->pc = 0x269428u; }
}
