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

// Function: sub_0031C880
// Address: 0x31c880 - 0x31d590
void sub_0031C880_0x31c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C880_0x31c880");
#endif

    switch (ctx->pc) {
        case 0x31ca5cu: goto label_31ca5c;
        case 0x31ca64u: goto label_31ca64;
        case 0x31ca74u: goto label_31ca74;
        case 0x31ca80u: goto label_31ca80;
        case 0x31cac0u: goto label_31cac0;
        case 0x31cac8u: goto label_31cac8;
        case 0x31cad8u: goto label_31cad8;
        case 0x31cae4u: goto label_31cae4;
        case 0x31cb14u: goto label_31cb14;
        case 0x31cf1cu: goto label_31cf1c;
        case 0x31cf30u: goto label_31cf30;
        case 0x31cf38u: goto label_31cf38;
        case 0x31d02cu: goto label_31d02c;
        case 0x31d034u: goto label_31d034;
        case 0x31d044u: goto label_31d044;
        case 0x31d050u: goto label_31d050;
        case 0x31d098u: goto label_31d098;
        case 0x31d0a0u: goto label_31d0a0;
        case 0x31d0b4u: goto label_31d0b4;
        case 0x31d0c0u: goto label_31d0c0;
        case 0x31d0f8u: goto label_31d0f8;
        case 0x31d50cu: goto label_31d50c;
        case 0x31d520u: goto label_31d520;
        case 0x31d528u: goto label_31d528;
        default: break;
    }

    ctx->pc = 0x31c880u;

    // 0x31c880: 0x18a0004e  blez        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x31C880u;
    {
        const bool branch_taken_0x31c880 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x31c880) {
            ctx->pc = 0x31C9BCu;
            goto label_31c9bc;
        }
    }
    ctx->pc = 0x31C888u;
    // 0x31c888: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31c888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31c88c: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x31c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31c890: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x31c890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x31c894: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C894u;
    {
        const bool branch_taken_0x31c894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c894) {
            ctx->pc = 0x31C8A8u;
            goto label_31c8a8;
        }
    }
    ctx->pc = 0x31C89Cu;
    // 0x31c89c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c8a0: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31c8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31c8a4: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x31c8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31c8a8:
    // 0x31c8a8: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31c8ac: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x31c8acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x31c8b0: 0x8c6b29e0  lw          $t3, 0x29E0($v1)
    ctx->pc = 0x31c8b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31c8b4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x31c8b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c8b8: 0x3c0901da  lui         $t1, 0x1DA
    ctx->pc = 0x31c8b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)474 << 16));
    // 0x31c8bc: 0x3c084f00  lui         $t0, 0x4F00
    ctx->pc = 0x31c8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20224 << 16));
    // 0x31c8c0: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x31c8c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31c8c4: 0x25294df0  addiu       $t1, $t1, 0x4DF0
    ctx->pc = 0x31c8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19952));
    // 0x31c8c8: 0xb38c0  sll         $a3, $t3, 3
    ctx->pc = 0x31c8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x31c8cc: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31c8d0: 0xeb5023  subu        $t2, $a3, $t3
    ctx->pc = 0x31c8d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x31c8d4: 0x25670001  addiu       $a3, $t3, 0x1
    ctx->pc = 0x31c8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31c8d8: 0xac6729e0  sw          $a3, 0x29E0($v1)
    ctx->pc = 0x31c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 7));
    // 0x31c8dc: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x31c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x31c8e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x31c8e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c8e4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x31c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x31c8e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31c8ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31c8ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31c8f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31C8F0u;
    {
        const bool branch_taken_0x31c8f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8F0u;
        // 0x31c8f4: 0x1235021  addu        $t2, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8f0) {
            ctx->pc = 0x31C908u;
            goto label_31c908;
        }
    }
    ctx->pc = 0x31C8F8u;
    // 0x31c8f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c8f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c8fc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x31c8fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31c900: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31C900u;
    {
        const bool branch_taken_0x31c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C900u;
        // 0x31c904: 0x7183c  dsll32      $v1, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c900) {
            ctx->pc = 0x31C924u;
            goto label_31c924;
        }
    }
    ctx->pc = 0x31C908u;
label_31c908:
    // 0x31c908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31c908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31c90c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31c910: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31c910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31c914: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x31c914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x31c918: 0x0  nop
    ctx->pc = 0x31c918u;
    // NOP
    // 0x31c91c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x31c91cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x31c920: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x31c920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_31c924:
    // 0x31c924: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x31c924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x31c928: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31c928u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31c92c: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x31c92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x31c930: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x31c930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x31c934: 0xad470110  sw          $a3, 0x110($t2)
    ctx->pc = 0x31c934u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 272), GPR_U32(ctx, 7));
    // 0x31c938: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x31c938u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x31c93c: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x31c93cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x31c940: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x31c940u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x31c944: 0x24e7c9d0  addiu       $a3, $a3, -0x3630
    ctx->pc = 0x31c944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953424));
    // 0x31c948: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x31c948u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x31c94c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C94Cu;
    {
        const bool branch_taken_0x31c94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C94Cu;
        // 0x31c950: 0xad470114  sw          $a3, 0x114($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 276), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c94c) {
            ctx->pc = 0x31C960u;
            goto label_31c960;
        }
    }
    ctx->pc = 0x31C954u;
    // 0x31c954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c958: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31c958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31c95c: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x31c95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31c960:
    // 0x31c960: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31c960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31c964: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x31c964u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x31c968: 0x8c6c29e0  lw          $t4, 0x29E0($v1)
    ctx->pc = 0x31c968u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31c96c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x31c96cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x31c970: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x31c970u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x31c974: 0x3c0a01da  lui         $t2, 0x1DA
    ctx->pc = 0x31c974u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)474 << 16));
    // 0x31c978: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31c978u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x31c97c: 0x254a4df0  addiu       $t2, $t2, 0x4DF0
    ctx->pc = 0x31c97cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 19952));
    // 0x31c980: 0xc38c0  sll         $a3, $t4, 3
    ctx->pc = 0x31c980u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x31c984: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31c984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31c988: 0xec5823  subu        $t3, $a3, $t4
    ctx->pc = 0x31c988u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x31c98c: 0x2508cfa0  addiu       $t0, $t0, -0x3060
    ctx->pc = 0x31c98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954912));
    // 0x31c990: 0x25870001  addiu       $a3, $t4, 0x1
    ctx->pc = 0x31c990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x31c994: 0xac6729e0  sw          $a3, 0x29E0($v1)
    ctx->pc = 0x31c994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 7));
    // 0x31c998: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x31c998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x31c99c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x31c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x31c9a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31c9a4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x31c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x31c9a8: 0xac690110  sw          $t1, 0x110($v1)
    ctx->pc = 0x31c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 9));
    // 0x31c9ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x31c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x31c9b0: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x31c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x31c9b4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x31c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x31c9b8: 0xac680114  sw          $t0, 0x114($v1)
    ctx->pc = 0x31c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 8));
label_31c9bc:
    // 0x31c9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x31C9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C9C4u;
    // 0x31c9c4: 0x0  nop
    ctx->pc = 0x31c9c4u;
    // NOP
    // 0x31c9c8: 0x0  nop
    ctx->pc = 0x31c9c8u;
    // NOP
    // 0x31c9cc: 0x0  nop
    ctx->pc = 0x31c9ccu;
    // NOP
    // 0x31c9d0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x31c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x31c9d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31c9d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31c9dc: 0x2463d500  addiu       $v1, $v1, -0x2B00
    ctx->pc = 0x31c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956288));
    // 0x31c9e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31c9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31c9e4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31c9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31c9e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31c9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31c9ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31c9f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31c9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31c9f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31c9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31c9f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31c9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31c9fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31c9fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31ca04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ca04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ca08: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x31ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31ca0c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x31ca0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31ca10: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x31ca10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
    // 0x31ca14: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x31ca14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x31ca18: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ca1c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x31ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31ca20: 0x8c634780  lw          $v1, 0x4780($v1)
    ctx->pc = 0x31ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18304)));
    // 0x31ca24: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x31ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x31ca28: 0xc49021  addu        $s2, $a2, $a0
    ctx->pc = 0x31ca28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x31ca2c: 0x12430016  beq         $s2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31CA2Cu;
    {
        const bool branch_taken_0x31ca2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x31CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA2Cu;
        // 0x31ca30: 0xc58021  addu        $s0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca2c) {
            ctx->pc = 0x31CA88u;
            goto label_31ca88;
        }
    }
    ctx->pc = 0x31CA34u;
    // 0x31ca34: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31ca38: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31ca38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ca3c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x31ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x31ca40: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x31ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x31ca44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31ca44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ca48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31ca48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31ca4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca50: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x31ca50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31ca54: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31CA54u;
    SET_GPR_U32(ctx, 31, 0x31CA5Cu);
    ctx->pc = 0x31CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA54u;
    // 0x31ca58: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x31CA54u, 0x31CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA5Cu;
label_31ca5c:
    // 0x31ca5c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31CA5Cu;
    SET_GPR_U32(ctx, 31, 0x31CA64u);
    ctx->pc = 0x31CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA5Cu;
    // 0x31ca60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31CA5Cu, 0x31CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA64u;
label_31ca64:
    // 0x31ca64: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31ca68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31ca68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca6c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31CA6Cu;
    SET_GPR_U32(ctx, 31, 0x31CA74u);
    ctx->pc = 0x31CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA6Cu;
    // 0x31ca70: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x31CA6Cu, 0x31CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA74u;
label_31ca74:
    // 0x31ca74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31ca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca78: 0xc040454  jal         func_101150
    ctx->pc = 0x31CA78u;
    SET_GPR_U32(ctx, 31, 0x31CA80u);
    ctx->pc = 0x31CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA78u;
    // 0x31ca7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x31CA78u, 0x31CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA80u;
label_31ca80:
    // 0x31ca80: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ca84: 0xac724780  sw          $s2, 0x4780($v1)
    ctx->pc = 0x31ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18304), GPR_U32(ctx, 18));
label_31ca88:
    // 0x31ca88: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31ca8c: 0x8c634790  lw          $v1, 0x4790($v1)
    ctx->pc = 0x31ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18320)));
    // 0x31ca90: 0x5203001d  beql        $s0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x31CA90u;
    {
        const bool branch_taken_0x31ca90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x31ca90) {
            ctx->pc = 0x31CA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CA90u;
            // 0x31ca94: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CB08u;
            goto label_31cb08;
        }
    }
    ctx->pc = 0x31CA98u;
    // 0x31ca98: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31ca9c: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x31ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x31caa0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x31caa4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x31caa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31caa8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x31caa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31caac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31caacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cab0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31cab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cab4: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x31cab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x31cab8: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31CAB8u;
    SET_GPR_U32(ctx, 31, 0x31CAC0u);
    ctx->pc = 0x31CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CAB8u;
    // 0x31cabc: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x31CAB8u, 0x31CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CAC0u;
label_31cac0:
    // 0x31cac0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31CAC0u;
    SET_GPR_U32(ctx, 31, 0x31CAC8u);
    ctx->pc = 0x31CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CAC0u;
    // 0x31cac4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31CAC0u, 0x31CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CAC8u;
label_31cac8:
    // 0x31cac8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31cacc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31caccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cad0: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31CAD0u;
    SET_GPR_U32(ctx, 31, 0x31CAD8u);
    ctx->pc = 0x31CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CAD0u;
    // 0x31cad4: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x31CAD0u, 0x31CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CAD8u;
label_31cad8:
    // 0x31cad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31cad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cadc: 0xc040454  jal         func_101150
    ctx->pc = 0x31CADCu;
    SET_GPR_U32(ctx, 31, 0x31CAE4u);
    ctx->pc = 0x31CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CADCu;
    // 0x31cae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x31CADCu, 0x31CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CAE4u;
label_31cae4:
    // 0x31cae4: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x31cae8: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31caec: 0xac904790  sw          $s0, 0x4790($a0)
    ctx->pc = 0x31caecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18320), GPR_U32(ctx, 16));
    // 0x31caf0: 0xac604794  sw          $zero, 0x4794($v1)
    ctx->pc = 0x31caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18324), GPR_U32(ctx, 0));
    // 0x31caf4: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x31caf8: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31cafc: 0xac804798  sw          $zero, 0x4798($a0)
    ctx->pc = 0x31cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18328), GPR_U32(ctx, 0));
    // 0x31cb00: 0xac60479c  sw          $zero, 0x479C($v1)
    ctx->pc = 0x31cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18332), GPR_U32(ctx, 0));
    // 0x31cb04: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x31cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_31cb08:
    // 0x31cb08: 0x10600119  beqz        $v1, . + 4 + (0x119 << 2)
    ctx->pc = 0x31CB08u;
    {
        const bool branch_taken_0x31cb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB08u;
        // 0x31cb0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb08) {
            ctx->pc = 0x31CF70u;
            goto label_31cf70;
        }
    }
    ctx->pc = 0x31CB10u;
    // 0x31cb10: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x31cb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31cb14:
    // 0x31cb14: 0x9606003c  lhu         $a2, 0x3C($s0)
    ctx->pc = 0x31cb14u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x31cb18: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x31cb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cb1c: 0x7ba301b0  lq          $v1, 0x1B0($sp)
    ctx->pc = 0x31cb1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x31cb20: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x31cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31cb24: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x31cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31cb28: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x31cb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x31cb2c: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x31cb2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31cb30: 0x86240030  lh          $a0, 0x30($s1)
    ctx->pc = 0x31cb30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x31cb34: 0x64040  sll         $t0, $a2, 1
    ctx->pc = 0x31cb34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31cb38: 0x53403  sra         $a2, $a1, 16
    ctx->pc = 0x31cb38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 16));
    // 0x31cb3c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x31cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x31cb40: 0x1282821  addu        $a1, $t1, $t0
    ctx->pc = 0x31cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x31cb44: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x31cb44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31cb48: 0x9067b280  lbu         $a3, -0x4D80($v1)
    ctx->pc = 0x31cb48u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x31cb4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31cb4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31cb50: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x31cb50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x31cb54: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x31cb54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31cb58: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x31cb58u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x31cb5c: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x31cb5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x31cb60: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x31cb60u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x31cb64: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x31cb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31cb68: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x31cb68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x31cb6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31cb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31cb70: 0x86030040  lh          $v1, 0x40($s0)
    ctx->pc = 0x31cb70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x31cb74: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x31cb74u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x31cb78: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x31cb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x31cb7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31cb7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31cb80: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x31cb80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x31cb84: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x31CB84u;
    {
        const bool branch_taken_0x31cb84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB84u;
        // 0x31cb88: 0xca1821  addu        $v1, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb84) {
            ctx->pc = 0x31CBC0u;
            goto label_31cbc0;
        }
    }
    ctx->pc = 0x31CB8Cu;
    // 0x31cb8c: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x31cb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x31cb90: 0x3c078888  lui         $a3, 0x8888
    ctx->pc = 0x31cb90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34952 << 16));
    // 0x31cb94: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x31cb94u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x31cb98: 0x34e78889  ori         $a3, $a3, 0x8889
    ctx->pc = 0x31cb98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)34953);
    // 0x31cb9c: 0x84980  sll         $t1, $t0, 6
    ctx->pc = 0x31cb9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x31cba0: 0xe90018  mult        $zero, $a3, $t1
    ctx->pc = 0x31cba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31cba4: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x31cba4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x31cba8: 0x0  nop
    ctx->pc = 0x31cba8u;
    // NOP
    // 0x31cbac: 0x3810  mfhi        $a3
    ctx->pc = 0x31cbacu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x31cbb0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x31cbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x31cbb4: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x31cbb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x31cbb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31CBB8u;
    {
        const bool branch_taken_0x31cbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBB8u;
        // 0x31cbbc: 0xe84821  addu        $t1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cbb8) {
            ctx->pc = 0x31CBC8u;
            goto label_31cbc8;
        }
    }
    ctx->pc = 0x31CBC0u;
label_31cbc0:
    // 0x31cbc0: 0x2529fff0  addiu       $t1, $t1, -0x10
    ctx->pc = 0x31cbc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x31cbc4: 0x0  nop
    ctx->pc = 0x31cbc4u;
    // NOP
label_31cbc8:
    // 0x31cbc8: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x31cbc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
    // 0x31cbcc: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x31cbccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x31cbd0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x31cbd0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x31cbd4: 0x84ab0000  lh          $t3, 0x0($a1)
    ctx->pc = 0x31cbd4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31cbd8: 0x12a4021  addu        $t0, $t1, $t2
    ctx->pc = 0x31cbd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x31cbdc: 0x28810200  slti        $at, $a0, 0x200
    ctx->pc = 0x31cbdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x31cbe0: 0x876021  addu        $t4, $a0, $a3
    ctx->pc = 0x31cbe0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x31cbe4: 0x102000dc  beqz        $at, . + 4 + (0xDC << 2)
    ctx->pc = 0x31CBE4u;
    {
        const bool branch_taken_0x31cbe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBE4u;
        // 0x31cbe8: 0x1675021  addu        $t2, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cbe4) {
            ctx->pc = 0x31CF58u;
            goto label_31cf58;
        }
    }
    ctx->pc = 0x31CBECu;
    // 0x31cbec: 0x29810201  slti        $at, $t4, 0x201
    ctx->pc = 0x31cbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x31cbf0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x31CBF0u;
    {
        const bool branch_taken_0x31cbf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cbf0) {
            ctx->pc = 0x31CC08u;
            goto label_31cc08;
        }
    }
    ctx->pc = 0x31CBF8u;
    // 0x31cbf8: 0x2582fe00  addiu       $v0, $t4, -0x200
    ctx->pc = 0x31cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966784));
    // 0x31cbfc: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x31cbfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x31cc00: 0x240c0200  addiu       $t4, $zero, 0x200
    ctx->pc = 0x31cc00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31cc04: 0x0  nop
    ctx->pc = 0x31cc04u;
    // NOP
label_31cc08:
    // 0x31cc08: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x31cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x31cc0c: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x31cc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x31cc10: 0xac100  sll         $t8, $t2, 4
    ctx->pc = 0x31cc10u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x31cc14: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x31cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31cc18: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x31cc18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31cc1c: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x31cc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x31cc20: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x31cc20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x31cc24: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x31cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x31cc28: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x31cc28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x31cc2c: 0x24546c00  addiu       $s4, $v0, 0x6C00
    ctx->pc = 0x31cc2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x31cc30: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x31cc30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x31cc34: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x31cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x31cc38: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x31cc38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31cc3c: 0x24597200  addiu       $t9, $v0, 0x7200
    ctx->pc = 0x31cc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
    // 0x31cc40: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31cc40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31cc44: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x31cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x31cc48: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31cc48u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31cc4c: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x31cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x31cc50: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31cc50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31cc54: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x31cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31cc58: 0x3c1e01dc  lui         $fp, 0x1DC
    ctx->pc = 0x31cc58u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)476 << 16));
    // 0x31cc5c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x31cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x31cc60: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31cc64: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x31cc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x31cc68: 0x3c177000  lui         $s7, 0x7000
    ctx->pc = 0x31cc68u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)28672 << 16));
    // 0x31cc6c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x31cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x31cc70: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x31cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
    // 0x31cc74: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x31cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x31cc78: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31cc7c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x31cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x31cc80: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x31cc80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x31cc84: 0x34c3000c  ori         $v1, $a2, 0xC
    ctx->pc = 0x31cc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12);
    // 0x31cc88: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x31cc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
    // 0x31cc8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31cc90: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31cc90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31cc94: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x31cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x31cc98: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x31cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31cc9c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x31cc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x31cca0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x31cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31cca4: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x31cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x31cca8: 0x3c032017  lui         $v1, 0x2017
    ctx->pc = 0x31cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8215 << 16));
    // 0x31ccac: 0xfc440018  sd          $a0, 0x18($v0)
    ctx->pc = 0x31ccacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x31ccb0: 0x3463d00e  ori         $v1, $v1, 0xD00E
    ctx->pc = 0x31ccb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53262);
    // 0x31ccb4: 0x3c046944  lui         $a0, 0x6944
    ctx->pc = 0x31ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26948 << 16));
    // 0x31ccb8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x31ccb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31ccbc: 0x34863480  ori         $a2, $a0, 0x3480
    ctx->pc = 0x31ccbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13440);
    // 0x31ccc0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x31ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31ccc4: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x31ccc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x31ccc8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x31ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31cccc: 0xfc460020  sd          $a2, 0x20($v0)
    ctx->pc = 0x31ccccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 6));
    // 0x31ccd0: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x31ccd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31ccd4: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x31ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x31ccd8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x31ccd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31ccdc: 0x3c0360ab  lui         $v1, 0x60AB
    ctx->pc = 0x31ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24747 << 16));
    // 0x31cce0: 0xfc400030  sd          $zero, 0x30($v0)
    ctx->pc = 0x31cce0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
    // 0x31cce4: 0xfc440038  sd          $a0, 0x38($v0)
    ctx->pc = 0x31cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 4));
    // 0x31cce8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31cce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31ccec: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31ccecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31ccf0: 0xfc480040  sd          $t0, 0x40($v0)
    ctx->pc = 0x31ccf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 8));
    // 0x31ccf4: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x31ccf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31ccf8: 0xfc460048  sd          $a2, 0x48($v0)
    ctx->pc = 0x31ccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 6));
    // 0x31ccfc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31ccfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31cd00: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31cd00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31cd04: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x31cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x31cd08: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31cd08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31cd0c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31cd10: 0x34643513  ori         $a0, $v1, 0x3513
    ctx->pc = 0x31cd10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x31cd14: 0xfc440058  sd          $a0, 0x58($v0)
    ctx->pc = 0x31cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 4));
    // 0x31cd18: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31cd1c: 0x8c6b0370  lw          $t3, 0x370($v1)
    ctx->pc = 0x31cd1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31cd20: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31cd24: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31cd28: 0x256a0060  addiu       $t2, $t3, 0x60
    ctx->pc = 0x31cd28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 96));
    // 0x31cd2c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31cd30: 0xac4a0370  sw          $t2, 0x370($v0)
    ctx->pc = 0x31cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 10));
    // 0x31cd34: 0xad670060  sw          $a3, 0x60($t3)
    ctx->pc = 0x31cd34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 96), GPR_U32(ctx, 7));
    // 0x31cd38: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31cd3c: 0x8d270370  lw          $a3, 0x370($t1)
    ctx->pc = 0x31cd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31cd40: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31cd40u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31cd44: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31cd44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31cd48: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x31cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x31cd4c: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31cd4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31cd50: 0x8d150370  lw          $s5, 0x370($t0)
    ctx->pc = 0x31cd50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31cd54: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31cd58: 0x7fa50160  sq          $a1, 0x160($sp)
    ctx->pc = 0x31cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 5));
    // 0x31cd5c: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31cd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31cd60: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31cd64: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x31cd64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x31cd68: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31cd68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31cd6c: 0x7fa50150  sq          $a1, 0x150($sp)
    ctx->pc = 0x31cd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 5));
    // 0x31cd70: 0x3c1501dc  lui         $s5, 0x1DC
    ctx->pc = 0x31cd70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)476 << 16));
    // 0x31cd74: 0x8cc50370  lw          $a1, 0x370($a2)
    ctx->pc = 0x31cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31cd78: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x31cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x31cd7c: 0x3c1501dc  lui         $s5, 0x1DC
    ctx->pc = 0x31cd7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)476 << 16));
    // 0x31cd80: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x31cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x31cd84: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31cd84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31cd88: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x31cd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x31cd8c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31cd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31cd90: 0x3c1501dc  lui         $s5, 0x1DC
    ctx->pc = 0x31cd90u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)476 << 16));
    // 0x31cd94: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x31cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31cd98: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x31cd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x31cd9c: 0x3c1501dc  lui         $s5, 0x1DC
    ctx->pc = 0x31cd9cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)476 << 16));
    // 0x31cda0: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x31cda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x31cda4: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x31cda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x31cda8: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31cdac: 0x24950010  addiu       $s5, $a0, 0x10
    ctx->pc = 0x31cdacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31cdb0: 0x7fa500f0  sq          $a1, 0xF0($sp)
    ctx->pc = 0x31cdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 5));
    // 0x31cdb4: 0xac750370  sw          $s5, 0x370($v1)
    ctx->pc = 0x31cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 21));
    // 0x31cdb8: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31cdbc: 0xac960010  sw          $s6, 0x10($a0)
    ctx->pc = 0x31cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 22));
    // 0x31cdc0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31cdc4: 0x8c550370  lw          $s5, 0x370($v0)
    ctx->pc = 0x31cdc4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31cdc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cdcc: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x31cdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x31cdd0: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31cdd4: 0xaeb60004  sw          $s6, 0x4($s5)
    ctx->pc = 0x31cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 22));
    // 0x31cdd8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31cddc: 0x8def0370  lw          $t7, 0x370($t7)
    ctx->pc = 0x31cddcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 880)));
    // 0x31cde0: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x31cde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
    // 0x31cde4: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31cde8: 0xadf60008  sw          $s6, 0x8($t7)
    ctx->pc = 0x31cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 22));
    // 0x31cdec: 0x8dce0370  lw          $t6, 0x370($t6)
    ctx->pc = 0x31cdecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x31cdf0: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x31cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x31cdf4: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31cdf8: 0xadd6000c  sw          $s6, 0xC($t6)
    ctx->pc = 0x31cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 22));
    // 0x31cdfc: 0x8dae0370  lw          $t6, 0x370($t5)
    ctx->pc = 0x31cdfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31ce00: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x31ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x31ce04: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31ce08: 0x25cd0010  addiu       $t5, $t6, 0x10
    ctx->pc = 0x31ce08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x31ce0c: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x31ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x31ce10: 0xad8d0370  sw          $t5, 0x370($t4)
    ctx->pc = 0x31ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 880), GPR_U32(ctx, 13));
    // 0x31ce14: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31ce18: 0xadd40010  sw          $s4, 0x10($t6)
    ctx->pc = 0x31ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 20));
    // 0x31ce1c: 0x8d6b0370  lw          $t3, 0x370($t3)
    ctx->pc = 0x31ce1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31ce20: 0xad790004  sw          $t9, 0x4($t3)
    ctx->pc = 0x31ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 25));
    // 0x31ce24: 0x8d4b0370  lw          $t3, 0x370($t2)
    ctx->pc = 0x31ce24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x31ce28: 0x240aa833  addiu       $t2, $zero, -0x57CD
    ctx->pc = 0x31ce28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31ce2c: 0xad6a0008  sw          $t2, 0x8($t3)
    ctx->pc = 0x31ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 10));
    // 0x31ce30: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x31ce30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31ce34: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x31ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x31ce38: 0x8d090370  lw          $t1, 0x370($t0)
    ctx->pc = 0x31ce38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31ce3c: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x31ce3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x31ce40: 0xace80370  sw          $t0, 0x370($a3)
    ctx->pc = 0x31ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 8));
    // 0x31ce44: 0xad380010  sw          $t8, 0x10($t1)
    ctx->pc = 0x31ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 24));
    // 0x31ce48: 0x8fc80370  lw          $t0, 0x370($fp)
    ctx->pc = 0x31ce48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 880)));
    // 0x31ce4c: 0x7ba701a0  lq          $a3, 0x1A0($sp)
    ctx->pc = 0x31ce4cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x31ce50: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x31ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x31ce54: 0x7ba70160  lq          $a3, 0x160($sp)
    ctx->pc = 0x31ce54u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x31ce58: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31ce58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31ce5c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x31ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x31ce60: 0x7ba70150  lq          $a3, 0x150($sp)
    ctx->pc = 0x31ce60u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x31ce64: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31ce64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31ce68: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x31ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x31ce6c: 0x8cc80370  lw          $t0, 0x370($a2)
    ctx->pc = 0x31ce6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31ce70: 0x7ba60140  lq          $a2, 0x140($sp)
    ctx->pc = 0x31ce70u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31ce74: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x31ce74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x31ce78: 0xacc70370  sw          $a3, 0x370($a2)
    ctx->pc = 0x31ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 880), GPR_U32(ctx, 7));
    // 0x31ce7c: 0x7ba60130  lq          $a2, 0x130($sp)
    ctx->pc = 0x31ce7cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x31ce80: 0xad160010  sw          $s6, 0x10($t0)
    ctx->pc = 0x31ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 22));
    // 0x31ce84: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31ce84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31ce88: 0xacd60004  sw          $s6, 0x4($a2)
    ctx->pc = 0x31ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 22));
    // 0x31ce8c: 0x7ba60120  lq          $a2, 0x120($sp)
    ctx->pc = 0x31ce8cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31ce90: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31ce94: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x31ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
    // 0x31ce98: 0x7ba60110  lq          $a2, 0x110($sp)
    ctx->pc = 0x31ce98u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31ce9c: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31ce9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31cea0: 0xacd6000c  sw          $s6, 0xC($a2)
    ctx->pc = 0x31cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 22));
    // 0x31cea4: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x31cea4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31cea8: 0x8cc80370  lw          $t0, 0x370($a2)
    ctx->pc = 0x31cea8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31ceac: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x31ceacu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31ceb0: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x31ceb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x31ceb4: 0xacc70370  sw          $a3, 0x370($a2)
    ctx->pc = 0x31ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 880), GPR_U32(ctx, 7));
    // 0x31ceb8: 0x7ba60190  lq          $a2, 0x190($sp)
    ctx->pc = 0x31ceb8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x31cebc: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x31cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x31cec0: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x31cec0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31cec4: 0x8cc70370  lw          $a3, 0x370($a2)
    ctx->pc = 0x31cec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31cec8: 0x7ba60180  lq          $a2, 0x180($sp)
    ctx->pc = 0x31cec8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x31cecc: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x31ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x31ced0: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x31ced0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31ced4: 0x8cc70370  lw          $a3, 0x370($a2)
    ctx->pc = 0x31ced4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31ced8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x31ced8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cedc: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x31cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x31cee0: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x31cee0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31cee4: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31cee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31cee8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x31cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x31ceec: 0x7c400190  sq          $zero, 0x190($v0)
    ctx->pc = 0x31ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 400), GPR_VEC(ctx, 0));
    // 0x31cef0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31cef4: 0x7ca000c0  sq          $zero, 0xC0($a1)
    ctx->pc = 0x31cef4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 0));
    // 0x31cef8: 0xaee20190  sw          $v0, 0x190($s7)
    ctx->pc = 0x31cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 400), GPR_U32(ctx, 2));
    // 0x31cefc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x31cefcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31cf00: 0x7ba50170  lq          $a1, 0x170($sp)
    ctx->pc = 0x31cf00u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x31cf04: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x31cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 880))); // MMIO: 0x70000370
    // 0x31cf08: 0xac6500c0  sw          $a1, 0xC0($v1)
    ctx->pc = 0x31cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 5));
    // 0x31cf0c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x31cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31cf10: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x31cf10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31cf14: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31CF14u;
    SET_GPR_U32(ctx, 31, 0x31CF1Cu);
    ctx->pc = 0x31CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF14u;
    // 0x31cf18: 0xac430370  sw          $v1, 0x370($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31CF14u, 0x31CF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF1Cu;
label_31cf1c:
    // 0x31cf1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31cf20: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31cf24: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31cf28: 0xc040a04  jal         func_102810
    ctx->pc = 0x31CF28u;
    SET_GPR_U32(ctx, 31, 0x31CF30u);
    ctx->pc = 0x31CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF28u;
    // 0x31cf2c: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31CF28u, 0x31CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF30u;
label_31cf30:
    // 0x31cf30: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
    // 0x31cf34: 0x0  nop
    ctx->pc = 0x31cf34u;
    // NOP
label_31cf38:
    // 0x31cf38: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31cf3c: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31cf3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31cf40: 0x0  nop
    ctx->pc = 0x31cf40u;
    // NOP
    // 0x31cf44: 0x0  nop
    ctx->pc = 0x31cf44u;
    // NOP
    // 0x31cf48: 0x0  nop
    ctx->pc = 0x31cf48u;
    // NOP
    // 0x31cf4c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31CF4Cu;
    {
        const bool branch_taken_0x31cf4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cf4c) {
            ctx->pc = 0x31CF38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31cf38;
        }
    }
    ctx->pc = 0x31CF54u;
    // 0x31cf54: 0x0  nop
    ctx->pc = 0x31cf54u;
    // NOP
label_31cf58:
    // 0x31cf58: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x31cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x31cf5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31cf5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x31cf60: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x31cf60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31cf64: 0x1460feeb  bnez        $v1, . + 4 + (-0x115 << 2)
    ctx->pc = 0x31CF64u;
    {
        const bool branch_taken_0x31cf64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF64u;
        // 0x31cf68: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf64) {
            ctx->pc = 0x31CB14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31cb14;
        }
    }
    ctx->pc = 0x31CF6Cu;
    // 0x31cf6c: 0x0  nop
    ctx->pc = 0x31cf6cu;
    // NOP
label_31cf70:
    // 0x31cf70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31cf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31cf74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31cf74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cf78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31cf78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cf7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31cf7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31cf80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31cf80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cf84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31cf84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31cf88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31cf88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31cf8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31cf8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cf90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31cf90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cf94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31cf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cf98: 0x3e00008  jr          $ra
    ctx->pc = 0x31CF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF98u;
        // 0x31cf9c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CFA0u;
    // 0x31cfa0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x31cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x31cfa4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31cfa8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31cfac: 0x2463d500  addiu       $v1, $v1, -0x2B00
    ctx->pc = 0x31cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956288));
    // 0x31cfb0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31cfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31cfb4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31cfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31cfb8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31cfbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31cfc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31cfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31cfc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31cfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31cfc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31cfcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31cfccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31cfd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31cfd8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x31cfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31cfdc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x31cfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31cfe0: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x31cfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
    // 0x31cfe4: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x31cfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x31cfe8: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31cfec: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x31cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x31cff0: 0x8c634780  lw          $v1, 0x4780($v1)
    ctx->pc = 0x31cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18304)));
    // 0x31cff4: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x31cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x31cff8: 0xc49021  addu        $s2, $a2, $a0
    ctx->pc = 0x31cff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x31cffc: 0x12430016  beq         $s2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31CFFCu;
    {
        const bool branch_taken_0x31cffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x31D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFFCu;
        // 0x31d000: 0xc58021  addu        $s0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cffc) {
            ctx->pc = 0x31D058u;
            goto label_31d058;
        }
    }
    ctx->pc = 0x31D004u;
    // 0x31d004: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31d004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31d008: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31d008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31d00c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x31d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x31d010: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x31d010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x31d014: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31d014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31d018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d01c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31d01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d020: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x31d020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31d024: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31D024u;
    SET_GPR_U32(ctx, 31, 0x31D02Cu);
    ctx->pc = 0x31D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D024u;
    // 0x31d028: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x31D024u, 0x31D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D02Cu;
label_31d02c:
    // 0x31d02c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31D02Cu;
    SET_GPR_U32(ctx, 31, 0x31D034u);
    ctx->pc = 0x31D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D02Cu;
    // 0x31d030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31D02Cu, 0x31D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D034u;
label_31d034:
    // 0x31d034: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31d034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31d038: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31d038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d03c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31D03Cu;
    SET_GPR_U32(ctx, 31, 0x31D044u);
    ctx->pc = 0x31D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D03Cu;
    // 0x31d040: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x31D03Cu, 0x31D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D044u;
label_31d044:
    // 0x31d044: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31d044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d048: 0xc040454  jal         func_101150
    ctx->pc = 0x31D048u;
    SET_GPR_U32(ctx, 31, 0x31D050u);
    ctx->pc = 0x31D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D048u;
    // 0x31d04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x31D048u, 0x31D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D050u;
label_31d050:
    // 0x31d050: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31d050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31d054: 0xac724780  sw          $s2, 0x4780($v1)
    ctx->pc = 0x31d054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18304), GPR_U32(ctx, 18));
label_31d058:
    // 0x31d058: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31d058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31d05c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x31d05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x31d060: 0x8c634790  lw          $v1, 0x4790($v1)
    ctx->pc = 0x31d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18320)));
    // 0x31d064: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x31d064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x31d068: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x31D068u;
    {
        const bool branch_taken_0x31d068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d068) {
            ctx->pc = 0x31D06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D068u;
            // 0x31d06c: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D0ECu;
            goto label_31d0ec;
        }
    }
    ctx->pc = 0x31D070u;
    // 0x31d070: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31d070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31d074: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x31d074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x31d078: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31d078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x31d07c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x31d07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31d080: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x31d080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31d084: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31d084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d088: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31d088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d08c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x31d08cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x31d090: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31D090u;
    SET_GPR_U32(ctx, 31, 0x31D098u);
    ctx->pc = 0x31D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D090u;
    // 0x31d094: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x31D090u, 0x31D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D098u;
label_31d098:
    // 0x31d098: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31D098u;
    SET_GPR_U32(ctx, 31, 0x31D0A0u);
    ctx->pc = 0x31D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D098u;
    // 0x31d09c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31D098u, 0x31D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0A0u;
label_31d0a0:
    // 0x31d0a0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31d0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31d0a4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x31d0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x31d0a8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x31d0ac: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31D0ACu;
    SET_GPR_U32(ctx, 31, 0x31D0B4u);
    ctx->pc = 0x31D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D0ACu;
    // 0x31d0b0: 0x2012821  addu        $a1, $s0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x31D0ACu, 0x31D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0B4u;
label_31d0b4:
    // 0x31d0b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d0b8: 0xc040454  jal         func_101150
    ctx->pc = 0x31D0B8u;
    SET_GPR_U32(ctx, 31, 0x31D0C0u);
    ctx->pc = 0x31D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D0B8u;
    // 0x31d0bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x31D0B8u, 0x31D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0C0u;
label_31d0c0:
    // 0x31d0c0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x31d0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x31d0c4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31d0c8: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x31d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x31d0cc: 0xac644790  sw          $a0, 0x4790($v1)
    ctx->pc = 0x31d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18320), GPR_U32(ctx, 4));
    // 0x31d0d0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31d0d4: 0xac604794  sw          $zero, 0x4794($v1)
    ctx->pc = 0x31d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18324), GPR_U32(ctx, 0));
    // 0x31d0d8: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31d0dc: 0xac604798  sw          $zero, 0x4798($v1)
    ctx->pc = 0x31d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18328), GPR_U32(ctx, 0));
    // 0x31d0e0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31d0e4: 0xac60479c  sw          $zero, 0x479C($v1)
    ctx->pc = 0x31d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18332), GPR_U32(ctx, 0));
    // 0x31d0e8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x31d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_31d0ec:
    // 0x31d0ec: 0x1060011c  beqz        $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x31D0ECu;
    {
        const bool branch_taken_0x31d0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0ECu;
        // 0x31d0f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d0ec) {
            ctx->pc = 0x31D560u;
            goto label_31d560;
        }
    }
    ctx->pc = 0x31D0F4u;
    // 0x31d0f4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x31d0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d0f8:
    // 0x31d0f8: 0x9607003c  lhu         $a3, 0x3C($s0)
    ctx->pc = 0x31d0f8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x31d0fc: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x31d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d100: 0x7ba301b0  lq          $v1, 0x1B0($sp)
    ctx->pc = 0x31d100u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x31d104: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x31d104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31d108: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x31d108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x31d10c: 0x8604003e  lh          $a0, 0x3E($s0)
    ctx->pc = 0x31d10cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x31d110: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x31d110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x31d114: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x31d114u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31d118: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x31d118u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x31d11c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x31d11cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x31d120: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x31d120u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x31d124: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x31d124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x31d128: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x31d128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x31d12c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x31d12cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d130: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x31d130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31d134: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31d134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31d138: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x31d138u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x31d13c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x31d13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x31d140: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x31d140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x31d144: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x31d144u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x31d148: 0x86040040  lh          $a0, 0x40($s0)
    ctx->pc = 0x31d148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x31d14c: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x31d14cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x31d150: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x31d150u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x31d154: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x31d154u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x31d158: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x31d158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x31d15c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31d15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d160: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d164: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x31d164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x31d168: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x31D168u;
    {
        const bool branch_taken_0x31d168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D168u;
        // 0x31d16c: 0xca2021  addu        $a0, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d168) {
            ctx->pc = 0x31D1A8u;
            goto label_31d1a8;
        }
    }
    ctx->pc = 0x31D170u;
    // 0x31d170: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x31d170u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x31d174: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x31d174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x31d178: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x31d178u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x31d17c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x31d17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x31d180: 0x84980  sll         $t1, $t0, 6
    ctx->pc = 0x31d180u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x31d184: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x31d184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31d188: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x31d188u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x31d18c: 0x0  nop
    ctx->pc = 0x31d18cu;
    // NOP
    // 0x31d190: 0x1810  mfhi        $v1
    ctx->pc = 0x31d190u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31d194: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x31d194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x31d198: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x31d198u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31d19c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31D19Cu;
    {
        const bool branch_taken_0x31d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D19Cu;
        // 0x31d1a0: 0x684021  addu        $t0, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d19c) {
            ctx->pc = 0x31D1B0u;
            goto label_31d1b0;
        }
    }
    ctx->pc = 0x31D1A4u;
    // 0x31d1a4: 0x0  nop
    ctx->pc = 0x31d1a4u;
    // NOP
label_31d1a8:
    // 0x31d1a8: 0x2528fff0  addiu       $t0, $t1, -0x10
    ctx->pc = 0x31d1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x31d1ac: 0x0  nop
    ctx->pc = 0x31d1acu;
    // NOP
label_31d1b0:
    // 0x31d1b0: 0x84ec0002  lh          $t4, 0x2($a3)
    ctx->pc = 0x31d1b0u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x31d1b4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x31d1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x31d1b8: 0x84eb0000  lh          $t3, 0x0($a3)
    ctx->pc = 0x31d1b8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31d1bc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x31d1bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x31d1c0: 0x10a1821  addu        $v1, $t0, $t2
    ctx->pc = 0x31d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x31d1c4: 0x1854821  addu        $t1, $t4, $a1
    ctx->pc = 0x31d1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x31d1c8: 0x29210201  slti        $at, $t1, 0x201
    ctx->pc = 0x31d1c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x31d1cc: 0x142000de  bnez        $at, . + 4 + (0xDE << 2)
    ctx->pc = 0x31D1CCu;
    {
        const bool branch_taken_0x31d1cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1CCu;
        // 0x31d1d0: 0x1655021  addu        $t2, $t3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d1cc) {
            ctx->pc = 0x31D548u;
            goto label_31d548;
        }
    }
    ctx->pc = 0x31D1D4u;
    // 0x31d1d4: 0x29810200  slti        $at, $t4, 0x200
    ctx->pc = 0x31d1d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x31d1d8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D1D8u;
    {
        const bool branch_taken_0x31d1d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d1d8) {
            ctx->pc = 0x31D1F0u;
            goto label_31d1f0;
        }
    }
    ctx->pc = 0x31D1E0u;
    // 0x31d1e0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x31d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31d1e4: 0xac1023  subu        $v0, $a1, $t4
    ctx->pc = 0x31d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x31d1e8: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x31d1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x31d1ec: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x31d1ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31d1f0:
    // 0x31d1f0: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x31d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x31d1f4: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x31d1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x31d1f8: 0xac100  sll         $t8, $t2, 4
    ctx->pc = 0x31d1f8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x31d1fc: 0x2582fe00  addiu       $v0, $t4, -0x200
    ctx->pc = 0x31d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966784));
    // 0x31d200: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x31d200u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31d204: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x31d204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31d208: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x31d208u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x31d20c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x31d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x31d210: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x31d210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x31d214: 0x24546c00  addiu       $s4, $v0, 0x6C00
    ctx->pc = 0x31d214u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x31d218: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x31d218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x31d21c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x31d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x31d220: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x31d220u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x31d224: 0x24597200  addiu       $t9, $v0, 0x7200
    ctx->pc = 0x31d224u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
    // 0x31d228: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31d228u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31d22c: 0x2522fe00  addiu       $v0, $t1, -0x200
    ctx->pc = 0x31d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966784));
    // 0x31d230: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31d230u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31d234: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31d234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31d238: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31d238u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31d23c: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x31d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x31d240: 0x3c1e01dc  lui         $fp, 0x1DC
    ctx->pc = 0x31d240u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)476 << 16));
    // 0x31d244: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x31d244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31d248: 0x3c177000  lui         $s7, 0x7000
    ctx->pc = 0x31d248u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)28672 << 16));
    // 0x31d24c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x31d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x31d250: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x31d250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31d254: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x31d254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x31d258: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x31d258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31d25c: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x31d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
    // 0x31d260: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31d260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31d264: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x31d264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x31d268: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31d268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31d26c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x31d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x31d270: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x31d270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x31d274: 0x34c3000c  ori         $v1, $a2, 0xC
    ctx->pc = 0x31d274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12);
    // 0x31d278: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x31d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
    // 0x31d27c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31d280: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31d280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31d284: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x31d284u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x31d288: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x31d288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31d28c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x31d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x31d290: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x31d290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31d294: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x31d294u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x31d298: 0x3c032017  lui         $v1, 0x2017
    ctx->pc = 0x31d298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8215 << 16));
    // 0x31d29c: 0xfc440018  sd          $a0, 0x18($v0)
    ctx->pc = 0x31d29cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x31d2a0: 0x3463d00e  ori         $v1, $v1, 0xD00E
    ctx->pc = 0x31d2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53262);
    // 0x31d2a4: 0x3c046944  lui         $a0, 0x6944
    ctx->pc = 0x31d2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26948 << 16));
    // 0x31d2a8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x31d2a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31d2ac: 0x34863480  ori         $a2, $a0, 0x3480
    ctx->pc = 0x31d2acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13440);
    // 0x31d2b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x31d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31d2b4: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x31d2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x31d2b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x31d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31d2bc: 0xfc460020  sd          $a2, 0x20($v0)
    ctx->pc = 0x31d2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 6));
    // 0x31d2c0: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x31d2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31d2c4: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x31d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x31d2c8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x31d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31d2cc: 0x3c0360ab  lui         $v1, 0x60AB
    ctx->pc = 0x31d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24747 << 16));
    // 0x31d2d0: 0xfc400030  sd          $zero, 0x30($v0)
    ctx->pc = 0x31d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
    // 0x31d2d4: 0xfc440038  sd          $a0, 0x38($v0)
    ctx->pc = 0x31d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 4));
    // 0x31d2d8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31d2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31d2dc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31d2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31d2e0: 0xfc480040  sd          $t0, 0x40($v0)
    ctx->pc = 0x31d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 8));
    // 0x31d2e4: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x31d2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31d2e8: 0xfc460048  sd          $a2, 0x48($v0)
    ctx->pc = 0x31d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 6));
    // 0x31d2ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31d2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31d2f0: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31d2f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31d2f4: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x31d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x31d2f8: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31d2fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31d300: 0x34643513  ori         $a0, $v1, 0x3513
    ctx->pc = 0x31d300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x31d304: 0xfc440058  sd          $a0, 0x58($v0)
    ctx->pc = 0x31d304u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 4));
    // 0x31d308: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31d308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31d30c: 0x8c6b0370  lw          $t3, 0x370($v1)
    ctx->pc = 0x31d30cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31d310: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31d310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31d314: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31d314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31d318: 0x256a0060  addiu       $t2, $t3, 0x60
    ctx->pc = 0x31d318u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 96));
    // 0x31d31c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31d320: 0xac4a0370  sw          $t2, 0x370($v0)
    ctx->pc = 0x31d320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 10));
    // 0x31d324: 0xad670060  sw          $a3, 0x60($t3)
    ctx->pc = 0x31d324u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 96), GPR_U32(ctx, 7));
    // 0x31d328: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31d328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31d32c: 0x8d270370  lw          $a3, 0x370($t1)
    ctx->pc = 0x31d32cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31d330: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31d330u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31d334: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31d334u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31d338: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x31d338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x31d33c: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31d33cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31d340: 0x8d150370  lw          $s5, 0x370($t0)
    ctx->pc = 0x31d340u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31d344: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31d344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31d348: 0x7fa50160  sq          $a1, 0x160($sp)
    ctx->pc = 0x31d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 5));
    // 0x31d34c: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31d34cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31d350: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31d350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31d354: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x31d354u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x31d358: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31d358u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31d35c: 0x7fa50150  sq          $a1, 0x150($sp)
    ctx->pc = 0x31d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 5));
    // 0x31d360: 0x3c1501dc  lui         $s5, 0x1DC
    ctx->pc = 0x31d360u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)476 << 16));
    // 0x31d364: 0x8cc50370  lw          $a1, 0x370($a2)
    ctx->pc = 0x31d364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31d368: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x31d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x31d36c: 0x3c1501dc  lui         $s5, 0x1DC
    ctx->pc = 0x31d36cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)476 << 16));
    // 0x31d370: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x31d370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x31d374: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31d374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31d378: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x31d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x31d37c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31d37cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31d380: 0x3c1501dc  lui         $s5, 0x1DC
    ctx->pc = 0x31d380u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)476 << 16));
    // 0x31d384: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x31d384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31d388: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x31d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x31d38c: 0x3c1501dc  lui         $s5, 0x1DC
    ctx->pc = 0x31d38cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)476 << 16));
    // 0x31d390: 0x7fa50100  sq          $a1, 0x100($sp)
    ctx->pc = 0x31d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 5));
    // 0x31d394: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x31d394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x31d398: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31d398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31d39c: 0x24950010  addiu       $s5, $a0, 0x10
    ctx->pc = 0x31d39cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31d3a0: 0x7fa500f0  sq          $a1, 0xF0($sp)
    ctx->pc = 0x31d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 5));
    // 0x31d3a4: 0xac750370  sw          $s5, 0x370($v1)
    ctx->pc = 0x31d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 21));
    // 0x31d3a8: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31d3ac: 0xac960010  sw          $s6, 0x10($a0)
    ctx->pc = 0x31d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 22));
    // 0x31d3b0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31d3b4: 0x8c550370  lw          $s5, 0x370($v0)
    ctx->pc = 0x31d3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31d3b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3bc: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x31d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
    // 0x31d3c0: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31d3c4: 0xaeb60004  sw          $s6, 0x4($s5)
    ctx->pc = 0x31d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 22));
    // 0x31d3c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31d3cc: 0x8def0370  lw          $t7, 0x370($t7)
    ctx->pc = 0x31d3ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 880)));
    // 0x31d3d0: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x31d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
    // 0x31d3d4: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31d3d8: 0xadf60008  sw          $s6, 0x8($t7)
    ctx->pc = 0x31d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 22));
    // 0x31d3dc: 0x8dce0370  lw          $t6, 0x370($t6)
    ctx->pc = 0x31d3dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x31d3e0: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x31d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x31d3e4: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31d3e8: 0xadd6000c  sw          $s6, 0xC($t6)
    ctx->pc = 0x31d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 22));
    // 0x31d3ec: 0x8dae0370  lw          $t6, 0x370($t5)
    ctx->pc = 0x31d3ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31d3f0: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x31d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x31d3f4: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31d3f8: 0x25cd0010  addiu       $t5, $t6, 0x10
    ctx->pc = 0x31d3f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x31d3fc: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x31d3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x31d400: 0xad8d0370  sw          $t5, 0x370($t4)
    ctx->pc = 0x31d400u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 880), GPR_U32(ctx, 13));
    // 0x31d404: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31d404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31d408: 0xadd40010  sw          $s4, 0x10($t6)
    ctx->pc = 0x31d408u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 20));
    // 0x31d40c: 0x8d6b0370  lw          $t3, 0x370($t3)
    ctx->pc = 0x31d40cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31d410: 0xad790004  sw          $t9, 0x4($t3)
    ctx->pc = 0x31d410u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 25));
    // 0x31d414: 0x8d4b0370  lw          $t3, 0x370($t2)
    ctx->pc = 0x31d414u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x31d418: 0x240aa833  addiu       $t2, $zero, -0x57CD
    ctx->pc = 0x31d418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31d41c: 0xad6a0008  sw          $t2, 0x8($t3)
    ctx->pc = 0x31d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 10));
    // 0x31d420: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x31d420u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31d424: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x31d424u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x31d428: 0x8d090370  lw          $t1, 0x370($t0)
    ctx->pc = 0x31d428u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31d42c: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x31d42cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x31d430: 0xace80370  sw          $t0, 0x370($a3)
    ctx->pc = 0x31d430u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 8));
    // 0x31d434: 0xad380010  sw          $t8, 0x10($t1)
    ctx->pc = 0x31d434u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 24));
    // 0x31d438: 0x8fc80370  lw          $t0, 0x370($fp)
    ctx->pc = 0x31d438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 880)));
    // 0x31d43c: 0x7ba701a0  lq          $a3, 0x1A0($sp)
    ctx->pc = 0x31d43cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x31d440: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x31d440u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x31d444: 0x7ba70160  lq          $a3, 0x160($sp)
    ctx->pc = 0x31d444u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x31d448: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31d448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31d44c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x31d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x31d450: 0x7ba70150  lq          $a3, 0x150($sp)
    ctx->pc = 0x31d450u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x31d454: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31d454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31d458: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x31d458u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x31d45c: 0x8cc80370  lw          $t0, 0x370($a2)
    ctx->pc = 0x31d45cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31d460: 0x7ba60140  lq          $a2, 0x140($sp)
    ctx->pc = 0x31d460u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31d464: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x31d464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x31d468: 0xacc70370  sw          $a3, 0x370($a2)
    ctx->pc = 0x31d468u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 880), GPR_U32(ctx, 7));
    // 0x31d46c: 0x7ba60130  lq          $a2, 0x130($sp)
    ctx->pc = 0x31d46cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x31d470: 0xad160010  sw          $s6, 0x10($t0)
    ctx->pc = 0x31d470u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 22));
    // 0x31d474: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31d474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31d478: 0xacd60004  sw          $s6, 0x4($a2)
    ctx->pc = 0x31d478u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 22));
    // 0x31d47c: 0x7ba60120  lq          $a2, 0x120($sp)
    ctx->pc = 0x31d47cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31d480: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31d480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31d484: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x31d484u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
    // 0x31d488: 0x7ba60110  lq          $a2, 0x110($sp)
    ctx->pc = 0x31d488u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31d48c: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31d48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31d490: 0xacd6000c  sw          $s6, 0xC($a2)
    ctx->pc = 0x31d490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 22));
    // 0x31d494: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x31d494u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31d498: 0x8cc80370  lw          $t0, 0x370($a2)
    ctx->pc = 0x31d498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31d49c: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x31d49cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31d4a0: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x31d4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x31d4a4: 0xacc70370  sw          $a3, 0x370($a2)
    ctx->pc = 0x31d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 880), GPR_U32(ctx, 7));
    // 0x31d4a8: 0x7ba60190  lq          $a2, 0x190($sp)
    ctx->pc = 0x31d4a8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x31d4ac: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x31d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x31d4b0: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x31d4b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31d4b4: 0x8cc70370  lw          $a3, 0x370($a2)
    ctx->pc = 0x31d4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31d4b8: 0x7ba60180  lq          $a2, 0x180($sp)
    ctx->pc = 0x31d4b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x31d4bc: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x31d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x31d4c0: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x31d4c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31d4c4: 0x8cc70370  lw          $a3, 0x370($a2)
    ctx->pc = 0x31d4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31d4c8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x31d4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d4cc: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x31d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x31d4d0: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x31d4d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31d4d4: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31d4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31d4d8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x31d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x31d4dc: 0x7c400190  sq          $zero, 0x190($v0)
    ctx->pc = 0x31d4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 400), GPR_VEC(ctx, 0));
    // 0x31d4e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31d4e4: 0x7ca000c0  sq          $zero, 0xC0($a1)
    ctx->pc = 0x31d4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 192), GPR_VEC(ctx, 0));
    // 0x31d4e8: 0xaee20190  sw          $v0, 0x190($s7)
    ctx->pc = 0x31d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 400), GPR_U32(ctx, 2));
    // 0x31d4ec: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x31d4ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31d4f0: 0x7ba50170  lq          $a1, 0x170($sp)
    ctx->pc = 0x31d4f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x31d4f4: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x31d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 880))); // MMIO: 0x70000370
    // 0x31d4f8: 0xac6500c0  sw          $a1, 0xC0($v1)
    ctx->pc = 0x31d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 5));
    // 0x31d4fc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x31d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31d500: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x31d500u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31d504: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31D504u;
    SET_GPR_U32(ctx, 31, 0x31D50Cu);
    ctx->pc = 0x31D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D504u;
    // 0x31d508: 0xac430370  sw          $v1, 0x370($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31D504u, 0x31D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D50Cu;
label_31d50c:
    // 0x31d50c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31d510: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31d510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31d514: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31d514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31d518: 0xc040a04  jal         func_102810
    ctx->pc = 0x31D518u;
    SET_GPR_U32(ctx, 31, 0x31D520u);
    ctx->pc = 0x31D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D518u;
    // 0x31d51c: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31D518u, 0x31D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D520u;
label_31d520:
    // 0x31d520: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31d520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
    // 0x31d524: 0x0  nop
    ctx->pc = 0x31d524u;
    // NOP
label_31d528:
    // 0x31d528: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31d528u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31d52c: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31d52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31d530: 0x0  nop
    ctx->pc = 0x31d530u;
    // NOP
    // 0x31d534: 0x0  nop
    ctx->pc = 0x31d534u;
    // NOP
    // 0x31d538: 0x0  nop
    ctx->pc = 0x31d538u;
    // NOP
    // 0x31d53c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31D53Cu;
    {
        const bool branch_taken_0x31d53c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d53c) {
            ctx->pc = 0x31D528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31d528;
        }
    }
    ctx->pc = 0x31D544u;
    // 0x31d544: 0x0  nop
    ctx->pc = 0x31d544u;
    // NOP
label_31d548:
    // 0x31d548: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x31d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x31d54c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31d54cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x31d550: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x31d550u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31d554: 0x1460fee8  bnez        $v1, . + 4 + (-0x118 << 2)
    ctx->pc = 0x31D554u;
    {
        const bool branch_taken_0x31d554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D554u;
        // 0x31d558: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d554) {
            ctx->pc = 0x31D0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31d0f8;
        }
    }
    ctx->pc = 0x31D55Cu;
    // 0x31d55c: 0x0  nop
    ctx->pc = 0x31d55cu;
    // NOP
label_31d560:
    // 0x31d560: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31d560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31d564: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31d564u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d568: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31d568u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d56c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31d56cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31d570: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31d570u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d574: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31d574u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d578: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d57c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d57cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d588: 0x3e00008  jr          $ra
    ctx->pc = 0x31D588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D588u;
        // 0x31d58c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D590u;
}
