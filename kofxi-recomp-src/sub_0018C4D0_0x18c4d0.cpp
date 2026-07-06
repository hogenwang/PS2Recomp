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

// Function: sub_0018C4D0
// Address: 0x18c4d0 - 0x18c600
void sub_0018C4D0_0x18c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C4D0_0x18c4d0");
#endif

    switch (ctx->pc) {
        case 0x18c508u: goto label_18c508;
        case 0x18c520u: goto label_18c520;
        case 0x18c540u: goto label_18c540;
        default: break;
    }

    ctx->pc = 0x18c4d0u;

    // 0x18c4d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18c4d4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18c4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18c4d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18c4dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c4e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18c4e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18c4e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18c4e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c4f0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x18c4f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c4f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18c4f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c500: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x18C500u;
    SET_GPR_U32(ctx, 31, 0x18C508u);
    ctx->pc = 0x18C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C500u;
    // 0x18c504: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DED0u, 0x18C500u, 0x18C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C508u;
label_18c508:
    // 0x18c508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18c508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c50c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18c50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c510: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18c510u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18c514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c518: 0xc063018  jal         func_18C060
    ctx->pc = 0x18C518u;
    SET_GPR_U32(ctx, 31, 0x18C520u);
    ctx->pc = 0x18C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C518u;
    // 0x18c51c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C060u, 0x18C518u, 0x18C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C520u;
label_18c520:
    // 0x18c520: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x18c520u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c524: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x18c524u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x18c528: 0x5220002c  beql        $s1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x18C528u;
    {
        const bool branch_taken_0x18c528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c528) {
            ctx->pc = 0x18C52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C528u;
            // 0x18c52c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C5DCu;
            goto label_18c5dc;
        }
    }
    ctx->pc = 0x18C530u;
    // 0x18c530: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x18c530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x18c534: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18c534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c538: 0xc0637b4  jal         func_18DED0
    ctx->pc = 0x18C538u;
    SET_GPR_U32(ctx, 31, 0x18C540u);
    ctx->pc = 0x18C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C538u;
    // 0x18c53c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DED0u, 0x18C538u, 0x18C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C540u;
label_18c540:
    // 0x18c540: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18c540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c544: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x18c544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x18c548: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c548u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c54c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c54cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c550: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x18c550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18c554: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x18c554u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c558: 0x0  nop
    ctx->pc = 0x18c558u;
    // NOP
    // 0x18c55c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18c55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c560: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x18c560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x18c564: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x18c564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x18c568: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18c568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18c56c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x18c56cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18c570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c574: 0x0  nop
    ctx->pc = 0x18c574u;
    // NOP
    // 0x18c578: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x18c578u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x18c57c: 0x1010  mfhi        $v0
    ctx->pc = 0x18c57cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c580: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x18c580u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x18c584: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x18c584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x18c588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c58c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c590: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c590u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c598: 0x0  nop
    ctx->pc = 0x18c598u;
    // NOP
    // 0x18c59c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18c59cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18c5a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18c5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18c5a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c5a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c5a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18c5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18c5ac: 0x0  nop
    ctx->pc = 0x18c5acu;
    // NOP
    // 0x18c5b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c5b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c5b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c5b8: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C5B8u;
    {
        const bool branch_taken_0x18c5b8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x18c5b8) {
            ctx->pc = 0x18C5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C5B8u;
            // 0x18c5bc: 0x2143c  dsll32      $v0, $v0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C5C8u;
            goto label_18c5c8;
        }
    }
    ctx->pc = 0x18C5C0u;
    // 0x18c5c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c5c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18c5c8:
    // 0x18c5c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c5c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c5cc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x18c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x18c5d0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x18c5d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c5d4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x18c5d4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x18c5d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18c5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c5dc:
    // 0x18c5dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18c5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c5e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18c5e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c5e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c5e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c5e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c5e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c5ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x18C5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C5F4u;
        // 0x18c5f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C5FCu;
    // 0x18c5fc: 0x0  nop
    ctx->pc = 0x18c5fcu;
    // NOP
}
