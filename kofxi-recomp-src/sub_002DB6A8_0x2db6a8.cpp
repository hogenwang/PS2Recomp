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

// Function: sub_002DB6A8
// Address: 0x2db6a8 - 0x2db878
void sub_002DB6A8_0x2db6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB6A8_0x2db6a8");
#endif

    switch (ctx->pc) {
        case 0x2db6d0u: goto label_2db6d0;
        case 0x2db6fcu: goto label_2db6fc;
        case 0x2db70cu: goto label_2db70c;
        case 0x2db720u: goto label_2db720;
        case 0x2db748u: goto label_2db748;
        case 0x2db778u: goto label_2db778;
        case 0x2db7b0u: goto label_2db7b0;
        case 0x2db84cu: goto label_2db84c;
        default: break;
    }

    ctx->pc = 0x2db6a8u;

    // 0x2db6a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2db6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2db6ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2db6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2db6b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2db6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2db6b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2db6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2db6bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2db6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2db6c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2db6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2db6c4: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x2db6c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2db6c8: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2db6c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2db6cc: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2db6ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2db6d0:
    // 0x2db6d0: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2db6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2db6d4: 0x2463b71c  addiu       $v1, $v1, -0x48E4
    ctx->pc = 0x2db6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948636));
    // 0x2db6d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db6dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB6DCu;
    {
        const bool branch_taken_0x2db6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db6dc) {
            ctx->pc = 0x2DB6FCu;
            goto label_2db6fc;
        }
    }
    ctx->pc = 0x2DB6E4u;
    // 0x2db6e4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db6e8: 0x2484b730  addiu       $a0, $a0, -0x48D0
    ctx->pc = 0x2db6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948656));
    // 0x2db6ec: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2db6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db6f0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2db6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2db6f4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB6F4u;
    SET_GPR_U32(ctx, 31, 0x2DB6FCu);
    ctx->pc = 0x2DB6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB6F4u;
    // 0x2db6f8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DB6F4u, 0x2DB6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB6FCu;
label_2db6fc:
    // 0x2db6fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DB6FCu;
    {
        const bool branch_taken_0x2db6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db6fc) {
            ctx->pc = 0x2DB730u;
            goto label_2db730;
        }
    }
    ctx->pc = 0x2DB704u;
    // 0x2db704: 0xcb280f6  jal         func_2CA03D8
    ctx->pc = 0x2DB704u;
    SET_GPR_U32(ctx, 31, 0x2DB70Cu);
    ctx->pc = 0x2DB708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB704u;
    // 0x2db708: 0x87c233db  lh          $v0, 0x33DB($fp) (Delay Slot)
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 13275)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA03D8u, 0x2DB704u, 0x2DB70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB70Cu;
label_2db70c:
    // 0x2db70c: 0x24a44fa0  addiu       $a0, $a1, 0x4FA0
    ctx->pc = 0x2db70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20384));
    // 0x2db710: 0xdcae8aef  ld          $t6, -0x7511($a1)
    ctx->pc = 0x2db710u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 5), 4294937327)));
    // 0x2db714: 0xdd95dc57  ld          $s5, -0x23A9($t4)
    ctx->pc = 0x2db714u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 12), 4294958167)));
    // 0x2db718: 0xce89b21  jal         func_3A26C84
    ctx->pc = 0x2DB718u;
    SET_GPR_U32(ctx, 31, 0x2DB720u);
    ctx->pc = 0x3A26C84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A26C84u, 0x2DB718u, 0x2DB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB720u;
label_2db720:
    // 0x2db720: 0xa51f0618  sh          $ra, 0x618($t0)
    ctx->pc = 0x2db720u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1560), (uint16_t)GPR_U32(ctx, 31));
    // 0x2db724: 0xc712eb48  lwc1        $f18, -0x14B8($t8)
    ctx->pc = 0x2db724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294961992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db728: 0xa51f06d4  sh          $ra, 0x6D4($t0)
    ctx->pc = 0x2db728u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1748), (uint16_t)GPR_U32(ctx, 31));
    // 0x2db72c: 0x0  nop
    ctx->pc = 0x2db72cu;
    // NOP
label_2db730:
    // 0x2db730: 0x84acc5d8  lh          $t4, -0x3A28($a1)
    ctx->pc = 0x2db730u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294952408)));
    // 0x2db734: 0x9cafc5d9  lwu         $t7, -0x3A27($a1)
    ctx->pc = 0x2db734u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 4294952409)));
    // 0x2db738: 0xa309e5f9  sb          $t1, -0x1A07($t8)
    ctx->pc = 0x2db738u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 4294960633), (uint8_t)GPR_U32(ctx, 9));
    // 0x2db73c: 0x946f08fd  lhu         $t7, 0x8FD($v1)
    ctx->pc = 0x2db73cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2301)));
    // 0x2db740: 0xc0b76e0  jal         func_2DDB80
    ctx->pc = 0x2DB740u;
    SET_GPR_U32(ctx, 31, 0x2DB748u);
    ctx->pc = 0x2DB744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB740u;
    // 0x2db744: 0xa0a95df9  sb          $t1, 0x5DF9($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 24057), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDB80u, 0x2DB740u, 0x2DB748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB748u;
label_2db748:
    // 0x2db748: 0xa4e9c5d8  sh          $t1, -0x3A28($a3)
    ctx->pc = 0x2db748u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294952408), (uint16_t)GPR_U32(ctx, 9));
    // 0x2db74c: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2db74cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2db750: 0x2f1ac5d4  sltiu       $k0, $t8, -0x3A2C
    ctx->pc = 0x2db750u;
    SET_GPR_U64(ctx, 26, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)4294952404) ? 1 : 0);
    // 0x2db754: 0x870fc5d0  lh          $t7, -0x3A30($t8)
    ctx->pc = 0x2db754u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294952400)));
    // 0x2db758: 0xa0a9edf9  sb          $t1, -0x1207($a1)
    ctx->pc = 0x2db758u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294962681), (uint8_t)GPR_U32(ctx, 9));
    // 0x2db75c: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2db75cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2db760: 0xa06cd5f5  sb          $t4, -0x2A0B($v1)
    ctx->pc = 0x2db760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294956533), (uint8_t)GPR_U32(ctx, 12));
    // 0x2db764: 0xa2ace5f5  sb          $t4, -0x1A0B($s5)
    ctx->pc = 0x2db764u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294960629), (uint8_t)GPR_U32(ctx, 12));
    // 0x2db768: 0x30eac5d4  andi        $t2, $a3, 0xC5D4
    ctx->pc = 0x2db768u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)50644);
    // 0x2db76c: 0x840cc5d5  lh          $t4, -0x3A2B($zero)
    ctx->pc = 0x2db76cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 0), 4294952405)));
    // 0x2db770: 0x880bc5dc  lwl         $t3, -0x3A24($zero)
    ctx->pc = 0x2db770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294952412); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
    // 0x2db774: 0xb4e93a2e  sdr         $t1, 0x3A2E($a3)
    ctx->pc = 0x2db774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 14894); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2db778:
    // 0x2db778: 0x2ac5d4  .word       0x002AC5D4                   # dsllv       $t8, $t2, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2db778u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 10) << (GPR_U32(ctx, 1) & 0x3F));
    // 0x2db77c: 0x9ca88b2b  lwu         $t0, -0x74D5($a1)
    ctx->pc = 0x2db77cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 4294937387)));
    // 0x2db780: 0x94883a2b  lhu         $t0, 0x3A2B($a0)
    ctx->pc = 0x2db780u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14891)));
    // 0x2db784: 0xe42875d4  swc1        $f8, 0x75D4($at)
    ctx->pc = 0x2db784u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30164), bits); }
    // 0x2db788: 0xa30955f9  sb          $t1, 0x55F9($t8)
    ctx->pc = 0x2db788u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 22009), (uint8_t)GPR_U32(ctx, 9));
    // 0x2db78c: 0x9ca88654  lwu         $t0, -0x79AC($a1)
    ctx->pc = 0x2db78cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 4294936148)));
    // 0x2db790: 0xe4286dd4  swc1        $f8, 0x6DD4($at)
    ctx->pc = 0x2db790u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 28116), bits); }
    // 0x2db794: 0xa0a945f9  sb          $t1, 0x45F9($a1)
    ctx->pc = 0x2db794u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17913), (uint8_t)GPR_U32(ctx, 9));
    // 0x2db798: 0x9ca88ad4  lwu         $t0, -0x752C($a1)
    ctx->pc = 0x2db798u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 4294937300)));
    // 0x2db79c: 0xe42865d4  swc1        $f8, 0x65D4($at)
    ctx->pc = 0x2db79cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 26068), bits); }
    // 0x2db7a0: 0x9cb845d4  lwu         $t8, 0x45D4($a1)
    ctx->pc = 0x2db7a0u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 17876)));
    // 0x2db7a4: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2db7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2db7a8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DB7A8u;
    SET_GPR_U32(ctx, 31, 0x2DB7B0u);
    ctx->pc = 0x2DB7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB7A8u;
    // 0x2db7ac: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DB7A8u, 0x2DB7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB7B0u;
label_2db7b0:
    // 0x2db7b0: 0xe42bc5d4  swc1        $f11, -0x3A2C($at)
    ctx->pc = 0x2db7b0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294952404), bits); }
    // 0x2db7b4: 0xe629c5f4  swc1        $f9, -0x3A0C($s1)
    ctx->pc = 0x2db7b4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294952436), bits); }
    // 0x2db7b8: 0xa2f9e5f5  sb          $t9, -0x1A0B($s7)
    ctx->pc = 0x2db7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 4294960629), (uint8_t)GPR_U32(ctx, 25));
    // 0x2db7bc: 0x86b9c5d5  lh          $t9, -0x3A2B($s5)
    ctx->pc = 0x2db7bcu;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294952405)));
    // 0x2db7c0: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2db7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2db7c4: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2db7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2db7c8: 0xe6bfc5d7  swc1        $f31, -0x3A29($s5)
    ctx->pc = 0x2db7c8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294952407), bits); }
    // 0x2db7cc: 0xe6bcc5d6  swc1        $f28, -0x3A2A($s5)
    ctx->pc = 0x2db7ccu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294952406), bits); }
    // 0x2db7d0: 0xe6a965e2  swc1        $f9, 0x65E2($s5)
    ctx->pc = 0x2db7d0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 26082), bits); }
    // 0x2db7d4: 0xe6a9c5b0  swc1        $f9, -0x3A50($s5)
    ctx->pc = 0x2db7d4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294952368), bits); }
    // 0x2db7d8: 0xe4abcdd4  swc1        $f11, -0x322C($a1)
    ctx->pc = 0x2db7d8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294954452), bits); }
    // 0x2db7dc: 0xe5a9c5d1  swc1        $f9, -0x3A2F($t5)
    ctx->pc = 0x2db7dcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294952401), bits); }
    // 0x2db7e0: 0x8eaac5d8  lw          $t2, -0x3A28($s5)
    ctx->pc = 0x2db7e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952408)));
    // 0x2db7e4: 0xe6bdc5d5  swc1        $f29, -0x3A2B($s5)
    ctx->pc = 0x2db7e4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294952405), bits); }
    // 0x2db7e8: 0xe6a9c5b0  swc1        $f9, -0x3A50($s5)
    ctx->pc = 0x2db7e8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4294952368), bits); }
    // 0x2db7ec: 0xe4abcdd4  swc1        $f11, -0x322C($a1)
    ctx->pc = 0x2db7ecu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294954452), bits); }
    // 0x2db7f0: 0xa0f8d5f1  sb          $t8, -0x2A0F($a3)
    ctx->pc = 0x2db7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294956529), (uint8_t)GPR_U32(ctx, 24));
    // 0x2db7f4: 0xb4c93a38  sdr         $t1, 0x3A38($a2)
    ctx->pc = 0x2db7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 14904); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db7f8: 0x2bc5d4  .word       0x002BC5D4                   # dsllv       $t8, $t3, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2db7f8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 11) << (GPR_U32(ctx, 1) & 0x3F));
    // 0x2db7fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB7FCu;
    {
        const bool branch_taken_0x2db7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db7fc) {
            ctx->pc = 0x2DB82Cu;
            goto label_2db82c;
        }
    }
    ctx->pc = 0x2DB804u;
    // 0x2db804: 0x2571bf18  addiu       $s1, $t3, -0x40E8
    ctx->pc = 0x2db804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 4294950680));
    // 0x2db808: 0x2657f7a8  addiu       $s7, $s2, -0x858
    ctx->pc = 0x2db808u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965160));
    // 0x2db80c: 0x84b87c93  lh          $t8, 0x7C93($a1)
    ctx->pc = 0x2db80cu;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 31891)));
    // 0x2db810: 0x274a6e90  addiu       $t2, $k0, 0x6E90
    ctx->pc = 0x2db810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 26), 28304));
    // 0x2db814: 0x218a820  add         $s5, $s0, $t8
    ctx->pc = 0x2db814u;
    {     int32_t rs_val = GPR_S32(ctx, 16);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
    // 0x2db818: 0x86e51e4b  lh          $a1, 0x1E4B($s7)
    ctx->pc = 0x2db818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 7755)));
    // 0x2db81c: 0xa51f0681  sh          $ra, 0x681($t0)
    ctx->pc = 0x2db81cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1665), (uint16_t)GPR_U32(ctx, 31));
    // 0x2db820: 0xc712eb49  lwc1        $f18, -0x14B7($t8)
    ctx->pc = 0x2db820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294961993)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db824: 0xa51f064d  sh          $ra, 0x64D($t0)
    ctx->pc = 0x2db824u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1613), (uint16_t)GPR_U32(ctx, 31));
    // 0x2db828: 0x0  nop
    ctx->pc = 0x2db828u;
    // NOP
label_2db82c:
    // 0x2db82c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2db82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2db830: 0x2442b81c  addiu       $v0, $v0, -0x47E4
    ctx->pc = 0x2db830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948892));
    // 0x2db834: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db838: 0x2484b7fc  addiu       $a0, $a0, -0x4804
    ctx->pc = 0x2db838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948860));
    // 0x2db83c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2db83cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db840: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2db840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db844: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB844u;
    SET_GPR_U32(ctx, 31, 0x2DB84Cu);
    ctx->pc = 0x2DB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB844u;
    // 0x2db848: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DB844u, 0x2DB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB84Cu;
label_2db84c:
    // 0x2db84c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2db84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db850: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2db850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db854: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2db854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db858: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2db858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db85c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2db85cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db860: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2db860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db864: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x2db864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2db868: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x2db868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2db86c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2db86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db870: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB870u;
        // 0x2db874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB878u;
}
