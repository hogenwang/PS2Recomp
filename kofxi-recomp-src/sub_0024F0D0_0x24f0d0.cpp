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

// Function: sub_0024F0D0
// Address: 0x24f0d0 - 0x24f728
void sub_0024F0D0_0x24f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F0D0_0x24f0d0");
#endif

    switch (ctx->pc) {
        case 0x24f170u: goto label_24f170;
        case 0x24f208u: goto label_24f208;
        case 0x24f248u: goto label_24f248;
        case 0x24f290u: goto label_24f290;
        case 0x24f35cu: goto label_24f35c;
        case 0x24f3b0u: goto label_24f3b0;
        case 0x24f41cu: goto label_24f41c;
        case 0x24f444u: goto label_24f444;
        case 0x24f500u: goto label_24f500;
        case 0x24f58cu: goto label_24f58c;
        case 0x24f5acu: goto label_24f5ac;
        case 0x24f5b8u: goto label_24f5b8;
        case 0x24f5d0u: goto label_24f5d0;
        case 0x24f5dcu: goto label_24f5dc;
        case 0x24f5e8u: goto label_24f5e8;
        case 0x24f654u: goto label_24f654;
        case 0x24f6a8u: goto label_24f6a8;
        case 0x24f6ecu: goto label_24f6ec;
        case 0x24f6f4u: goto label_24f6f4;
        default: break;
    }

    ctx->pc = 0x24f0d0u;

    // 0x24f0d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24f0d4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24f0d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24f0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24f0dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24f0dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f0e0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24f0e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24f0e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f0e8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x24f0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x24f0ec: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x24f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x24f0f0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24f0f4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24f0f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24f0fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24f100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24f100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24f104: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x24f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f108: 0x8e95000c  lw          $s5, 0xC($s4)
    ctx->pc = 0x24f108u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x24f10c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x24f10cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f110: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x24f110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24f114: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x24f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x24f118: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24f118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24f11c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24f120: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x24f120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f124: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24f124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24f128: 0xaea40008  sw          $a0, 0x8($s5)
    ctx->pc = 0x24f128u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
    // 0x24f12c: 0x16600048  bnez        $s3, . + 4 + (0x48 << 2)
    ctx->pc = 0x24F12Cu;
    {
        const bool branch_taken_0x24f12c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F12Cu;
        // 0x24f130: 0xaea3000c  sw          $v1, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f12c) {
            ctx->pc = 0x24F250u;
            goto label_24f250;
        }
    }
    ctx->pc = 0x24F134u;
    // 0x24f134: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24f134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24f138: 0x8c431034  lw          $v1, 0x1034($v0)
    ctx->pc = 0x24f138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4148)));
    // 0x24f13c: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F13Cu;
    {
        const bool branch_taken_0x24f13c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x24F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F13Cu;
        // 0x24f140: 0x3c1e003a  lui         $fp, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f13c) {
            ctx->pc = 0x24F15Cu;
            goto label_24f15c;
        }
    }
    ctx->pc = 0x24F144u;
    // 0x24f144: 0x8fc21030  lw          $v0, 0x1030($fp)
    ctx->pc = 0x24f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4144)));
    // 0x24f148: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24f148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24f14c: 0x10400160  beqz        $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x24F14Cu;
    {
        const bool branch_taken_0x24f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F14Cu;
        // 0x24f150: 0x8fc21030  lw          $v0, 0x1030($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f14c) {
            ctx->pc = 0x24F6D0u;
            goto label_24f6d0;
        }
    }
    ctx->pc = 0x24F154u;
    // 0x24f154: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F154u;
    {
        const bool branch_taken_0x24f154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F154u;
        // 0x24f158: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f154) {
            ctx->pc = 0x24F164u;
            goto label_24f164;
        }
    }
    ctx->pc = 0x24F15Cu;
label_24f15c:
    // 0x24f15c: 0x8fc21030  lw          $v0, 0x1030($fp)
    ctx->pc = 0x24f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4144)));
    // 0x24f160: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x24f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_24f164:
    // 0x24f164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24f168: 0xc098552  jal         func_261548
    ctx->pc = 0x24F168u;
    SET_GPR_U32(ctx, 31, 0x24F170u);
    ctx->pc = 0x24F16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F168u;
    // 0x24f16c: 0xafc21030  sw          $v0, 0x1030($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x24F168u, 0x24F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F170u;
label_24f170:
    // 0x24f170: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24f170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f174: 0x12600156  beqz        $s3, . + 4 + (0x156 << 2)
    ctx->pc = 0x24F174u;
    {
        const bool branch_taken_0x24f174 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F174u;
        // 0x24f178: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f174) {
            ctx->pc = 0x24F6D0u;
            goto label_24f6d0;
        }
    }
    ctx->pc = 0x24F17Cu;
    // 0x24f17c: 0x8c621190  lw          $v0, 0x1190($v1)
    ctx->pc = 0x24f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4496)));
    // 0x24f180: 0x24641190  addiu       $a0, $v1, 0x1190
    ctx->pc = 0x24f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4496));
    // 0x24f184: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F184u;
    {
        const bool branch_taken_0x24f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F184u;
        // 0x24f188: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f184) {
            ctx->pc = 0x24F198u;
            goto label_24f198;
        }
    }
    ctx->pc = 0x24F18Cu;
    // 0x24f18c: 0x8c621190  lw          $v0, 0x1190($v1)
    ctx->pc = 0x24f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4496)));
    // 0x24f190: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x24f190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x24f194: 0x0  nop
    ctx->pc = 0x24f194u;
    // NOP
label_24f198:
    // 0x24f198: 0xac731190  sw          $s3, 0x1190($v1)
    ctx->pc = 0x24f198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4496), GPR_U32(ctx, 19));
    // 0x24f19c: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x24f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x24f1a0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x24f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24f1a4: 0xa2620008  sb          $v0, 0x8($s3)
    ctx->pc = 0x24f1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f1a8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x24f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f1ac: 0x90620009  lbu         $v0, 0x9($v1)
    ctx->pc = 0x24f1acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x24f1b0: 0xa2620009  sb          $v0, 0x9($s3)
    ctx->pc = 0x24f1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f1b4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x24f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f1b8: 0x90620005  lbu         $v0, 0x5($v1)
    ctx->pc = 0x24f1b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x24f1bc: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x24f1bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x24f1c0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f1c4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24f1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24f1c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f1cc: 0xa662000a  sh          $v0, 0xA($s3)
    ctx->pc = 0x24f1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x24f1d0: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x24f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x24f1d4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x24f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f1d8: 0x8862000f  lwl         $v0, 0xF($v1)
    ctx->pc = 0x24f1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24f1dc: 0x9862000c  lwr         $v0, 0xC($v1)
    ctx->pc = 0x24f1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24f1e0: 0xaa620013  swl         $v0, 0x13($s3)
    ctx->pc = 0x24f1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24f1e4: 0xba620010  swr         $v0, 0x10($s3)
    ctx->pc = 0x24f1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24f1e8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x24f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f1ec: 0x88430013  lwl         $v1, 0x13($v0)
    ctx->pc = 0x24f1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24f1f0: 0x98430010  lwr         $v1, 0x10($v0)
    ctx->pc = 0x24f1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24f1f4: 0xaa630017  swl         $v1, 0x17($s3)
    ctx->pc = 0x24f1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24f1f8: 0xba630014  swr         $v1, 0x14($s3)
    ctx->pc = 0x24f1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24f1fc: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x24F1FCu;
    {
        const bool branch_taken_0x24f1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1FCu;
        // 0x24f200: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1fc) {
            ctx->pc = 0x24F4A4u;
            goto label_24f4a4;
        }
    }
    ctx->pc = 0x24F204u;
    // 0x24f204: 0x0  nop
    ctx->pc = 0x24f204u;
    // NOP
label_24f208:
    // 0x24f208: 0x2223a  dsrl        $a0, $v0, 8
    ctx->pc = 0x24f208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 8);
    // 0x24f20c: 0xa1220002  sb          $v0, 0x2($t1)
    ctx->pc = 0x24f20cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f210: 0xa1240003  sb          $a0, 0x3($t1)
    ctx->pc = 0x24f210u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x24f214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24f214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f218: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x24f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24f21c: 0x90620007  lbu         $v0, 0x7($v1)
    ctx->pc = 0x24f21cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x24f220: 0x90640006  lbu         $a0, 0x6($v1)
    ctx->pc = 0x24f220u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x24f224: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f228: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24f228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24f22c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f230: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24f234: 0x2223a  dsrl        $a0, $v0, 8
    ctx->pc = 0x24f234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 8);
    // 0x24f238: 0xa0620006  sb          $v0, 0x6($v1)
    ctx->pc = 0x24f238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f23c: 0xa0640007  sb          $a0, 0x7($v1)
    ctx->pc = 0x24f23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x24f240: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x24F240u;
    SET_GPR_U32(ctx, 31, 0x24F248u);
    ctx->pc = 0x24F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F240u;
    // 0x24f244: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x24F240u, 0x24F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F248u;
label_24f248:
    // 0x24f248: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x24F248u;
    {
        const bool branch_taken_0x24f248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f248) {
            ctx->pc = 0x24F4A4u;
            goto label_24f4a4;
        }
    }
    ctx->pc = 0x24F250u;
label_24f250:
    // 0x24f250: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x24f250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x24f254: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x24F254u;
    {
        const bool branch_taken_0x24f254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F254u;
        // 0x24f258: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f254) {
            ctx->pc = 0x24F2D4u;
            goto label_24f2d4;
        }
    }
    ctx->pc = 0x24F25Cu;
    // 0x24f25c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24f260: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x24f260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f264: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x24f264u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x24f268: 0x90850006  lbu         $a1, 0x6($a0)
    ctx->pc = 0x24f268u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x24f26c: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x24f26cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x24f270: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x24f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x24f274: 0x90c40006  lbu         $a0, 0x6($a2)
    ctx->pc = 0x24f274u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x24f278: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x24f278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x24f27c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f280: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x24f280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24f284: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24F284u;
    {
        const bool branch_taken_0x24f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F284u;
        // 0x24f288: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f284) {
            ctx->pc = 0x24F2C4u;
            goto label_24f2c4;
        }
    }
    ctx->pc = 0x24F28Cu;
    // 0x24f28c: 0x0  nop
    ctx->pc = 0x24f28cu;
    // NOP
label_24f290:
    // 0x24f290: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x24f290u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f294: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x24F294u;
    {
        const bool branch_taken_0x24f294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f294) {
            ctx->pc = 0x24F2D4u;
            goto label_24f2d4;
        }
    }
    ctx->pc = 0x24F29Cu;
    // 0x24f29c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24f2a0: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x24f2a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x24f2a4: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x24f2a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x24f2a8: 0x90850006  lbu         $a1, 0x6($a0)
    ctx->pc = 0x24f2a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x24f2ac: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f2b0: 0x90c40006  lbu         $a0, 0x6($a2)
    ctx->pc = 0x24f2b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x24f2b4: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x24f2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x24f2b8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x24f2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x24f2bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24f2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24f2c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x24f2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_24f2c4:
    // 0x24f2c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f2c8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x24f2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24f2cc: 0x5040fff0  beql        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x24F2CCu;
    {
        const bool branch_taken_0x24f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f2cc) {
            ctx->pc = 0x24F2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F2CCu;
            // 0x24f2d0: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f290;
        }
    }
    ctx->pc = 0x24F2D4u;
label_24f2d4:
    // 0x24f2d4: 0x12c0005c  beqz        $s6, . + 4 + (0x5C << 2)
    ctx->pc = 0x24F2D4u;
    {
        const bool branch_taken_0x24f2d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f2d4) {
            ctx->pc = 0x24F448u;
            goto label_24f448;
        }
    }
    ctx->pc = 0x24F2DCu;
    // 0x24f2dc: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x24f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x24f2e0: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x24f2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f2e4: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x24f2e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x24f2e8: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x24f2e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x24f2ec: 0x90460006  lbu         $a2, 0x6($v0)
    ctx->pc = 0x24f2ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x24f2f0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x24f2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x24f2f4: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x24f2f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x24f2f8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x24f2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x24f2fc: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x24f2fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x24f300: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x24f300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x24f304: 0x91050006  lbu         $a1, 0x6($t0)
    ctx->pc = 0x24f304u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x24f308: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x24f308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x24f30c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f310: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x24f310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24f314: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24f314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x24f318: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x24f318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x24f31c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24f320: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f324: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x24f324u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f328: 0x1a000047  blez        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x24F328u;
    {
        const bool branch_taken_0x24f328 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x24f328) {
            ctx->pc = 0x24F448u;
            goto label_24f448;
        }
    }
    ctx->pc = 0x24F330u;
    // 0x24f330: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x24f330u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x24f334: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x24f334u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x24f338: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f33c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24f33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24f340: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f344: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24f344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24f348: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x24F348u;
    {
        const bool branch_taken_0x24f348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F348u;
        // 0x24f34c: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f348) {
            ctx->pc = 0x24F6D4u;
            goto label_24f6d4;
        }
    }
    ctx->pc = 0x24F350u;
    // 0x24f350: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x24f350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x24f354: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x24F354u;
    SET_GPR_U32(ctx, 31, 0x24F35Cu);
    ctx->pc = 0x24F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F354u;
    // 0x24f358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x24F354u, 0x24F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F35Cu;
label_24f35c:
    // 0x24f35c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x24f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f360: 0x90620007  lbu         $v0, 0x7($v1)
    ctx->pc = 0x24f360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x24f364: 0x90640006  lbu         $a0, 0x6($v1)
    ctx->pc = 0x24f364u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x24f368: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f36c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x24f36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x24f370: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f374: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24f378: 0x22a3a  dsrl        $a1, $v0, 8
    ctx->pc = 0x24f378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 8);
    // 0x24f37c: 0xa0620006  sb          $v0, 0x6($v1)
    ctx->pc = 0x24f37cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f380: 0xa0650007  sb          $a1, 0x7($v1)
    ctx->pc = 0x24f380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x24f384: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x24f384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f388: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x24f388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x24f38c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x24f38cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x24f390: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f394: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24f394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24f398: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f39c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x24f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24f3a0: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x24f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x24f3a4: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x24f3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f3a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x24F3A8u;
    {
        const bool branch_taken_0x24f3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F3A8u;
        // 0x24f3ac: 0xa0830003  sb          $v1, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3a8) {
            ctx->pc = 0x24F448u;
            goto label_24f448;
        }
    }
    ctx->pc = 0x24F3B0u;
label_24f3b0:
    // 0x24f3b0: 0x91050006  lbu         $a1, 0x6($t0)
    ctx->pc = 0x24f3b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x24f3b4: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x24f3b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x24f3b8: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x24f3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x24f3bc: 0x91060002  lbu         $a2, 0x2($t0)
    ctx->pc = 0x24f3bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x24f3c0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x24f3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x24f3c4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f3c8: 0x91230007  lbu         $v1, 0x7($t1)
    ctx->pc = 0x24f3c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
    // 0x24f3cc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x24f3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x24f3d0: 0x91270006  lbu         $a3, 0x6($t1)
    ctx->pc = 0x24f3d0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x24f3d4: 0x91250003  lbu         $a1, 0x3($t1)
    ctx->pc = 0x24f3d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x24f3d8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x24f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x24f3dc: 0x91260002  lbu         $a2, 0x2($t1)
    ctx->pc = 0x24f3dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x24f3e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f3e4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x24f3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x24f3e8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x24f3e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x24f3ec: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x24f3ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x24f3f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24f3f4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x24f3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x24f3f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x24f3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24f3fc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x24f3fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x24f400: 0x838023  subu        $s0, $a0, $v1
    ctx->pc = 0x24f400u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24f404: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x24f404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24f408: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x24F408u;
    {
        const bool branch_taken_0x24f408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F408u;
        // 0x24f40c: 0xb01023  subu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f408) {
            ctx->pc = 0x24F208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f208;
        }
    }
    ctx->pc = 0x24F410u;
    // 0x24f410: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x24f410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24f414: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x24F414u;
    SET_GPR_U32(ctx, 31, 0x24F41Cu);
    ctx->pc = 0x24F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F414u;
    // 0x24f418: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x24F414u, 0x24F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F41Cu;
label_24f41c:
    // 0x24f41c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f420: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F420u;
    {
        const bool branch_taken_0x24f420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F420u;
        // 0x24f424: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f420) {
            ctx->pc = 0x24F438u;
            goto label_24f438;
        }
    }
    ctx->pc = 0x24F428u;
    // 0x24f428: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24f428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24f42c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f430: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24f434: 0x0  nop
    ctx->pc = 0x24f434u;
    // NOP
label_24f438:
    // 0x24f438: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24f43c: 0xc098560  jal         func_261580
    ctx->pc = 0x24F43Cu;
    SET_GPR_U32(ctx, 31, 0x24F444u);
    ctx->pc = 0x24F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F43Cu;
    // 0x24f440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24F43Cu, 0x24F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F444u;
label_24f444:
    // 0x24f444: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x24f444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24f448:
    // 0x24f448: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24F448u;
    {
        const bool branch_taken_0x24f448 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f448) {
            ctx->pc = 0x24F4A4u;
            goto label_24f4a4;
        }
    }
    ctx->pc = 0x24F450u;
    // 0x24f450: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x24f450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x24f454: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x24f454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24f458: 0x91030007  lbu         $v1, 0x7($t0)
    ctx->pc = 0x24f458u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x24f45c: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x24f45cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x24f460: 0x91060006  lbu         $a2, 0x6($t0)
    ctx->pc = 0x24f460u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x24f464: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x24f464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x24f468: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x24f468u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x24f46c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x24f46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x24f470: 0x91220007  lbu         $v0, 0x7($t1)
    ctx->pc = 0x24f470u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
    // 0x24f474: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x24f474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x24f478: 0x91250006  lbu         $a1, 0x6($t1)
    ctx->pc = 0x24f478u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x24f47c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x24f47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x24f480: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f484: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x24f484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24f488: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x24f48c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x24f48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x24f490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24f494: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f498: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24f498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24f49c: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x24F49Cu;
    {
        const bool branch_taken_0x24f49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f49c) {
            ctx->pc = 0x24F4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F49Cu;
            // 0x24f4a0: 0x91040007  lbu         $a0, 0x7($t0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f3b0;
        }
    }
    ctx->pc = 0x24F4A4u;
label_24f4a4:
    // 0x24f4a4: 0x56c0000a  bnel        $s6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x24F4A4u;
    {
        const bool branch_taken_0x24f4a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f4a4) {
            ctx->pc = 0x24F4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F4A4u;
            // 0x24f4a8: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F4D0u;
            goto label_24f4d0;
        }
    }
    ctx->pc = 0x24F4ACu;
    // 0x24f4ac: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x24f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x24f4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F4B0u;
    {
        const bool branch_taken_0x24f4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4B0u;
        // 0x24f4b4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4b0) {
            ctx->pc = 0x24F4C0u;
            goto label_24f4c0;
        }
    }
    ctx->pc = 0x24F4B8u;
    // 0x24f4b8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x24f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x24f4bc: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x24f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
label_24f4c0:
    // 0x24f4c0: 0xae74000c  sw          $s4, 0xC($s3)
    ctx->pc = 0x24f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 20));
    // 0x24f4c4: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x24f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x24f4c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24F4C8u;
    {
        const bool branch_taken_0x24f4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4C8u;
        // 0x24f4cc: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4c8) {
            ctx->pc = 0x24F4E8u;
            goto label_24f4e8;
        }
    }
    ctx->pc = 0x24F4D0u;
label_24f4d0:
    // 0x24f4d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F4D0u;
    {
        const bool branch_taken_0x24f4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4D0u;
        // 0x24f4d4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4d0) {
            ctx->pc = 0x24F4E0u;
            goto label_24f4e0;
        }
    }
    ctx->pc = 0x24F4D8u;
    // 0x24f4d8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x24f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x24f4dc: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x24f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
label_24f4e0:
    // 0x24f4e0: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x24f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x24f4e4: 0xae960004  sw          $s6, 0x4($s4)
    ctx->pc = 0x24f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 22));
label_24f4e8:
    // 0x24f4e8: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x24f4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x24f4ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24f4ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4f0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x24f4f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4f4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24F4F4u;
    {
        const bool branch_taken_0x24f4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4F4u;
        // 0x24f4f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4f4) {
            ctx->pc = 0x24F540u;
            goto label_24f540;
        }
    }
    ctx->pc = 0x24F4FCu;
    // 0x24f4fc: 0x0  nop
    ctx->pc = 0x24f4fcu;
    // NOP
label_24f500:
    // 0x24f500: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24f500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24f504: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x24f504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x24f508: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x24f508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x24f50c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f510: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24f510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24f514: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f518: 0x14540076  bne         $v0, $s4, . + 4 + (0x76 << 2)
    ctx->pc = 0x24F518u;
    {
        const bool branch_taken_0x24f518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x24F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F518u;
        // 0x24f51c: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f518) {
            ctx->pc = 0x24F6F4u;
            goto label_24f6f4;
        }
    }
    ctx->pc = 0x24F520u;
    // 0x24f520: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x24f520u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x24f524: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x24f524u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x24f528: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x24f52c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x24f52cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f530: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24f530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24f534: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24f534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24f538: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x24F538u;
    {
        const bool branch_taken_0x24f538 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F538u;
        // 0x24f53c: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f538) {
            ctx->pc = 0x24F500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f500;
        }
    }
    ctx->pc = 0x24F540u;
label_24f540:
    // 0x24f540: 0x92c20010  lbu         $v0, 0x10($s6)
    ctx->pc = 0x24f540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x24f544: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x24F544u;
    {
        const bool branch_taken_0x24f544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F544u;
        // 0x24f548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f544) {
            ctx->pc = 0x24F6F8u;
            goto label_24f6f8;
        }
    }
    ctx->pc = 0x24F54Cu;
    // 0x24f54c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24f54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f550: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f554: 0x8e370008  lw          $s7, 0x8($s1)
    ctx->pc = 0x24f554u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24f558: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x24f558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24f55c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24f560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24f560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24f564: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x24f564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x24f568: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x24f568u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24f56c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F56Cu;
    {
        const bool branch_taken_0x24f56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F56Cu;
        // 0x24f570: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f56c) {
            ctx->pc = 0x24F594u;
            goto label_24f594;
        }
    }
    ctx->pc = 0x24F574u;
    // 0x24f574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24f574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f578: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x24f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
    // 0x24f57c: 0xdc6200d8  ld          $v0, 0xD8($v1)
    ctx->pc = 0x24f57cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x24f580: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24f580u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x24f584: 0xc093dca  jal         func_24F728
    ctx->pc = 0x24F584u;
    SET_GPR_U32(ctx, 31, 0x24F58Cu);
    ctx->pc = 0x24F588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F584u;
    // 0x24f588: 0xfc6200d8  sd          $v0, 0xD8($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 216), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F728u, 0x24F584u, 0x24F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F58Cu;
label_24f58c:
    // 0x24f58c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x24F58Cu;
    {
        const bool branch_taken_0x24f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F58Cu;
        // 0x24f590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f58c) {
            ctx->pc = 0x24F6F8u;
            goto label_24f6f8;
        }
    }
    ctx->pc = 0x24F594u;
label_24f594:
    // 0x24f594: 0x8e35000c  lw          $s5, 0xC($s1)
    ctx->pc = 0x24f594u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24f598: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x24f598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24f59c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24f59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f5a0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x24f5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x24f5a4: 0xc08ac56  jal         func_22B158
    ctx->pc = 0x24F5A4u;
    SET_GPR_U32(ctx, 31, 0x24F5ACu);
    ctx->pc = 0x24F5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F5A4u;
    // 0x24f5a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B158u, 0x24F5A4u, 0x24F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F5ACu;
label_24f5ac:
    // 0x24f5ac: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x24f5acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f5b0: 0xc098560  jal         func_261580
    ctx->pc = 0x24F5B0u;
    SET_GPR_U32(ctx, 31, 0x24F5B8u);
    ctx->pc = 0x24F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F5B0u;
    // 0x24f5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24F5B0u, 0x24F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F5B8u;
label_24f5b8:
    // 0x24f5b8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x24f5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f5bc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x24F5BCu;
    {
        const bool branch_taken_0x24f5bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5BCu;
        // 0x24f5c0: 0x3296ffff  andi        $s6, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5bc) {
            ctx->pc = 0x24F5FCu;
            goto label_24f5fc;
        }
    }
    ctx->pc = 0x24F5C4u;
    // 0x24f5c4: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x24f5c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x24f5c8: 0x3294ffff  andi        $s4, $s4, 0xFFFF
    ctx->pc = 0x24f5c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x24f5cc: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x24f5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_24f5d0:
    // 0x24f5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f5d4: 0xc098560  jal         func_261580
    ctx->pc = 0x24F5D4u;
    SET_GPR_U32(ctx, 31, 0x24F5DCu);
    ctx->pc = 0x24F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F5D4u;
    // 0x24f5d8: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24F5D4u, 0x24F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F5DCu;
label_24f5dc:
    // 0x24f5dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24f5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f5e0: 0xc08ac56  jal         func_22B158
    ctx->pc = 0x24F5E0u;
    SET_GPR_U32(ctx, 31, 0x24F5E8u);
    ctx->pc = 0x24F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F5E0u;
    // 0x24f5e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B158u, 0x24F5E0u, 0x24F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F5E8u;
label_24f5e8:
    // 0x24f5e8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x24f5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f5ec: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F5ECu;
    {
        const bool branch_taken_0x24f5ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f5ec) {
            ctx->pc = 0x24F5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F5ECu;
            // 0x24f5f0: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f5d0;
        }
    }
    ctx->pc = 0x24F5F4u;
    // 0x24f5f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F5F4u;
    {
        const bool branch_taken_0x24f5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5F4u;
        // 0x24f5f8: 0x16123a  dsrl        $v0, $s6, 8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5f4) {
            ctx->pc = 0x24F608u;
            goto label_24f608;
        }
    }
    ctx->pc = 0x24F5FCu;
label_24f5fc:
    // 0x24f5fc: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x24f5fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x24f600: 0x3294ffff  andi        $s4, $s4, 0xFFFF
    ctx->pc = 0x24f600u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x24f604: 0x16123a  dsrl        $v0, $s6, 8
    ctx->pc = 0x24f604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> 8);
label_24f608:
    // 0x24f608: 0xa2f40002  sb          $s4, 0x2($s7)
    ctx->pc = 0x24f608u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x24f60c: 0xa2e20003  sb          $v0, 0x3($s7)
    ctx->pc = 0x24f60cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f610: 0x8a620013  lwl         $v0, 0x13($s3)
    ctx->pc = 0x24f610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24f614: 0x9a620010  lwr         $v0, 0x10($s3)
    ctx->pc = 0x24f614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24f618: 0xaae2000f  swl         $v0, 0xF($s7)
    ctx->pc = 0x24f618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24f61c: 0xbae2000c  swr         $v0, 0xC($s7)
    ctx->pc = 0x24f61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24f620: 0x8a660017  lwl         $a2, 0x17($s3)
    ctx->pc = 0x24f620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x24f624: 0x9a660014  lwr         $a2, 0x14($s3)
    ctx->pc = 0x24f624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x24f628: 0xaae60013  swl         $a2, 0x13($s7)
    ctx->pc = 0x24f628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24f62c: 0xbae60010  swr         $a2, 0x10($s7)
    ctx->pc = 0x24f62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24f630: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24f634: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F634u;
    {
        const bool branch_taken_0x24f634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F634u;
        // 0x24f638: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f634) {
            ctx->pc = 0x24F648u;
            goto label_24f648;
        }
    }
    ctx->pc = 0x24F63Cu;
    // 0x24f63c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24f640: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24f644: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x24f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_24f648:
    // 0x24f648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24f64c: 0xc098560  jal         func_261580
    ctx->pc = 0x24F64Cu;
    SET_GPR_U32(ctx, 31, 0x24F654u);
    ctx->pc = 0x24F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F64Cu;
    // 0x24f650: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24F64Cu, 0x24F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F654u;
label_24f654:
    // 0x24f654: 0x8fc21030  lw          $v0, 0x1030($fp)
    ctx->pc = 0x24f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4144)));
    // 0x24f658: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x24f658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x24f65c: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x24f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24f660: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24f664: 0xafc21030  sw          $v0, 0x1030($fp)
    ctx->pc = 0x24f664u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4144), GPR_U32(ctx, 2));
    // 0x24f668: 0x96a40012  lhu         $a0, 0x12($s5)
    ctx->pc = 0x24f668u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x24f66c: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x24f66cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24f670: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x24f670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x24f674: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24f674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24f678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24f678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24f67c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f680: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x24f680u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x24f684: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x24f684u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24f688: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24f688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24f68c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24f690: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x24f690u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24f694: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x24F694u;
    {
        const bool branch_taken_0x24f694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F694u;
        // 0x24f698: 0xaea50008  sw          $a1, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f694) {
            ctx->pc = 0x24F6C8u;
            goto label_24f6c8;
        }
    }
    ctx->pc = 0x24F69Cu;
    // 0x24f69c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24f69cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f6a0: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x24f6a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f6a4: 0x0  nop
    ctx->pc = 0x24f6a4u;
    // NOP
label_24f6a8:
    // 0x24f6a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24f6ac: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x24f6acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f6b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24f6b4: 0x0  nop
    ctx->pc = 0x24f6b4u;
    // NOP
    // 0x24f6b8: 0x0  nop
    ctx->pc = 0x24f6b8u;
    // NOP
    // 0x24f6bc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24F6BCu;
    {
        const bool branch_taken_0x24f6bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f6bc) {
            ctx->pc = 0x24F6A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f6a8;
        }
    }
    ctx->pc = 0x24F6C4u;
    // 0x24f6c4: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x24f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
label_24f6c8:
    // 0x24f6c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24F6C8u;
    {
        const bool branch_taken_0x24f6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6C8u;
        // 0x24f6cc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6c8) {
            ctx->pc = 0x24F6F8u;
            goto label_24f6f8;
        }
    }
    ctx->pc = 0x24F6D0u;
label_24f6d0:
    // 0x24f6d0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24f6d4:
    // 0x24f6d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24f6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f6d8: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x24f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
    // 0x24f6dc: 0xdc620038  ld          $v0, 0x38($v1)
    ctx->pc = 0x24f6dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x24f6e0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24f6e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x24f6e4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x24F6E4u;
    SET_GPR_U32(ctx, 31, 0x24F6ECu);
    ctx->pc = 0x24F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6E4u;
    // 0x24f6e8: 0xfc620038  sd          $v0, 0x38($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x24F6E4u, 0x24F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6ECu;
label_24f6ec:
    // 0x24f6ec: 0xc098560  jal         func_261580
    ctx->pc = 0x24F6ECu;
    SET_GPR_U32(ctx, 31, 0x24F6F4u);
    ctx->pc = 0x24F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6ECu;
    // 0x24f6f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24F6ECu, 0x24F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6F4u;
label_24f6f4:
    // 0x24f6f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24f6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f6f8:
    // 0x24f6f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24f6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f6fc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x24f6fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24f700: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x24f700u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24f704: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24f704u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24f708: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24f708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f70c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24f70cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f710: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24f710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f714: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f718: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f71c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f720: 0x3e00008  jr          $ra
    ctx->pc = 0x24F720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F720u;
        // 0x24f724: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F728u;
}
