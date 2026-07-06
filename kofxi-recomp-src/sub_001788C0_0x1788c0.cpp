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

// Function: sub_001788C0
// Address: 0x1788c0 - 0x178990
void sub_001788C0_0x1788c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001788C0_0x1788c0");
#endif

    switch (ctx->pc) {
        case 0x178920u: goto label_178920;
        case 0x178954u: goto label_178954;
        default: break;
    }

    ctx->pc = 0x1788c0u;

    // 0x1788c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1788c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1788c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1788c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1788c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1788c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1788cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1788ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1788d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1788d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1788d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1788d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1788d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1788dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1788e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1788e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1788e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1788e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1788e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1788ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1788f0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1788f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788f4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1788f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1788f8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1788f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788fc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1788fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x178900: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x178900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x178904: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x178904u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x178908: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x178908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17890c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x17890cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x178910: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x178910u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x178914: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x178914u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x178918: 0xc05e19c  jal         func_178670
    ctx->pc = 0x178918u;
    SET_GPR_U32(ctx, 31, 0x178920u);
    ctx->pc = 0x17891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178918u;
    // 0x17891c: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178670u, 0x178918u, 0x178920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178920u;
label_178920:
    // 0x178920: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x178920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178924: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x178924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178928: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x178928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x17892c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17892cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178930: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x178930u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x178934: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x178934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178938: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x178938u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x17893c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17893cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178940: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x178940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178944: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x178944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x178948: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x178948u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x17894c: 0xc05e1cc  jal         func_178730
    ctx->pc = 0x17894Cu;
    SET_GPR_U32(ctx, 31, 0x178954u);
    ctx->pc = 0x178950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17894Cu;
    // 0x178950: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178730u, 0x17894Cu, 0x178954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178954u;
label_178954:
    // 0x178954: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x178954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178958: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x178958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x17895c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17895cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178960: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x178960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x178964: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x178964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178968: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x178968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17896c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17896cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178970: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x178970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178974: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x178974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178978: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x178978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17897c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17897cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178980: 0x3e00008  jr          $ra
    ctx->pc = 0x178980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178980u;
        // 0x178984: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178988u;
    // 0x178988: 0x0  nop
    ctx->pc = 0x178988u;
    // NOP
    // 0x17898c: 0x0  nop
    ctx->pc = 0x17898cu;
    // NOP
    if (ctx->pc == 0x17898cu) { ctx->pc = 0x178990u; }
}
