#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00314AB0
// Address: 0x314ab0 - 0x314da0
void sub_00314AB0_0x314ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314AB0_0x314ab0");
#endif

    ctx->pc = 0x314ab0u;

    // 0x314ab0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314ab4: 0x84a70002  lh          $a3, 0x2($a1)
    ctx->pc = 0x314ab4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x314ab8: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x314ab8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x314abc: 0x94a90010  lhu         $t1, 0x10($a1)
    ctx->pc = 0x314abcu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x314ac0: 0x94a80012  lhu         $t0, 0x12($a1)
    ctx->pc = 0x314ac0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x314ac4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x314ac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x314ac8: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314acc: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x314accu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x314ad0: 0x29610281  slti        $at, $t3, 0x281
    ctx->pc = 0x314ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x314ad4: 0x1696021  addu        $t4, $t3, $t1
    ctx->pc = 0x314ad4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x314ad8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x314ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x314adc: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x314adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314ae0: 0x665021  addu        $t2, $v1, $a2
    ctx->pc = 0x314ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x314ae4: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x314ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314ae8: 0x1481821  addu        $v1, $t2, $t0
    ctx->pc = 0x314ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x314aec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314aecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314af0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x314af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x314af4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314af4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314af8: 0x1663821  addu        $a3, $t3, $a2
    ctx->pc = 0x314af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x314afc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x314afcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x314b00: 0x102000a2  beqz        $at, . + 4 + (0xA2 << 2)
    ctx->pc = 0x314B00u;
    {
        const bool branch_taken_0x314b00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314B00u;
            // 0x314b04: 0x1463021  addu        $a2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b00) {
            ctx->pc = 0x314D8Cu;
            goto label_314d8c;
        }
    }
    ctx->pc = 0x314B08u;
    // 0x314b08: 0x5830004  bgezl       $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x314B08u;
    {
        const bool branch_taken_0x314b08 = (GPR_S32(ctx, 12) >= 0);
        if (branch_taken_0x314b08) {
            ctx->pc = 0x314B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314B08u;
            // 0x314b0c: 0x294101e1  slti        $at, $t2, 0x1E1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)481) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x314B1Cu;
            goto label_314b1c;
        }
    }
    ctx->pc = 0x314B10u;
    // 0x314b10: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x314B10u;
    {
        const bool branch_taken_0x314b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314b10) {
            ctx->pc = 0x314D8Cu;
            goto label_314d8c;
        }
    }
    ctx->pc = 0x314B18u;
    // 0x314b18: 0x294101e1  slti        $at, $t2, 0x1E1
    ctx->pc = 0x314b18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)481) ? 1 : 0);
label_314b1c:
    // 0x314b1c: 0x1020009b  beqz        $at, . + 4 + (0x9B << 2)
    ctx->pc = 0x314B1Cu;
    {
        const bool branch_taken_0x314b1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314b1c) {
            ctx->pc = 0x314D8Cu;
            goto label_314d8c;
        }
    }
    ctx->pc = 0x314B24u;
    // 0x314b24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314B24u;
    {
        const bool branch_taken_0x314b24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x314b24) {
            ctx->pc = 0x314B34u;
            goto label_314b34;
        }
    }
    ctx->pc = 0x314B2Cu;
    // 0x314b2c: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x314B2Cu;
    {
        const bool branch_taken_0x314b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314b2c) {
            ctx->pc = 0x314D8Cu;
            goto label_314d8c;
        }
    }
    ctx->pc = 0x314B34u;
label_314b34:
    // 0x314b34: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x314b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x314b38: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x314b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x314b3c: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x314b3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x314b40: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x314B40u;
    {
        const bool branch_taken_0x314b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314b40) {
            ctx->pc = 0x314B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314B40u;
            // 0x314b44: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314B58u;
            goto label_314b58;
        }
    }
    ctx->pc = 0x314B48u;
    // 0x314b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314b4c: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x314b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x314b50: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x314b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x314b54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x314b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314b58:
    // 0x314b58: 0x3c0d447a  lui         $t5, 0x447A
    ctx->pc = 0x314b58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)17530 << 16));
    // 0x314b5c: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x314b5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x314b60: 0x94b90000  lhu         $t9, 0x0($a1)
    ctx->pc = 0x314b60u;
    SET_GPR_U32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x314b64: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x314b64u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314b68: 0x25ce4df0  addiu       $t6, $t6, 0x4DF0
    ctx->pc = 0x314b68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 19952));
    // 0x314b6c: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x314b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x314b70: 0x3c0c01da  lui         $t4, 0x1DA
    ctx->pc = 0x314b70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)474 << 16));
    // 0x314b74: 0x8c9829e0  lw          $t8, 0x29E0($a0)
    ctx->pc = 0x314b74u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10720)));
    // 0x314b78: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x314b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x314b7c: 0x1868c0  sll         $t5, $t8, 3
    ctx->pc = 0x314b7cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x314b80: 0x1b87823  subu        $t7, $t5, $t8
    ctx->pc = 0x314b80u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
    // 0x314b84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x314b84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314b88: 0x270d0001  addiu       $t5, $t8, 0x1
    ctx->pc = 0x314b88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x314b8c: 0x192040  sll         $a0, $t9, 1
    ctx->pc = 0x314b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 25), 1));
    // 0x314b90: 0x99c021  addu        $t8, $a0, $t9
    ctx->pc = 0x314b90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x314b94: 0xf2080  sll         $a0, $t7, 2
    ctx->pc = 0x314b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x314b98: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x314b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x314b9c: 0x187880  sll         $t7, $t8, 2
    ctx->pc = 0x314b9cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x314ba0: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x314ba0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x314ba4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x314ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x314ba8: 0x1c32021  addu        $a0, $t6, $v1
    ctx->pc = 0x314ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x314bac: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x314bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x314bb0: 0xad8d29e0  sw          $t5, 0x29E0($t4)
    ctx->pc = 0x314bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 10720), GPR_U32(ctx, 13));
    // 0x314bb4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x314bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x314bb8: 0x460e1080  add.s       $f2, $f2, $f14
    ctx->pc = 0x314bb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
    // 0x314bbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x314bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x314bc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x314bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314bc4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x314BC4u;
    {
        const bool branch_taken_0x314bc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314bc4) {
            ctx->pc = 0x314BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314BC4u;
            // 0x314bc8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x314BE0u;
            goto label_314be0;
        }
    }
    ctx->pc = 0x314BCCu;
    // 0x314bcc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314bd0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x314bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x314bd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x314BD4u;
    {
        const bool branch_taken_0x314bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314BD4u;
            // 0x314bd8: 0x3c0d8000  lui         $t5, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bd4) {
            ctx->pc = 0x314BF8u;
            goto label_314bf8;
        }
    }
    ctx->pc = 0x314BDCu;
    // 0x314bdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x314bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_314be0:
    // 0x314be0: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x314be0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x314be4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314be4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x314be8: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x314be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x314bec: 0x0  nop
    ctx->pc = 0x314becu;
    // NOP
    // 0x314bf0: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x314bf0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x314bf4: 0x3c0d8000  lui         $t5, 0x8000
    ctx->pc = 0x314bf4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32768 << 16));
label_314bf8:
    // 0x314bf8: 0xeb6023  subu        $t4, $a3, $t3
    ctx->pc = 0x314bf8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x314bfc: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x314bfcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x314c00: 0xca5823  subu        $t3, $a2, $t2
    ctx->pc = 0x314c00u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x314c04: 0xac8d0110  sw          $t5, 0x110($a0)
    ctx->pc = 0x314c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 13));
    // 0x314c08: 0x3c0a0031  lui         $t2, 0x31
    ctx->pc = 0x314c08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)49 << 16));
    // 0x314c0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x314c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x314c10: 0x254a4e40  addiu       $t2, $t2, 0x4E40
    ctx->pc = 0x314c10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20032));
    // 0x314c14: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x314c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x314c18: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x314c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x314c1c: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x314c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x314c20: 0xac8c0018  sw          $t4, 0x18($a0)
    ctx->pc = 0x314c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 12));
    // 0x314c24: 0xac8b001c  sw          $t3, 0x1C($a0)
    ctx->pc = 0x314c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 11));
    // 0x314c28: 0x90a60014  lbu         $a2, 0x14($a1)
    ctx->pc = 0x314c28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x314c2c: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x314c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x314c30: 0x94a6000c  lhu         $a2, 0xC($a1)
    ctx->pc = 0x314c30u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x314c34: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x314c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x314c38: 0x94a6000e  lhu         $a2, 0xE($a1)
    ctx->pc = 0x314c38u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x314c3c: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x314c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x314c40: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x314c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x314c44: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x314c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x314c48: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x314c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x314c4c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x314c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x314c50: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x314c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x314c54: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x314c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x314c58: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x314c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314c5c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x314c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x314c60: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x314c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314c64: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x314c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x314c68: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x314c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x314c6c: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x314c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x314c70: 0xac8a0114  sw          $t2, 0x114($a0)
    ctx->pc = 0x314c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 10));
    // 0x314c74: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x314c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x314c78: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x314C78u;
    {
        const bool branch_taken_0x314c78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x314c78) {
            ctx->pc = 0x314C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314C78u;
            // 0x314c7c: 0x9466001c  lhu         $a2, 0x1C($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314C90u;
            goto label_314c90;
        }
    }
    ctx->pc = 0x314C80u;
    // 0x314c80: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x314c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x314c84: 0x24c65700  addiu       $a2, $a2, 0x5700
    ctx->pc = 0x314c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22272));
    // 0x314c88: 0xac860114  sw          $a2, 0x114($a0)
    ctx->pc = 0x314c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 6));
    // 0x314c8c: 0x9466001c  lhu         $a2, 0x1C($v1)
    ctx->pc = 0x314c8cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_314c90:
    // 0x314c90: 0x28c10101  slti        $at, $a2, 0x101
    ctx->pc = 0x314c90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x314c94: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x314C94u;
    {
        const bool branch_taken_0x314c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314c94) {
            ctx->pc = 0x314CACu;
            goto label_314cac;
        }
    }
    ctx->pc = 0x314C9Cu;
    // 0x314c9c: 0x9466001e  lhu         $a2, 0x1E($v1)
    ctx->pc = 0x314c9cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x314ca0: 0x28c10101  slti        $at, $a2, 0x101
    ctx->pc = 0x314ca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x314ca4: 0x54200020  bnel        $at, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x314CA4u;
    {
        const bool branch_taken_0x314ca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x314ca4) {
            ctx->pc = 0x314CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314CA4u;
            // 0x314ca8: 0x8c670018  lw          $a3, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314D28u;
            goto label_314d28;
        }
    }
    ctx->pc = 0x314CACu;
label_314cac:
    // 0x314cac: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x314cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x314cb0: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x314cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x314cb4: 0x24e76bb0  addiu       $a3, $a3, 0x6BB0
    ctx->pc = 0x314cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27568));
    // 0x314cb8: 0xac870114  sw          $a3, 0x114($a0)
    ctx->pc = 0x314cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 7));
    // 0x314cbc: 0x9467001c  lhu         $a3, 0x1C($v1)
    ctx->pc = 0x314cbcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x314cc0: 0x14e60012  bne         $a3, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x314CC0u;
    {
        const bool branch_taken_0x314cc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x314CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314CC0u;
            // 0x314cc4: 0x90680018  lbu         $t0, 0x18($v1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314cc0) {
            ctx->pc = 0x314D0Cu;
            goto label_314d0c;
        }
    }
    ctx->pc = 0x314CC8u;
    // 0x314cc8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x314cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x314ccc: 0x51060010  beql        $t0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x314CCCu;
    {
        const bool branch_taken_0x314ccc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x314ccc) {
            ctx->pc = 0x314CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314CCCu;
            // 0x314cd0: 0x8c86003c  lw          $a2, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314D10u;
            goto label_314d10;
        }
    }
    ctx->pc = 0x314CD4u;
    // 0x314cd4: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x314cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x314cd8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x314cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x314cdc: 0x24e777c0  addiu       $a3, $a3, 0x77C0
    ctx->pc = 0x314cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30656));
    // 0x314ce0: 0x94c8dab0  lhu         $t0, -0x2550($a2)
    ctx->pc = 0x314ce0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294957744)));
    // 0x314ce4: 0xac870114  sw          $a3, 0x114($a0)
    ctx->pc = 0x314ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 7));
    // 0x314ce8: 0x24070303  addiu       $a3, $zero, 0x303
    ctx->pc = 0x314ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x314cec: 0x11070004  beq         $t0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x314CECu;
    {
        const bool branch_taken_0x314cec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x314cec) {
            ctx->pc = 0x314D00u;
            goto label_314d00;
        }
    }
    ctx->pc = 0x314CF4u;
    // 0x314cf4: 0x24060102  addiu       $a2, $zero, 0x102
    ctx->pc = 0x314cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x314cf8: 0x15060004  bne         $t0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x314CF8u;
    {
        const bool branch_taken_0x314cf8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x314cf8) {
            ctx->pc = 0x314D0Cu;
            goto label_314d0c;
        }
    }
    ctx->pc = 0x314D00u;
label_314d00:
    // 0x314d00: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x314d00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x314d04: 0x24c68350  addiu       $a2, $a2, -0x7CB0
    ctx->pc = 0x314d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935376));
    // 0x314d08: 0xac860114  sw          $a2, 0x114($a0)
    ctx->pc = 0x314d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 6));
label_314d0c:
    // 0x314d0c: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x314d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_314d10:
    // 0x314d10: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x314D10u;
    {
        const bool branch_taken_0x314d10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d10) {
            ctx->pc = 0x314D24u;
            goto label_314d24;
        }
    }
    ctx->pc = 0x314D18u;
    // 0x314d18: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x314d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x314d1c: 0x24c69010  addiu       $a2, $a2, -0x6FF0
    ctx->pc = 0x314d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938640));
    // 0x314d20: 0xac860114  sw          $a2, 0x114($a0)
    ctx->pc = 0x314d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 6));
label_314d24:
    // 0x314d24: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x314d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_314d28:
    // 0x314d28: 0x24060700  addiu       $a2, $zero, 0x700
    ctx->pc = 0x314d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x314d2c: 0x30e7ff00  andi        $a3, $a3, 0xFF00
    ctx->pc = 0x314d2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x314d30: 0x14e60016  bne         $a3, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x314D30u;
    {
        const bool branch_taken_0x314d30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x314d30) {
            ctx->pc = 0x314D8Cu;
            goto label_314d8c;
        }
    }
    ctx->pc = 0x314D38u;
    // 0x314d38: 0x9466001c  lhu         $a2, 0x1C($v1)
    ctx->pc = 0x314d38u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x314d3c: 0x28c10101  slti        $at, $a2, 0x101
    ctx->pc = 0x314d3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x314d40: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x314D40u;
    {
        const bool branch_taken_0x314d40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x314d40) {
            ctx->pc = 0x314D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314D40u;
            // 0x314d44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314D5Cu;
            goto label_314d5c;
        }
    }
    ctx->pc = 0x314D48u;
    // 0x314d48: 0x9463001e  lhu         $v1, 0x1E($v1)
    ctx->pc = 0x314d48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x314d4c: 0x28610101  slti        $at, $v1, 0x101
    ctx->pc = 0x314d4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x314d50: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x314D50u;
    {
        const bool branch_taken_0x314d50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x314d50) {
            ctx->pc = 0x314D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x314D50u;
            // 0x314d54: 0x94a60000  lhu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x314D68u;
            goto label_314d68;
        }
    }
    ctx->pc = 0x314D58u;
    // 0x314d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314d5c:
    // 0x314d5c: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x314d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x314d60: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x314d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x314d64: 0x94a60000  lhu         $a2, 0x0($a1)
    ctx->pc = 0x314d64u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_314d68:
    // 0x314d68: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x314d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x314d6c: 0x24636370  addiu       $v1, $v1, 0x6370
    ctx->pc = 0x314d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25456));
    // 0x314d70: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x314d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x314d74: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x314d74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x314d78: 0x24a54380  addiu       $a1, $a1, 0x4380
    ctx->pc = 0x314d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17280));
    // 0x314d7c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x314d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x314d80: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x314d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x314d84: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x314d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x314d88: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x314d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
label_314d8c:
    // 0x314d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x314D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314D94u;
    // 0x314d94: 0x0  nop
    ctx->pc = 0x314d94u;
    // NOP
    // 0x314d98: 0x0  nop
    ctx->pc = 0x314d98u;
    // NOP
    // 0x314d9c: 0x0  nop
    ctx->pc = 0x314d9cu;
    // NOP
    ctx->pc = 0x314da0u;
}
