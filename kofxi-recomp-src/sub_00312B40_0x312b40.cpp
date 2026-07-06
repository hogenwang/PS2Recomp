#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00312B40
// Address: 0x312b40 - 0x312c20
void sub_00312B40_0x312b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312B40_0x312b40");
#endif

    ctx->pc = 0x312b40u;

    // 0x312b40: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x312b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x312b44: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x312b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x312b48: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x312b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x312b4c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x312B4Cu;
    {
        const bool branch_taken_0x312b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312B4Cu;
            // 0x312b50: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b4c) {
            ctx->pc = 0x312B60u;
            goto label_312b60;
        }
    }
    ctx->pc = 0x312B54u;
    // 0x312b54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312b58: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x312b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x312b5c: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x312b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_312b60:
    // 0x312b60: 0x28a10011  slti        $at, $a1, 0x11
    ctx->pc = 0x312b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x312b64: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x312B64u;
    {
        const bool branch_taken_0x312b64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x312b64) {
            ctx->pc = 0x312B78u;
            goto label_312b78;
        }
    }
    ctx->pc = 0x312B6Cu;
    // 0x312b6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312b70: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x312b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x312b74: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x312b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_312b78:
    // 0x312b78: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x312b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x312b7c: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x312b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x312b80: 0x8c6829e0  lw          $t0, 0x29E0($v1)
    ctx->pc = 0x312b80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x312b84: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x312b84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
    // 0x312b88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x312b88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312b8c: 0x3c0701da  lui         $a3, 0x1DA
    ctx->pc = 0x312b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)474 << 16));
    // 0x312b90: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x312b90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x312b94: 0x24e74df0  addiu       $a3, $a3, 0x4DF0
    ctx->pc = 0x312b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19952));
    // 0x312b98: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x312b98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x312b9c: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x312b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x312ba0: 0x883023  subu        $a2, $a0, $t0
    ctx->pc = 0x312ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x312ba4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x312ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x312ba8: 0xac6429e0  sw          $a0, 0x29E0($v1)
    ctx->pc = 0x312ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 4));
    // 0x312bac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x312bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312bb0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x312bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x312bb4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x312bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x312bb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x312bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x312bbc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x312bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x312bc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x312bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312bc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x312BC4u;
    {
        const bool branch_taken_0x312bc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x312BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312BC4u;
            // 0x312bc8: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bc4) {
            ctx->pc = 0x312BDCu;
            goto label_312bdc;
        }
    }
    ctx->pc = 0x312BCCu;
    // 0x312bcc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x312bd0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x312bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x312bd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x312BD4u;
    {
        const bool branch_taken_0x312bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312BD4u;
            // 0x312bd8: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bd4) {
            ctx->pc = 0x312BF8u;
            goto label_312bf8;
        }
    }
    ctx->pc = 0x312BDCu;
label_312bdc:
    // 0x312bdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x312bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x312be0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x312be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x312be4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312be4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x312be8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x312be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x312bec: 0x0  nop
    ctx->pc = 0x312becu;
    // NOP
    // 0x312bf0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x312bf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x312bf4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x312bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_312bf8:
    // 0x312bf8: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x312bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x312bfc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x312bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x312c00: 0x24634180  addiu       $v1, $v1, 0x4180
    ctx->pc = 0x312c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16768));
    // 0x312c04: 0xace40110  sw          $a0, 0x110($a3)
    ctx->pc = 0x312c04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 272), GPR_U32(ctx, 4));
    // 0x312c08: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x312c08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x312c0c: 0xace30114  sw          $v1, 0x114($a3)
    ctx->pc = 0x312c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 276), GPR_U32(ctx, 3));
    // 0x312c10: 0x24e40004  addiu       $a0, $a3, 0x4
    ctx->pc = 0x312c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x312c14: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x312c14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x312c18: 0x8049c48  j           func_127120
    ctx->pc = 0x312C18u;
    ctx->pc = 0x312C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312C18u;
            // 0x312c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00127120_0x127120(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x312C20u;
    ctx->pc = 0x312c20u;
}
