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

// Function: sub_002DD960
// Address: 0x2dd960 - 0x2ddb80
void sub_002DD960_0x2dd960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD960_0x2dd960");
#endif

    switch (ctx->pc) {
        case 0x2dd998u: goto label_2dd998;
        case 0x2dda88u: goto label_2dda88;
        case 0x2dda90u: goto label_2dda90;
        case 0x2ddb08u: goto label_2ddb08;
        case 0x2ddb10u: goto label_2ddb10;
        default: break;
    }

    ctx->pc = 0x2dd960u;

    // 0x2dd960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dd960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dd964: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2dd964u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd968: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2dd968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2dd96c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2dd96cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd970: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2dd970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2dd974: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2dd974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd978: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2dd978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2dd97c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2dd97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2dd980: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2dd980u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2dd984: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2dd984u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2dd988: 0x11800035  beqz        $t4, . + 4 + (0x35 << 2)
    ctx->pc = 0x2DD988u;
    {
        const bool branch_taken_0x2dd988 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD988u;
        // 0x2dd98c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd988) {
            ctx->pc = 0x2DDA60u;
            goto label_2dda60;
        }
    }
    ctx->pc = 0x2DD990u;
    // 0x2dd990: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2dd990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd994: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2dd994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2dd998:
    // 0x2dd998: 0x2d420014  sltiu       $v0, $t2, 0x14
    ctx->pc = 0x2dd998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2dd99c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DD99Cu;
    {
        const bool branch_taken_0x2dd99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD99Cu;
        // 0x2dd9a0: 0x148001b  divu        $zero, $t2, $t0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd99c) {
            ctx->pc = 0x2DD9E8u;
            goto label_2dd9e8;
        }
    }
    ctx->pc = 0x2DD9A4u;
    // 0x2dd9a4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DD9A4u;
    {
        const bool branch_taken_0x2dd9a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9a4) {
            ctx->pc = 0x2DD9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD9A4u;
            // 0x2dd9a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9ACu;
            goto label_2dd9ac;
        }
    }
    ctx->pc = 0x2DD9ACu;
label_2dd9ac:
    // 0x2dd9ac: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x2dd9acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2dd9b0: 0x1812  mflo        $v1
    ctx->pc = 0x2dd9b0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2dd9b4: 0x2010  mfhi        $a0
    ctx->pc = 0x2dd9b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2dd9b8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dd9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dd9bc: 0x1643021  addu        $a2, $t3, $a0
    ctx->pc = 0x2dd9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2dd9c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2dd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dd9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dd9c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2dd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2dd9cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2dd9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dd9d0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x2dd9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2dd9d4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2dd9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2dd9d8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2dd9d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dd9dc: 0xa22826  xor         $a1, $a1, $v0
    ctx->pc = 0x2dd9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x2dd9e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2DD9E0u;
    {
        const bool branch_taken_0x2dd9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9E0u;
        // 0x2dd9e4: 0xa1250000  sb          $a1, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9e0) {
            ctx->pc = 0x2DDA50u;
            goto label_2dda50;
        }
    }
    ctx->pc = 0x2DD9E8u;
label_2dd9e8:
    // 0x2dd9e8: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DD9E8u;
    {
        const bool branch_taken_0x2dd9e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9e8) {
            ctx->pc = 0x2DD9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD9E8u;
            // 0x2dd9ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9F0u;
            goto label_2dd9f0;
        }
    }
    ctx->pc = 0x2DD9F0u;
label_2dd9f0:
    // 0x2dd9f0: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x2dd9f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2dd9f4: 0x1812  mflo        $v1
    ctx->pc = 0x2dd9f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2dd9f8: 0x3810  mfhi        $a3
    ctx->pc = 0x2dd9f8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2dd9fc: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x2dd9fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dda00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dda00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dda04: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2dda04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2dda08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dda08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dda0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2dda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2dda10: 0x1672821  addu        $a1, $t3, $a3
    ctx->pc = 0x2dda10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2dda14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2dda14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2dda18: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2dda18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dda1c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2dda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2dda20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2dda20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2dda24: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2dda24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2dda28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2dda28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2dda2c: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x2dda2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2dda30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2dda30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dda34: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x2dda34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2dda38: 0x3a71821  addu        $v1, $sp, $a3
    ctx->pc = 0x2dda38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x2dda3c: 0xc23026  xor         $a2, $a2, $v0
    ctx->pc = 0x2dda3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x2dda40: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x2dda40u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2dda44: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2dda44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dda48: 0xc23026  xor         $a2, $a2, $v0
    ctx->pc = 0x2dda48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x2dda4c: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x2dda4cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
label_2dda50:
    // 0x2dda50: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2dda50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2dda54: 0x14c102b  sltu        $v0, $t2, $t4
    ctx->pc = 0x2dda54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2dda58: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2DDA58u;
    {
        const bool branch_taken_0x2dda58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA58u;
        // 0x2dda5c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda58) {
            ctx->pc = 0x2DD998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd998;
        }
    }
    ctx->pc = 0x2DDA60u;
label_2dda60:
    // 0x2dda60: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2dda60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2dda64: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2dda64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2dda68: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2dda68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2dda6c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2dda6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda70: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2dda70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2dda74: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2dda74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2dda78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dda78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda7c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2dda7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2dda80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dda80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dda84: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2dda84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
label_2dda88:
    // 0x2dda88: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DDA88u;
    SET_GPR_U32(ctx, 31, 0x2DDA90u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DDA88u, 0x2DDA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA90u;
label_2dda90:
    // 0x2dda90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dda90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dda94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dda94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dda98: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2dda98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2dda9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2dda9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ddaa0: 0x0  nop
    ctx->pc = 0x2ddaa0u;
    // NOP
    // 0x2ddaa4: 0x0  nop
    ctx->pc = 0x2ddaa4u;
    // NOP
    // 0x2ddaa8: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2ddaa8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x2ddaac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2ddaacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2ddab0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2ddab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddab4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ddab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ddab8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ddab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ddabc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDABCu;
    {
        const bool branch_taken_0x2ddabc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDABCu;
        // 0x2ddac0: 0x2a030014  slti        $v1, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddabc) {
            ctx->pc = 0x2DDAD4u;
            goto label_2ddad4;
        }
    }
    ctx->pc = 0x2DDAC4u;
    // 0x2ddac4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2ddac4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ddac8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ddac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ddacc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ddaccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ddad0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2ddad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_2ddad4:
    // 0x2ddad4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2DDAD4u;
    {
        const bool branch_taken_0x2ddad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAD4u;
        // 0x2ddad8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddad4) {
            ctx->pc = 0x2DDA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dda88;
        }
    }
    ctx->pc = 0x2DDADCu;
    // 0x2ddadc: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2ddadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2ddae0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2ddae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2ddae4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2ddae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2ddae8: 0x27b20014  addiu       $s2, $sp, 0x14
    ctx->pc = 0x2ddae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2ddaec: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2ddaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2ddaf0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ddaf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ddaf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ddaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddaf8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2ddaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2ddafc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ddafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ddb00: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2ddb00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x2ddb04: 0x0  nop
    ctx->pc = 0x2ddb04u;
    // NOP
label_2ddb08:
    // 0x2ddb08: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DDB08u;
    SET_GPR_U32(ctx, 31, 0x2DDB10u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DDB08u, 0x2DDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB10u;
label_2ddb10:
    // 0x2ddb10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ddb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddb14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ddb14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ddb18: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2ddb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2ddb1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ddb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ddb20: 0x0  nop
    ctx->pc = 0x2ddb20u;
    // NOP
    // 0x2ddb24: 0x0  nop
    ctx->pc = 0x2ddb24u;
    // NOP
    // 0x2ddb28: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2ddb28u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x2ddb2c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2ddb2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2ddb30: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2ddb30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddb34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ddb34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ddb38: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ddb38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ddb3c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDB3Cu;
    {
        const bool branch_taken_0x2ddb3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB3Cu;
        // 0x2ddb40: 0x2a030014  slti        $v1, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb3c) {
            ctx->pc = 0x2DDB54u;
            goto label_2ddb54;
        }
    }
    ctx->pc = 0x2DDB44u;
    // 0x2ddb44: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2ddb44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ddb48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ddb48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ddb4c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ddb4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ddb50: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2ddb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_2ddb54:
    // 0x2ddb54: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2DDB54u;
    {
        const bool branch_taken_0x2ddb54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB54u;
        // 0x2ddb58: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb54) {
            ctx->pc = 0x2DDB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ddb08;
        }
    }
    ctx->pc = 0x2DDB5Cu;
    // 0x2ddb5c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2ddb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddb60: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2ddb60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ddb64: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ddb64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ddb68: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2ddb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb6c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2ddb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ddb70: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2ddb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ddb74: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ddb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ddb78: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB78u;
        // 0x2ddb7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDB80u;
}
