#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E5D0
// Address: 0x15e5d0 - 0x15e9e0
void sub_0015E5D0_0x15e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E5D0_0x15e5d0");
#endif

    switch (ctx->pc) {
        case 0x15e610u: goto label_15e610;
        case 0x15e70cu: goto label_15e70c;
        case 0x15e76cu: goto label_15e76c;
        default: break;
    }

    ctx->pc = 0x15e5d0u;

    // 0x15e5d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15e5d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15e5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15e5dc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x15e5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x15e5e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15e5e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15e5e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15e5e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15e5f0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e5f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15e5f8: 0x24844150  addiu       $a0, $a0, 0x4150
    ctx->pc = 0x15e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16720));
    // 0x15e5fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x15e5fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15e600: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15e600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e604: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x15e604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15e608: 0xc067d64  jal         func_19F590
    ctx->pc = 0x15E608u;
    SET_GPR_U32(ctx, 31, 0x15E610u);
    ctx->pc = 0x15E60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E608u;
            // 0x15e60c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (runtime->hasFunction(0x19F590u)) {
        auto targetFn = runtime->lookupFunction(0x19F590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E610u; }
        if (ctx->pc != 0x15E610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F590_0x19f590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E610u; }
        if (ctx->pc != 0x15E610u) { return; }
    }
    ctx->pc = 0x15E610u;
label_15e610:
    // 0x15e610: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x15e610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x15e614: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x15e614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x15e618: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x15e61c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x15e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x15e620: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x15e620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x15e624: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x15e624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x15e628: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x15e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x15e62c: 0x24c6db5a  addiu       $a2, $a2, -0x24A6
    ctx->pc = 0x15e62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957914));
    // 0x15e630: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x15e630u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x15e634: 0x2484dc9d  addiu       $a0, $a0, -0x2363
    ctx->pc = 0x15e634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958237));
    // 0x15e638: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x15e638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x15e63c: 0x24a5db78  addiu       $a1, $a1, -0x2488
    ctx->pc = 0x15e63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
    // 0x15e640: 0x90ca0000  lbu         $t2, 0x0($a2)
    ctx->pc = 0x15e640u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15e644: 0xb04021  addu        $t0, $a1, $s0
    ctx->pc = 0x15e644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x15e648: 0x904821  addu        $t1, $a0, $s0
    ctx->pc = 0x15e648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x15e64c: 0x91050001  lbu         $a1, 0x1($t0)
    ctx->pc = 0x15e64cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x15e650: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x15e650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x15e654: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e658: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x15e658u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15e65c: 0x2484dca4  addiu       $a0, $a0, -0x235C
    ctx->pc = 0x15e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958244));
    // 0x15e660: 0x903821  addu        $a3, $a0, $s0
    ctx->pc = 0x15e660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x15e664: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x15e664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x15e668: 0x91040002  lbu         $a0, 0x2($t0)
    ctx->pc = 0x15e668u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x15e66c: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x15e670: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x15e670u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x15e674: 0xac6a4150  sw          $t2, 0x4150($v1)
    ctx->pc = 0x15e674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16720), GPR_U32(ctx, 10));
    // 0x15e678: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x15e67c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x15e67cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15e680: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x15e680u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15e684: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e688: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x15e688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x15e68c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e690: 0xa0654173  sb          $a1, 0x4173($v1)
    ctx->pc = 0x15e690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16755), (uint8_t)GPR_U32(ctx, 5));
    // 0x15e694: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x15e694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x15e698: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x15e698u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15e69c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15e6a0: 0xa0484172  sb          $t0, 0x4172($v0)
    ctx->pc = 0x15e6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16754), (uint8_t)GPR_U32(ctx, 8));
    // 0x15e6a4: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x15e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x15e6a8: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x15e6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15e6ac: 0x84e50040  lh          $a1, 0x40($a3)
    ctx->pc = 0x15e6acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x15e6b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15e6b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e6b4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x15e6b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e6b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15e6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15e6bc: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e6c0: 0x84e60020  lh          $a2, 0x20($a3)
    ctx->pc = 0x15e6c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x15e6c4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e6c8: 0xa0444174  sb          $a0, 0x4174($v0)
    ctx->pc = 0x15e6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16756), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e6cc: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e6d0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x15e6d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e6d4: 0x90424148  lbu         $v0, 0x4148($v0)
    ctx->pc = 0x15e6d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16712)));
    // 0x15e6d8: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x15e6d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x15e6dc: 0xa0644170  sb          $a0, 0x4170($v1)
    ctx->pc = 0x15e6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16752), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e6e0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15e6e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e6e4: 0x0  nop
    ctx->pc = 0x15e6e4u;
    // NOP
    // 0x15e6e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15e6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15e6ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15e6ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15e6f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e6f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e6f4: 0x0  nop
    ctx->pc = 0x15e6f4u;
    // NOP
    // 0x15e6f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15e6f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15e6fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E6FCu;
    {
        const bool branch_taken_0x15e6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E6FCu;
            // 0x15e700: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6fc) {
            ctx->pc = 0x15E70Cu;
            goto label_15e70c;
        }
    }
    ctx->pc = 0x15E704u;
    // 0x15e704: 0xc062d18  jal         func_18B460
    ctx->pc = 0x15E704u;
    SET_GPR_U32(ctx, 31, 0x15E70Cu);
    ctx->pc = 0x15E708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E704u;
            // 0x15e708: 0x326400ff  andi        $a0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B460u;
    if (runtime->hasFunction(0x18B460u)) {
        auto targetFn = runtime->lookupFunction(0x18B460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E70Cu; }
        if (ctx->pc != 0x15E70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B460_0x18b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E70Cu; }
        if (ctx->pc != 0x15E70Cu) { return; }
    }
    ctx->pc = 0x15E70Cu;
label_15e70c:
    // 0x15e70c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15e710: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e714: 0x2442db64  addiu       $v0, $v0, -0x249C
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957924));
    // 0x15e718: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x15e718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15e71c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x15e71cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e720: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x15e724: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x15e724u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x15e728: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15e72c: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E72Cu;
    {
        const bool branch_taken_0x15e72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x15E730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E72Cu;
            // 0x15e730: 0xac65416c  sw          $a1, 0x416C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16748), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e72c) {
            ctx->pc = 0x15E744u;
            goto label_15e744;
        }
    }
    ctx->pc = 0x15E734u;
    // 0x15e734: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x15e734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x15e738: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e73c: 0x90639498  lbu         $v1, -0x6B68($v1)
    ctx->pc = 0x15e73cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939800)));
    // 0x15e740: 0xac43416c  sw          $v1, 0x416C($v0)
    ctx->pc = 0x15e740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16748), GPR_U32(ctx, 3));
label_15e744:
    // 0x15e744: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x15e744u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15e748: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e74c: 0xac534154  sw          $s3, 0x4154($v0)
    ctx->pc = 0x15e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16724), GPR_U32(ctx, 19));
    // 0x15e750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e754: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15e754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15e758: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15e758u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e75c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15e760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e764: 0xc062784  jal         func_189E10
    ctx->pc = 0x15E764u;
    SET_GPR_U32(ctx, 31, 0x15E76Cu);
    ctx->pc = 0x15E768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E764u;
            // 0x15e768: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x189E10u;
    if (runtime->hasFunction(0x189E10u)) {
        auto targetFn = runtime->lookupFunction(0x189E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E76Cu; }
        if (ctx->pc != 0x15E76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E10_0x189e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E76Cu; }
        if (ctx->pc != 0x15E76Cu) { return; }
    }
    ctx->pc = 0x15E76Cu;
label_15e76c:
    // 0x15e76c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15e76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e770: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x15e770u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x15e774: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x15e778: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x15e778u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x15e77c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e780: 0x2508db78  addiu       $t0, $t0, -0x2488
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957944));
    // 0x15e784: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15e784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15e788: 0x24e7dc9d  addiu       $a3, $a3, -0x2363
    ctx->pc = 0x15e788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958237));
    // 0x15e78c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e790: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x15e794: 0x348c0  sll         $t1, $v1, 3
    ctx->pc = 0x15e794u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15e798: 0x3c06009b  lui         $a2, 0x9B
    ctx->pc = 0x15e798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)155 << 16));
    // 0x15e79c: 0x1095821  addu        $t3, $t0, $t1
    ctx->pc = 0x15e79cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x15e7a0: 0xe95021  addu        $t2, $a3, $t1
    ctx->pc = 0x15e7a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x15e7a4: 0x91680001  lbu         $t0, 0x1($t3)
    ctx->pc = 0x15e7a4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x15e7a8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x15e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x15e7ac: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x15e7acu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x15e7b0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e7b4: 0x91670002  lbu         $a3, 0x2($t3)
    ctx->pc = 0x15e7b4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x15e7b8: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x15e7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x15e7bc: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x15e7bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x15e7c0: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x15e7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x15e7c4: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x15e7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x15e7c8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x15e7c8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15e7cc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x15e7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x15e7d0: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x15e7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x15e7d4: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x15e7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x15e7d8: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x15e7d8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15e7dc: 0xa0a84176  sb          $t0, 0x4176($a1)
    ctx->pc = 0x15e7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16758), (uint8_t)GPR_U32(ctx, 8));
    // 0x15e7e0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x15e7e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15e7e4: 0xa0c94175  sb          $t1, 0x4175($a2)
    ctx->pc = 0x15e7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16757), (uint8_t)GPR_U32(ctx, 9));
    // 0x15e7e8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x15E7E8u;
    {
        const bool branch_taken_0x15e7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E7E8u;
            // 0x15e7ec: 0xa0854177  sb          $a1, 0x4177($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16759), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7e8) {
            ctx->pc = 0x15E854u;
            goto label_15e854;
        }
    }
    ctx->pc = 0x15E7F0u;
    // 0x15e7f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15e7f4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x15e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x15e7f8: 0x2463dba4  addiu       $v1, $v1, -0x245C
    ctx->pc = 0x15e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957988));
    // 0x15e7fc: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x15e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x15e800: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x15e800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15e804: 0x24c6dba8  addiu       $a2, $a2, -0x2458
    ctx->pc = 0x15e804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957992));
    // 0x15e808: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15e808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15e80c: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x15e80cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e810: 0x2463dbac  addiu       $v1, $v1, -0x2454
    ctx->pc = 0x15e810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957996));
    // 0x15e814: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15e814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15e818: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x15e818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e81c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e820: 0xaca84158  sw          $t0, 0x4158($a1)
    ctx->pc = 0x15e820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16728), GPR_U32(ctx, 8));
    // 0x15e824: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x15e824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x15e828: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e82c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x15e82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15e830: 0xac674164  sw          $a3, 0x4164($v1)
    ctx->pc = 0x15e830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16740), GPR_U32(ctx, 7));
    // 0x15e834: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15e834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15e838: 0x2463dbb0  addiu       $v1, $v1, -0x2450
    ctx->pc = 0x15e838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958000));
    // 0x15e83c: 0xac864160  sw          $a2, 0x4160($a0)
    ctx->pc = 0x15e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16736), GPR_U32(ctx, 6));
    // 0x15e840: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15e844: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15e844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e848: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e84c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x15E84Cu;
    {
        const bool branch_taken_0x15e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E84Cu;
            // 0x15e850: 0xac65415c  sw          $a1, 0x415C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16732), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e84c) {
            ctx->pc = 0x15E964u;
            goto label_15e964;
        }
    }
    ctx->pc = 0x15E854u;
label_15e854:
    // 0x15e854: 0x4614a843  div.s       $f1, $f21, $f20
    ctx->pc = 0x15e854u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[20];
    // 0x15e858: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x15e858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x15e85c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e860: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15e860u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e864: 0x0  nop
    ctx->pc = 0x15e864u;
    // NOP
    // 0x15e868: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15e868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15e86c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15e86cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15e870: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x15e870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15e874: 0x0  nop
    ctx->pc = 0x15e874u;
    // NOP
    // 0x15e878: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x15e878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15e87c: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x15e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15e880: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x15e880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15e884: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15e884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15e888: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15e888u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e88c: 0x4614a832  c.eq.s      $f21, $f20
    ctx->pc = 0x15e88cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e890: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15E890u;
    {
        const bool branch_taken_0x15e890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E890u;
            // 0x15e894: 0xac644158  sw          $a0, 0x4158($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16728), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e890) {
            ctx->pc = 0x15E8ACu;
            goto label_15e8ac;
        }
    }
    ctx->pc = 0x15E898u;
    // 0x15e898: 0x3c04000d  lui         $a0, 0xD
    ctx->pc = 0x15e898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13 << 16));
    // 0x15e89c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e8a0: 0x3484bba0  ori         $a0, $a0, 0xBBA0
    ctx->pc = 0x15e8a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)48032);
    // 0x15e8a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E8A4u;
    {
        const bool branch_taken_0x15e8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8A4u;
            // 0x15e8a8: 0xac644164  sw          $a0, 0x4164($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16740), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8a4) {
            ctx->pc = 0x15E8B4u;
            goto label_15e8b4;
        }
    }
    ctx->pc = 0x15E8ACu;
label_15e8ac:
    // 0x15e8ac: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e8b0: 0xac604164  sw          $zero, 0x4164($v1)
    ctx->pc = 0x15e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16740), GPR_U32(ctx, 0));
label_15e8b4:
    // 0x15e8b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15e8b8: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e8bc: 0x2463dd92  addiu       $v1, $v1, -0x226E
    ctx->pc = 0x15e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958482));
    // 0x15e8c0: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x15e8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15e8c4: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x15e8c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15e8c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15e8cc: 0x8465da60  lh          $a1, -0x25A0($v1)
    ctx->pc = 0x15e8ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957664)));
    // 0x15e8d0: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x15e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x15e8d4: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x15e8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15e8d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15e8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15e8dc: 0x28a3005a  slti        $v1, $a1, 0x5A
    ctx->pc = 0x15e8dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x15e8e0: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x15e8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15e8e4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x15e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15e8e8: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x15e8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15e8ec: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x15e8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15e8f0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15e8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15e8f4: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x15e8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x15e8f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E8F8u;
    {
        const bool branch_taken_0x15e8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E8F8u;
            // 0x15e8fc: 0xac864160  sw          $a2, 0x4160($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16736), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8f8) {
            ctx->pc = 0x15E908u;
            goto label_15e908;
        }
    }
    ctx->pc = 0x15E900u;
    // 0x15e900: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15E900u;
    {
        const bool branch_taken_0x15e900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E900u;
            // 0x15e904: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e900) {
            ctx->pc = 0x15E958u;
            goto label_15e958;
        }
    }
    ctx->pc = 0x15E908u;
label_15e908:
    // 0x15e908: 0x28a30050  slti        $v1, $a1, 0x50
    ctx->pc = 0x15e908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x15e90c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E90Cu;
    {
        const bool branch_taken_0x15e90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e90c) {
            ctx->pc = 0x15E910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E90Cu;
            // 0x15e910: 0x28a3003c  slti        $v1, $a1, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E91Cu;
            goto label_15e91c;
        }
    }
    ctx->pc = 0x15E914u;
    // 0x15e914: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15E914u;
    {
        const bool branch_taken_0x15e914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E914u;
            // 0x15e918: 0x24120258  addiu       $s2, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e914) {
            ctx->pc = 0x15E958u;
            goto label_15e958;
        }
    }
    ctx->pc = 0x15E91Cu;
label_15e91c:
    // 0x15e91c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E91Cu;
    {
        const bool branch_taken_0x15e91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e91c) {
            ctx->pc = 0x15E920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E91Cu;
            // 0x15e920: 0x28a30028  slti        $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E92Cu;
            goto label_15e92c;
        }
    }
    ctx->pc = 0x15E924u;
    // 0x15e924: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15E924u;
    {
        const bool branch_taken_0x15e924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E924u;
            // 0x15e928: 0x24120190  addiu       $s2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e924) {
            ctx->pc = 0x15E958u;
            goto label_15e958;
        }
    }
    ctx->pc = 0x15E92Cu;
label_15e92c:
    // 0x15e92c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E92Cu;
    {
        const bool branch_taken_0x15e92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e92c) {
            ctx->pc = 0x15E930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E92Cu;
            // 0x15e930: 0x28a30014  slti        $v1, $a1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E93Cu;
            goto label_15e93c;
        }
    }
    ctx->pc = 0x15E934u;
    // 0x15e934: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15E934u;
    {
        const bool branch_taken_0x15e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E934u;
            // 0x15e938: 0x2412012c  addiu       $s2, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e934) {
            ctx->pc = 0x15E958u;
            goto label_15e958;
        }
    }
    ctx->pc = 0x15E93Cu;
label_15e93c:
    // 0x15e93c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E93Cu;
    {
        const bool branch_taken_0x15e93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e93c) {
            ctx->pc = 0x15E94Cu;
            goto label_15e94c;
        }
    }
    ctx->pc = 0x15E944u;
    // 0x15e944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E944u;
    {
        const bool branch_taken_0x15e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E944u;
            // 0x15e948: 0x241207d0  addiu       $s2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e944) {
            ctx->pc = 0x15E958u;
            goto label_15e958;
        }
    }
    ctx->pc = 0x15E94Cu;
label_15e94c:
    // 0x15e94c: 0x4a20003  bltzl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E94Cu;
    {
        const bool branch_taken_0x15e94c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x15e94c) {
            ctx->pc = 0x15E950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E94Cu;
            // 0x15e950: 0xb22018  mult        $a0, $a1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E95Cu;
            goto label_15e95c;
        }
    }
    ctx->pc = 0x15E954u;
    // 0x15e954: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x15e954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_15e958:
    // 0x15e958: 0xb22018  mult        $a0, $a1, $s2
    ctx->pc = 0x15e958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_15e95c:
    // 0x15e95c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e960: 0xac64415c  sw          $a0, 0x415C($v1)
    ctx->pc = 0x15e960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16732), GPR_U32(ctx, 4));
label_15e964:
    // 0x15e964: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e968: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e96c: 0x8c674164  lw          $a3, 0x4164($v1)
    ctx->pc = 0x15e96cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16740)));
    // 0x15e970: 0x8c884158  lw          $t0, 0x4158($a0)
    ctx->pc = 0x15e970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16728)));
    // 0x15e974: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e978: 0x8c65415c  lw          $a1, 0x415C($v1)
    ctx->pc = 0x15e978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16732)));
    // 0x15e97c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e980: 0x8c864160  lw          $a2, 0x4160($a0)
    ctx->pc = 0x15e980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16736)));
    // 0x15e984: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x15e984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x15e988: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e98c: 0x90634148  lbu         $v1, 0x4148($v1)
    ctx->pc = 0x15e98cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16712)));
    // 0x15e990: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15e990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15e994: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e998: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15e998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e99c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E99Cu;
    {
        const bool branch_taken_0x15e99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E99Cu;
            // 0x15e9a0: 0xac854168  sw          $a1, 0x4168($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16744), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e99c) {
            ctx->pc = 0x15E9BCu;
            goto label_15e9bc;
        }
    }
    ctx->pc = 0x15E9A4u;
    // 0x15e9a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15e9a8: 0x2463db9c  addiu       $v1, $v1, -0x2464
    ctx->pc = 0x15e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957980));
    // 0x15e9ac: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15e9b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x15e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e9b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15e9b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_15e9bc:
    // 0x15e9bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15e9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e9c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x15e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15e9c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15e9c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e9c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15e9cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15e9ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e9d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15e9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e9d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15e9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x15E9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9D8u;
            // 0x15e9dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E9E0u;
    ctx->pc = 0x15e9e0u;
}
