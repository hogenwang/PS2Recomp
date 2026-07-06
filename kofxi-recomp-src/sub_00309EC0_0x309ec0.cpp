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

// Function: sub_00309EC0
// Address: 0x309ec0 - 0x30a190
void sub_00309EC0_0x309ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309EC0_0x309ec0");
#endif

    switch (ctx->pc) {
        case 0x309f0cu: goto label_309f0c;
        case 0x309f3cu: goto label_309f3c;
        case 0x309f50u: goto label_309f50;
        case 0x309f9cu: goto label_309f9c;
        case 0x309fa4u: goto label_309fa4;
        case 0x309ff0u: goto label_309ff0;
        case 0x30a004u: goto label_30a004;
        case 0x30a028u: goto label_30a028;
        case 0x30a04cu: goto label_30a04c;
        case 0x30a084u: goto label_30a084;
        case 0x30a0c0u: goto label_30a0c0;
        case 0x30a0fcu: goto label_30a0fc;
        case 0x30a118u: goto label_30a118;
        case 0x30a13cu: goto label_30a13c;
        case 0x30a14cu: goto label_30a14c;
        default: break;
    }

    ctx->pc = 0x309ec0u;

    // 0x309ec0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x309ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x309ec4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x309ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x309ec8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x309ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x309ecc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x309eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x309ed0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x309ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x309ed4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x309ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x309ed8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x309ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x309edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x309edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x309ee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x309ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x309ee4: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x309ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x309ee8: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x309ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x309eec: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x309EECu;
    {
        const bool branch_taken_0x309eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x309EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EECu;
        // 0x309ef0: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309eec) {
            ctx->pc = 0x30A160u;
            goto label_30a160;
        }
    }
    ctx->pc = 0x309EF4u;
    // 0x309ef4: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x309ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x309ef8: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x309ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x309efc: 0x8c4520c0  lw          $a1, 0x20C0($v0)
    ctx->pc = 0x309efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8384)));
    // 0x309f00: 0x24841f00  addiu       $a0, $a0, 0x1F00
    ctx->pc = 0x309f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    // 0x309f04: 0xc040d06  jal         func_103418
    ctx->pc = 0x309F04u;
    SET_GPR_U32(ctx, 31, 0x309F0Cu);
    ctx->pc = 0x309F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F04u;
    // 0x309f08: 0x26c60020  addiu       $a2, $s6, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x309F04u, 0x309F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F0Cu;
label_309f0c:
    // 0x309f0c: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x309f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x309f10: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x309f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x309f14: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x309f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x309f18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x309f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x309f1c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x309F1Cu;
    {
        const bool branch_taken_0x309f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f1c) {
            ctx->pc = 0x309F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309F1Cu;
            // 0x309f20: 0x8e020118  lw          $v0, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309F40u;
            goto label_309f40;
        }
    }
    ctx->pc = 0x309F24u;
    // 0x309f24: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x309f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x309f28: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x309f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x309f2c: 0x24841f00  addiu       $a0, $a0, 0x1F00
    ctx->pc = 0x309f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    // 0x309f30: 0x24c61ec0  addiu       $a2, $a2, 0x1EC0
    ctx->pc = 0x309f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7872));
    // 0x309f34: 0xc040d06  jal         func_103418
    ctx->pc = 0x309F34u;
    SET_GPR_U32(ctx, 31, 0x309F3Cu);
    ctx->pc = 0x309F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F34u;
    // 0x309f38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x309F34u, 0x309F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F3Cu;
label_309f3c:
    // 0x309f3c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x309f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_309f40:
    // 0x309f40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309F40u;
    {
        const bool branch_taken_0x309f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309f40) {
            ctx->pc = 0x309F58u;
            goto label_309f58;
        }
    }
    ctx->pc = 0x309F48u;
    // 0x309f48: 0xc0c2688  jal         func_309A20
    ctx->pc = 0x309F48u;
    SET_GPR_U32(ctx, 31, 0x309F50u);
    ctx->pc = 0x309F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F48u;
    // 0x309f4c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309A20u, 0x309F48u, 0x309F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F50u;
label_309f50:
    // 0x309f50: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x309F50u;
    {
        const bool branch_taken_0x309f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309f50) {
            ctx->pc = 0x309F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309F50u;
            // 0x309f54: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A164u;
            goto label_30a164;
        }
    }
    ctx->pc = 0x309F58u;
label_309f58:
    // 0x309f58: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x309f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x309f5c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x309f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x309f60: 0x8c441e18  lw          $a0, 0x1E18($v0)
    ctx->pc = 0x309f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7704)));
    // 0x309f64: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x309f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x309f68: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x309f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x309f6c: 0xac431e18  sw          $v1, 0x1E18($v0)
    ctx->pc = 0x309f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7704), GPR_U32(ctx, 3));
    // 0x309f70: 0x8e060118  lw          $a2, 0x118($s0)
    ctx->pc = 0x309f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x309f74: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x309F74u;
    {
        const bool branch_taken_0x309f74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x309f74) {
            ctx->pc = 0x309F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309F74u;
            // 0x309f78: 0x8e070110  lw          $a3, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309F84u;
            goto label_309f84;
        }
    }
    ctx->pc = 0x309F7Cu;
    // 0x309f7c: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x309f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x309f80: 0x8e070110  lw          $a3, 0x110($s0)
    ctx->pc = 0x309f80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_309f84:
    // 0x309f84: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x309f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x309f88: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x309f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x309f8c: 0x8e110120  lw          $s1, 0x120($s0)
    ctx->pc = 0x309f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x309f90: 0x24841e50  addiu       $a0, $a0, 0x1E50
    ctx->pc = 0x309f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7760));
    // 0x309f94: 0xc0c2728  jal         func_309CA0
    ctx->pc = 0x309F94u;
    SET_GPR_U32(ctx, 31, 0x309F9Cu);
    ctx->pc = 0x309F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F94u;
    // 0x309f98: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309CA0u, 0x309F94u, 0x309F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F9Cu;
label_309f9c:
    // 0x309f9c: 0xc0c25dc  jal         func_309770
    ctx->pc = 0x309F9Cu;
    SET_GPR_U32(ctx, 31, 0x309FA4u);
    ctx->pc = 0x309FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309F9Cu;
    // 0x309fa0: 0x8e04017c  lw          $a0, 0x17C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309770u, 0x309F9Cu, 0x309FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FA4u;
label_309fa4:
    // 0x309fa4: 0x8e150180  lw          $s5, 0x180($s0)
    ctx->pc = 0x309fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x309fa8: 0x52a00056  beql        $s5, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x309FA8u;
    {
        const bool branch_taken_0x309fa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x309fa8) {
            ctx->pc = 0x309FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309FA8u;
            // 0x309fac: 0x8e07011c  lw          $a3, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A104u;
            goto label_30a104;
        }
    }
    ctx->pc = 0x309FB0u;
    // 0x309fb0: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x309fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x309fb4: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x309fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x309fb8: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x309fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x309fbc: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x309fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x309fc0: 0x440019  multu       $v0, $a0
    ctx->pc = 0x309fc0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x309fc4: 0x1010  mfhi        $v0
    ctx->pc = 0x309fc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x309fc8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x309fc8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x309fcc: 0x29902  srl         $s3, $v0, 4
    ctx->pc = 0x309fccu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x309fd0: 0x0  nop
    ctx->pc = 0x309fd0u;
    // NOP
    // 0x309fd4: 0x1010  mfhi        $v0
    ctx->pc = 0x309fd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x309fd8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x309FD8u;
    {
        const bool branch_taken_0x309fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FD8u;
        // 0x309fdc: 0x8ed400b8  lw          $s4, 0xB8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fd8) {
            ctx->pc = 0x309FE4u;
            goto label_309fe4;
        }
    }
    ctx->pc = 0x309FE0u;
    // 0x309fe0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x309fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_309fe4:
    // 0x309fe4: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x309fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x309fe8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x309FE8u;
    {
        const bool branch_taken_0x309fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FE8u;
        // 0x309fec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fe8) {
            ctx->pc = 0x30A070u;
            goto label_30a070;
        }
    }
    ctx->pc = 0x309FF0u;
label_309ff0:
    // 0x309ff0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x309ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x309ff4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309FF4u;
    {
        const bool branch_taken_0x309ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309ff4) {
            ctx->pc = 0x30A010u;
            goto label_30a010;
        }
    }
    ctx->pc = 0x309FFCu;
    // 0x309ffc: 0xc0c2688  jal         func_309A20
    ctx->pc = 0x309FFCu;
    SET_GPR_U32(ctx, 31, 0x30A004u);
    ctx->pc = 0x30A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309FFCu;
    // 0x30a000: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309A20u, 0x309FFCu, 0x30A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A004u;
label_30a004:
    // 0x30a004: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30A004u;
    {
        const bool branch_taken_0x30a004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a004) {
            ctx->pc = 0x30A040u;
            goto label_30a040;
        }
    }
    ctx->pc = 0x30A00Cu;
    // 0x30a00c: 0x0  nop
    ctx->pc = 0x30a00cu;
    // NOP
label_30a010:
    // 0x30a010: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x30a010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x30a014: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a018: 0x24a51e50  addiu       $a1, $a1, 0x1E50
    ctx->pc = 0x30a018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7760));
    // 0x30a01c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30a01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a020: 0xc0c2770  jal         func_309DC0
    ctx->pc = 0x30A020u;
    SET_GPR_U32(ctx, 31, 0x30A028u);
    ctx->pc = 0x30A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A020u;
    // 0x30a024: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309DC0u, 0x30A020u, 0x30A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A028u;
label_30a028:
    // 0x30a028: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30a028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30a02c: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a030: 0x8c631e30  lw          $v1, 0x1E30($v1)
    ctx->pc = 0x30a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7728)));
    // 0x30a034: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x30a034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x30a038: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30A038u;
    {
        const bool branch_taken_0x30a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A038u;
        // 0x30a03c: 0xac431e30  sw          $v1, 0x1E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a038) {
            ctx->pc = 0x30A050u;
            goto label_30a050;
        }
    }
    ctx->pc = 0x30A040u;
label_30a040:
    // 0x30a040: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a044: 0xc0c27a0  jal         func_309E80
    ctx->pc = 0x30A044u;
    SET_GPR_U32(ctx, 31, 0x30A04Cu);
    ctx->pc = 0x30A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A044u;
    // 0x30a048: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309E80u, 0x30A044u, 0x30A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A04Cu;
label_30a04c:
    // 0x30a04c: 0x0  nop
    ctx->pc = 0x30a04cu;
    // NOP
label_30a050:
    // 0x30a050: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30a050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30a054: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x30a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x30a058: 0x26b50080  addiu       $s5, $s5, 0x80
    ctx->pc = 0x30a058u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x30a05c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x30a05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30a060: 0x2631012c  addiu       $s1, $s1, 0x12C
    ctx->pc = 0x30a060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x30a064: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x30A064u;
    {
        const bool branch_taken_0x30a064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A064u;
        // 0x30a068: 0x26941c20  addiu       $s4, $s4, 0x1C20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a064) {
            ctx->pc = 0x309FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_309ff0;
        }
    }
    ctx->pc = 0x30A06Cu;
    // 0x30a06c: 0x0  nop
    ctx->pc = 0x30a06cu;
    // NOP
label_30a070:
    // 0x30a070: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x30a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x30a074: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A074u;
    {
        const bool branch_taken_0x30a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a074) {
            ctx->pc = 0x30A078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A074u;
            // 0x30a078: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A090u;
            goto label_30a090;
        }
    }
    ctx->pc = 0x30A07Cu;
    // 0x30a07c: 0xc0c2688  jal         func_309A20
    ctx->pc = 0x30A07Cu;
    SET_GPR_U32(ctx, 31, 0x30A084u);
    ctx->pc = 0x30A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A07Cu;
    // 0x30a080: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309A20u, 0x30A07Cu, 0x30A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A084u;
label_30a084:
    // 0x30a084: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x30A084u;
    {
        const bool branch_taken_0x30a084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a084) {
            ctx->pc = 0x30A088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A084u;
            // 0x30a088: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A0D8u;
            goto label_30a0d8;
        }
    }
    ctx->pc = 0x30A08Cu;
    // 0x30a08c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_30a090:
    // 0x30a090: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x30a090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x30a094: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x30a094u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x30a098: 0x8010  mfhi        $s0
    ctx->pc = 0x30a098u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x30a09c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30A09Cu;
    {
        const bool branch_taken_0x30a09c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a09c) {
            ctx->pc = 0x30A0A8u;
            goto label_30a0a8;
        }
    }
    ctx->pc = 0x30A0A4u;
    // 0x30a0a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a0a8:
    // 0x30a0a8: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x30a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x30a0ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30a0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0b4: 0x24a51e50  addiu       $a1, $a1, 0x1E50
    ctx->pc = 0x30a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7760));
    // 0x30a0b8: 0xc0c2770  jal         func_309DC0
    ctx->pc = 0x30A0B8u;
    SET_GPR_U32(ctx, 31, 0x30A0C0u);
    ctx->pc = 0x30A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A0B8u;
    // 0x30a0bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309DC0u, 0x30A0B8u, 0x30A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A0C0u;
label_30a0c0:
    // 0x30a0c0: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30a0c4: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a0c8: 0x8c631e30  lw          $v1, 0x1E30($v1)
    ctx->pc = 0x30a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7728)));
    // 0x30a0cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x30a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x30a0d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30A0D0u;
    {
        const bool branch_taken_0x30a0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0D0u;
        // 0x30a0d4: 0xac431e30  sw          $v1, 0x1E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0d0) {
            ctx->pc = 0x30A130u;
            goto label_30a130;
        }
    }
    ctx->pc = 0x30A0D8u;
label_30a0d8:
    // 0x30a0d8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x30a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x30a0dc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x30a0dcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x30a0e0: 0x2810  mfhi        $a1
    ctx->pc = 0x30a0e0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x30a0e4: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A0E4u;
    {
        const bool branch_taken_0x30a0e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a0e4) {
            ctx->pc = 0x30A0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A0E4u;
            // 0x30a0e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A0F4u;
            goto label_30a0f4;
        }
    }
    ctx->pc = 0x30A0ECu;
    // 0x30a0ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a0f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a0f4:
    // 0x30a0f4: 0xc0c27a0  jal         func_309E80
    ctx->pc = 0x30A0F4u;
    SET_GPR_U32(ctx, 31, 0x30A0FCu);
    ctx->pc = 0x309E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309E80u, 0x30A0F4u, 0x30A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A0FCu;
label_30a0fc:
    // 0x30a0fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30A0FCu;
    {
        const bool branch_taken_0x30a0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0FCu;
        // 0x30a100: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0fc) {
            ctx->pc = 0x30A134u;
            goto label_30a134;
        }
    }
    ctx->pc = 0x30A104u;
label_30a104:
    // 0x30a104: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x30a104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x30a108: 0x8ec400b8  lw          $a0, 0xB8($s6)
    ctx->pc = 0x30a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 184)));
    // 0x30a10c: 0x8e060120  lw          $a2, 0x120($s0)
    ctx->pc = 0x30a10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x30a110: 0xc0c2770  jal         func_309DC0
    ctx->pc = 0x30A110u;
    SET_GPR_U32(ctx, 31, 0x30A118u);
    ctx->pc = 0x30A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A110u;
    // 0x30a114: 0x24a51e50  addiu       $a1, $a1, 0x1E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309DC0u, 0x30A110u, 0x30A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A118u;
label_30a118:
    // 0x30a118: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a11c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a120: 0x8c441e30  lw          $a0, 0x1E30($v0)
    ctx->pc = 0x30a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7728)));
    // 0x30a124: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a128: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30a12c: 0xac431e30  sw          $v1, 0x1E30($v0)
    ctx->pc = 0x30a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7728), GPR_U32(ctx, 3));
label_30a130:
    // 0x30a130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a134:
    // 0x30a134: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x30A134u;
    SET_GPR_U32(ctx, 31, 0x30A13Cu);
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x30A134u, 0x30A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A13Cu;
label_30a13c:
    // 0x30a13c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30a140: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x30a140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x30a144: 0xc040a04  jal         func_102810
    ctx->pc = 0x30A144u;
    SET_GPR_U32(ctx, 31, 0x30A14Cu);
    ctx->pc = 0x30A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A144u;
    // 0x30a148: 0x8ec500b4  lw          $a1, 0xB4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x30A144u, 0x30A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A14Cu;
label_30a14c:
    // 0x30a14c: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x30a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x30a150: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30a150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30a154: 0x8c841e10  lw          $a0, 0x1E10($a0)
    ctx->pc = 0x30a154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7696)));
    // 0x30a158: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30a15c: 0xac641e10  sw          $a0, 0x1E10($v1)
    ctx->pc = 0x30a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7696), GPR_U32(ctx, 4));
label_30a160:
    // 0x30a160: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x30a160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_30a164:
    // 0x30a164: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30a164u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30a168: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30a168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30a16c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30a16cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a170: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30a170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a17c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a180: 0x3e00008  jr          $ra
    ctx->pc = 0x30A180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A180u;
        // 0x30a184: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A188u;
    // 0x30a188: 0x0  nop
    ctx->pc = 0x30a188u;
    // NOP
    // 0x30a18c: 0x0  nop
    ctx->pc = 0x30a18cu;
    // NOP
}
