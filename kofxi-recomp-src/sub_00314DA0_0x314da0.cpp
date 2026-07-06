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

// Function: sub_00314DA0
// Address: 0x314da0 - 0x31a9d0
void sub_00314DA0_0x314da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314DA0_0x314da0");
#endif

    switch (ctx->pc) {
        case 0x314de8u: goto label_314de8;
        case 0x314e00u: goto label_314e00;
        case 0x3151e0u: goto label_3151e0;
        case 0x3151e8u: goto label_3151e8;
        case 0x3151f8u: goto label_3151f8;
        case 0x315204u: goto label_315204;
        case 0x315238u: goto label_315238;
        case 0x315240u: goto label_315240;
        case 0x315250u: goto label_315250;
        case 0x31525cu: goto label_31525c;
        case 0x3152ccu: goto label_3152cc;
        case 0x3152ecu: goto label_3152ec;
        case 0x315334u: goto label_315334;
        case 0x315354u: goto label_315354;
        case 0x315690u: goto label_315690;
        case 0x3156a4u: goto label_3156a4;
        case 0x3156a8u: goto label_3156a8;
        case 0x315a2cu: goto label_315a2c;
        case 0x315a38u: goto label_315a38;
        case 0x315a68u: goto label_315a68;
        case 0x315ab4u: goto label_315ab4;
        case 0x315ac4u: goto label_315ac4;
        case 0x315accu: goto label_315acc;
        case 0x315af0u: goto label_315af0;
        case 0x315b00u: goto label_315b00;
        case 0x315b08u: goto label_315b08;
        case 0x315ba8u: goto label_315ba8;
        case 0x315bb0u: goto label_315bb0;
        case 0x315bc0u: goto label_315bc0;
        case 0x315bccu: goto label_315bcc;
        case 0x315c00u: goto label_315c00;
        case 0x315c08u: goto label_315c08;
        case 0x315c18u: goto label_315c18;
        case 0x315c24u: goto label_315c24;
        case 0x315c94u: goto label_315c94;
        case 0x315cb4u: goto label_315cb4;
        case 0x315cfcu: goto label_315cfc;
        case 0x315d1cu: goto label_315d1c;
        case 0x3162f8u: goto label_3162f8;
        case 0x31630cu: goto label_31630c;
        case 0x316310u: goto label_316310;
        case 0x3166fcu: goto label_3166fc;
        case 0x316704u: goto label_316704;
        case 0x316714u: goto label_316714;
        case 0x316720u: goto label_316720;
        case 0x316770u: goto label_316770;
        case 0x316778u: goto label_316778;
        case 0x316788u: goto label_316788;
        case 0x316794u: goto label_316794;
        case 0x3167f4u: goto label_3167f4;
        case 0x316814u: goto label_316814;
        case 0x316b4cu: goto label_316b4c;
        case 0x316b60u: goto label_316b60;
        case 0x316b64u: goto label_316b64;
        case 0x316f9cu: goto label_316f9c;
        case 0x316fd0u: goto label_316fd0;
        case 0x317074u: goto label_317074;
        case 0x31707cu: goto label_31707c;
        case 0x31708cu: goto label_31708c;
        case 0x317098u: goto label_317098;
        case 0x3170c8u: goto label_3170c8;
        case 0x3170d0u: goto label_3170d0;
        case 0x3170e0u: goto label_3170e0;
        case 0x3170ecu: goto label_3170ec;
        case 0x317714u: goto label_317714;
        case 0x317728u: goto label_317728;
        case 0x317730u: goto label_317730;
        case 0x317b74u: goto label_317b74;
        case 0x317ba8u: goto label_317ba8;
        case 0x317c64u: goto label_317c64;
        case 0x317c6cu: goto label_317c6c;
        case 0x317c7cu: goto label_317c7c;
        case 0x317c88u: goto label_317c88;
        case 0x3182a4u: goto label_3182a4;
        case 0x3182b8u: goto label_3182b8;
        case 0x3182c0u: goto label_3182c0;
        case 0x318730u: goto label_318730;
        case 0x318770u: goto label_318770;
        case 0x318854u: goto label_318854;
        case 0x31885cu: goto label_31885c;
        case 0x31886cu: goto label_31886c;
        case 0x318878u: goto label_318878;
        case 0x3188d8u: goto label_3188d8;
        case 0x3188e0u: goto label_3188e0;
        case 0x3188f0u: goto label_3188f0;
        case 0x3188fcu: goto label_3188fc;
        case 0x318f54u: goto label_318f54;
        case 0x318f68u: goto label_318f68;
        case 0x318f70u: goto label_318f70;
        case 0x3193c8u: goto label_3193c8;
        case 0x3193d8u: goto label_3193d8;
        case 0x319454u: goto label_319454;
        case 0x319490u: goto label_319490;
        case 0x31953cu: goto label_31953c;
        case 0x319544u: goto label_319544;
        case 0x319554u: goto label_319554;
        case 0x319560u: goto label_319560;
        case 0x319590u: goto label_319590;
        case 0x319598u: goto label_319598;
        case 0x3195a8u: goto label_3195a8;
        case 0x3195b4u: goto label_3195b4;
        case 0x3198a0u: goto label_3198a0;
        case 0x3198f4u: goto label_3198f4;
        case 0x319904u: goto label_319904;
        case 0x31990cu: goto label_31990c;
        case 0x319930u: goto label_319930;
        case 0x319940u: goto label_319940;
        case 0x319948u: goto label_319948;
        case 0x319fc8u: goto label_319fc8;
        case 0x319fdcu: goto label_319fdc;
        case 0x319fe0u: goto label_319fe0;
        case 0x31a2fcu: goto label_31a2fc;
        case 0x31a3b8u: goto label_31a3b8;
        case 0x31a4d8u: goto label_31a4d8;
        case 0x31a4e0u: goto label_31a4e0;
        case 0x31a4f0u: goto label_31a4f0;
        case 0x31a4fcu: goto label_31a4fc;
        case 0x31a538u: goto label_31a538;
        case 0x31a540u: goto label_31a540;
        case 0x31a550u: goto label_31a550;
        case 0x31a55cu: goto label_31a55c;
        case 0x31a5d4u: goto label_31a5d4;
        case 0x31a5f8u: goto label_31a5f8;
        case 0x31a640u: goto label_31a640;
        case 0x31a664u: goto label_31a664;
        case 0x31a904u: goto label_31a904;
        case 0x31a918u: goto label_31a918;
        case 0x31a920u: goto label_31a920;
        default: break;
    }

    ctx->pc = 0x314da0u;

    // 0x314da0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x314da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x314da4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x314da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x314da8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x314da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x314dac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x314dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x314db0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x314db0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314db4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x314db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x314db8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x314db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314dbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314dc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x314dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314dc4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x314dc4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x314dc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x314dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314dcc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x314dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x314dd0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x314dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x314dd4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x314dd4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x314dd8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x314dd8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x314ddc: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x314DDCu;
    {
        const bool branch_taken_0x314ddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x314DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DDCu;
        // 0x314de0: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ddc) {
            ctx->pc = 0x314E10u;
            goto label_314e10;
        }
    }
    ctx->pc = 0x314DE4u;
    // 0x314de4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x314de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314de8:
    // 0x314de8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314dec: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x314decu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x314df0: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x314df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x314df4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x314df4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x314df8: 0xc0c52ac  jal         func_314AB0
    ctx->pc = 0x314DF8u;
    SET_GPR_U32(ctx, 31, 0x314E00u);
    ctx->pc = 0x314DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314DF8u;
    // 0x314dfc: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x314AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314AB0u, 0x314DF8u, 0x314E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E00u;
label_314e00:
    // 0x314e00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x314e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x314e04: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x314e04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x314e08: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x314E08u;
    {
        const bool branch_taken_0x314e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314e08) {
            ctx->pc = 0x314E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314E08u;
            // 0x314e0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_314de8;
        }
    }
    ctx->pc = 0x314E10u;
label_314e10:
    // 0x314e10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x314e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314e14: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x314e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314e18: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x314e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x314e1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x314e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314e20: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x314e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x314e24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314e28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x314e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x314e2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314e30: 0x3e00008  jr          $ra
    ctx->pc = 0x314E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E30u;
        // 0x314e34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314E38u;
    // 0x314e38: 0x0  nop
    ctx->pc = 0x314e38u;
    // NOP
    // 0x314e3c: 0x0  nop
    ctx->pc = 0x314e3cu;
    // NOP
    // 0x314e40: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x314e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x314e44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x314e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x314e48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x314e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x314e4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x314e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x314e50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x314e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x314e54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x314e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x314e58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x314e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x314e5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x314e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x314e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x314e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x314e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x314e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x314e6c: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x314e6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x314e70: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x314e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314e74: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x314e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314e78: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x314e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x314e7c: 0x92a20018  lbu         $v0, 0x18($s5)
    ctx->pc = 0x314e7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x314e80: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x314e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x314e84: 0x96b2001c  lhu         $s2, 0x1C($s5)
    ctx->pc = 0x314e84u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x314e88: 0x96b1001e  lhu         $s1, 0x1E($s5)
    ctx->pc = 0x314e88u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x314e8c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x314e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x314e90: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x314e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x314e94: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x314E94u;
    {
        const bool branch_taken_0x314e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E94u;
        // 0x314e98: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e94) {
            ctx->pc = 0x314F2Cu;
            goto label_314f2c;
        }
    }
    ctx->pc = 0x314E9Cu;
    // 0x314e9c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x314e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x314ea0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x314ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314ea4: 0x0  nop
    ctx->pc = 0x314ea4u;
    // NOP
    // 0x314ea8: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x314ea8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x314eac: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x314eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x314eb0: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x314eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x314eb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314eb8: 0x0  nop
    ctx->pc = 0x314eb8u;
    // NOP
    // 0x314ebc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x314ec0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x314ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x314ec4: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x314ec4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x314ec8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314ec8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314ecc: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x314eccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x314ed0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x314ED0u;
    {
        const bool branch_taken_0x314ed0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x314ed0) {
            ctx->pc = 0x314ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314ED0u;
            // 0x314ed4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314EE4u;
            goto label_314ee4;
        }
    }
    ctx->pc = 0x314ED8u;
    // 0x314ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314edc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x314EDCu;
    {
        const bool branch_taken_0x314edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314EDCu;
        // 0x314ee0: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x314edc) {
            ctx->pc = 0x314EFCu;
            goto label_314efc;
        }
    }
    ctx->pc = 0x314EE4u;
label_314ee4:
    // 0x314ee4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x314ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x314ee8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x314ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x314eec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x314eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314ef0: 0x0  nop
    ctx->pc = 0x314ef0u;
    // NOP
    // 0x314ef4: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x314ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x314ef8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x314ef8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_314efc:
    // 0x314efc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x314efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314f00: 0x0  nop
    ctx->pc = 0x314f00u;
    // NOP
    // 0x314f04: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x314f04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x314f08: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x314f08u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x314f0c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314f0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314f10: 0x44170800  mfc1        $s7, $f1
    ctx->pc = 0x314f10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x314f14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x314f18: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x314f18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314f1c: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
    ctx->pc = 0x314F1Cu;
    {
        const bool branch_taken_0x314f1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314f1c) {
            ctx->pc = 0x314F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314F1Cu;
            // 0x314f20: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x314FBCu;
            goto label_314fbc;
        }
    }
    ctx->pc = 0x314F24u;
    // 0x314f24: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x314F24u;
    {
        const bool branch_taken_0x314f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F24u;
        // 0x314f28: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f24) {
            ctx->pc = 0x314FB8u;
            goto label_314fb8;
        }
    }
    ctx->pc = 0x314F2Cu;
label_314f2c:
    // 0x314f2c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x314f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x314f30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x314f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314f34: 0x0  nop
    ctx->pc = 0x314f34u;
    // NOP
    // 0x314f38: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x314f38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x314f3c: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x314f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x314f40: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x314f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x314f44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314f48: 0x0  nop
    ctx->pc = 0x314f48u;
    // NOP
    // 0x314f4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x314f50: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x314f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x314f54: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x314f54u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x314f58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314f58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314f5c: 0x44170800  mfc1        $s7, $f1
    ctx->pc = 0x314f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x314f60: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x314F60u;
    {
        const bool branch_taken_0x314f60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x314f60) {
            ctx->pc = 0x314F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314F60u;
            // 0x314f64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314F74u;
            goto label_314f74;
        }
    }
    ctx->pc = 0x314F68u;
    // 0x314f68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314f6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x314F6Cu;
    {
        const bool branch_taken_0x314f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F6Cu;
        // 0x314f70: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f6c) {
            ctx->pc = 0x314F8Cu;
            goto label_314f8c;
        }
    }
    ctx->pc = 0x314F74u;
label_314f74:
    // 0x314f74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x314f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x314f78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x314f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x314f7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x314f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314f80: 0x0  nop
    ctx->pc = 0x314f80u;
    // NOP
    // 0x314f84: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x314f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x314f88: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x314f88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_314f8c:
    // 0x314f8c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x314f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314f90: 0x0  nop
    ctx->pc = 0x314f90u;
    // NOP
    // 0x314f94: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x314f94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x314f98: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x314f98u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x314f9c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314f9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314fa0: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x314fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x314fa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x314fa8: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x314fa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314fac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x314FACu;
    {
        const bool branch_taken_0x314fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314fac) {
            ctx->pc = 0x314FB8u;
            goto label_314fb8;
        }
    }
    ctx->pc = 0x314FB4u;
    // 0x314fb4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x314fb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_314fb8:
    // 0x314fb8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x314fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_314fbc:
    // 0x314fbc: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x314FBCu;
    {
        const bool branch_taken_0x314fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314fbc) {
            ctx->pc = 0x314FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314FBCu;
            // 0x314fc0: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315054u;
            goto label_315054;
        }
    }
    ctx->pc = 0x314FC4u;
    // 0x314fc4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x314fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x314fc8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x314fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314fcc: 0x0  nop
    ctx->pc = 0x314fccu;
    // NOP
    // 0x314fd0: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x314fd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x314fd4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x314fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x314fd8: 0xc4830038  lwc1        $f3, 0x38($a0)
    ctx->pc = 0x314fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x314fdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314fe0: 0x0  nop
    ctx->pc = 0x314fe0u;
    // NOP
    // 0x314fe4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x314fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x314fe8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x314fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x314fec: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x314fecu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x314ff0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314ff4: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x314ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x314ff8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x314FF8u;
    {
        const bool branch_taken_0x314ff8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x314ff8) {
            ctx->pc = 0x314FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314FF8u;
            // 0x314ffc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31500Cu;
            goto label_31500c;
        }
    }
    ctx->pc = 0x315000u;
    // 0x315000: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315004: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x315004u;
    {
        const bool branch_taken_0x315004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315004u;
        // 0x315008: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315004) {
            ctx->pc = 0x315024u;
            goto label_315024;
        }
    }
    ctx->pc = 0x31500Cu;
label_31500c:
    // 0x31500c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x315010: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x315010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x315014: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x315014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315018: 0x0  nop
    ctx->pc = 0x315018u;
    // NOP
    // 0x31501c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x31501cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x315020: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x315020u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_315024:
    // 0x315024: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x315024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315028: 0x0  nop
    ctx->pc = 0x315028u;
    // NOP
    // 0x31502c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x31502cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x315030: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x315030u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x315034: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315034u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x315038: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x315038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x31503c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31503cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315040: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x315040u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x315044: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
    ctx->pc = 0x315044u;
    {
        const bool branch_taken_0x315044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315044) {
            ctx->pc = 0x315048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315044u;
            // 0x315048: 0x8c8a0024  lw          $t2, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3150E0u;
            goto label_3150e0;
        }
    }
    ctx->pc = 0x31504Cu;
    // 0x31504c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x31504Cu;
    {
        const bool branch_taken_0x31504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31504Cu;
        // 0x315050: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31504c) {
            ctx->pc = 0x3150DCu;
            goto label_3150dc;
        }
    }
    ctx->pc = 0x315054u;
label_315054:
    // 0x315054: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x315054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315058: 0x0  nop
    ctx->pc = 0x315058u;
    // NOP
    // 0x31505c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x31505cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x315060: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x315060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x315064: 0xc4830038  lwc1        $f3, 0x38($a0)
    ctx->pc = 0x315064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x315068: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x315068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31506c: 0x0  nop
    ctx->pc = 0x31506cu;
    // NOP
    // 0x315070: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x315070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x315074: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x315074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x315078: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x315078u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x31507c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31507cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x315080: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x315080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x315084: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x315084u;
    {
        const bool branch_taken_0x315084 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x315084) {
            ctx->pc = 0x315088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315084u;
            // 0x315088: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315098u;
            goto label_315098;
        }
    }
    ctx->pc = 0x31508Cu;
    // 0x31508c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31508cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x315090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x315090u;
    {
        const bool branch_taken_0x315090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315090u;
        // 0x315094: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315090) {
            ctx->pc = 0x3150B0u;
            goto label_3150b0;
        }
    }
    ctx->pc = 0x315098u;
label_315098:
    // 0x315098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x315098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31509c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3150a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3150a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3150a4: 0x0  nop
    ctx->pc = 0x3150a4u;
    // NOP
    // 0x3150a8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3150a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3150ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3150acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3150b0:
    // 0x3150b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3150b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3150b4: 0x0  nop
    ctx->pc = 0x3150b4u;
    // NOP
    // 0x3150b8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3150b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x3150bc: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x3150bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3150c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3150c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3150c4: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x3150c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x3150c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3150c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3150cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3150ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3150d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3150D0u;
    {
        const bool branch_taken_0x3150d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3150d0) {
            ctx->pc = 0x3150DCu;
            goto label_3150dc;
        }
    }
    ctx->pc = 0x3150D8u;
    // 0x3150d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3150d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3150dc:
    // 0x3150dc: 0x8c8a0024  lw          $t2, 0x24($a0)
    ctx->pc = 0x3150dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3150e0:
    // 0x3150e0: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x3150e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x3150e4: 0x8c880028  lw          $t0, 0x28($a0)
    ctx->pc = 0x3150e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3150e8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3150e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x3150ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3150ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3150f0: 0x1464821  addu        $t1, $t2, $a2
    ctx->pc = 0x3150f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3150f4: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x3150f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x3150f8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3150f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3150fc: 0x7fa600d0  sq          $a2, 0xD0($sp)
    ctx->pc = 0x3150fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 6));
    // 0x315100: 0x93100  sll         $a2, $t1, 4
    ctx->pc = 0x315100u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x315104: 0x7fa600c0  sq          $a2, 0xC0($sp)
    ctx->pc = 0x315104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 6));
    // 0x315108: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x315108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x31510c: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x31510cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x315110: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x315110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x315114: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x315114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x315118: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x315118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x31511c: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x31511cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x315120: 0x673024  and         $a2, $v1, $a3
    ctx->pc = 0x315120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x315124: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x315124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x315128: 0x63e02  srl         $a3, $a2, 24
    ctx->pc = 0x315128u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x31512c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x31512cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x315130: 0x43403  sra         $a2, $a0, 16
    ctx->pc = 0x315130u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
    // 0x315134: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x315134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x315138: 0x48043  sra         $s0, $a0, 1
    ctx->pc = 0x315138u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 1));
    // 0x31513c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x31513cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x315140: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x315140u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x315144: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x315144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x315148: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x315148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x31514c: 0x43203  sra         $a2, $a0, 8
    ctx->pc = 0x31514cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x315150: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x315150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x315154: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x315154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x315158: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x315158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31515c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x31515cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x315160: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x315160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x315164: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x315164u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x315168: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x315168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x31516c: 0x51a3c  dsll32      $v1, $a1, 8
    ctx->pc = 0x31516cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 8));
    // 0x315170: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x315170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x315174: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x315174u;
    {
        const bool branch_taken_0x315174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x315178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315174u;
        // 0x315178: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315174) {
            ctx->pc = 0x315190u;
            goto label_315190;
        }
    }
    ctx->pc = 0x31517Cu;
    // 0x31517c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x31517cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x315180: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x315180u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315184: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x315184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x315188: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x315188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31518c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31518cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_315190:
    // 0x315190: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x315190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x315194: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x315194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x315198: 0x8c424790  lw          $v0, 0x4790($v0)
    ctx->pc = 0x315198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x31519c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x31519Cu;
    {
        const bool branch_taken_0x31519c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31519c) {
            ctx->pc = 0x315268u;
            goto label_315268;
        }
    }
    ctx->pc = 0x3151A4u;
    // 0x3151a4: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3151a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3151a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3151a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3151ac: 0x50470017  beql        $v0, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x3151ACu;
    {
        const bool branch_taken_0x3151ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x3151ac) {
            ctx->pc = 0x3151B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3151ACu;
            // 0x3151b0: 0x12543c  dsll32      $t2, $s2, 16 (Delay Slot)
            SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31520Cu;
            goto label_31520c;
        }
    }
    ctx->pc = 0x3151B4u;
    // 0x3151b4: 0x12543c  dsll32      $t2, $s2, 16
    ctx->pc = 0x3151b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3151b8: 0x115c3c  dsll32      $t3, $s1, 16
    ctx->pc = 0x3151b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3151bc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3151bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3151c0: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x3151c0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x3151c4: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x3151c4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x3151c8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x3151c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x3151cc: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x3151ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x3151d0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3151d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3151d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3151d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3151d8: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3151D8u;
    SET_GPR_U32(ctx, 31, 0x3151E0u);
    ctx->pc = 0x3151DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151D8u;
    // 0x3151dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x3151D8u, 0x3151E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3151E0u;
label_3151e0:
    // 0x3151e0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3151E0u;
    SET_GPR_U32(ctx, 31, 0x3151E8u);
    ctx->pc = 0x3151E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151E0u;
    // 0x3151e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3151E0u, 0x3151E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3151E8u;
label_3151e8:
    // 0x3151e8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3151e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3151ec: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x3151ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x3151f0: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3151F0u;
    SET_GPR_U32(ctx, 31, 0x3151F8u);
    ctx->pc = 0x3151F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151F0u;
    // 0x3151f4: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3151F0u, 0x3151F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3151F8u;
label_3151f8:
    // 0x3151f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3151f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3151fc: 0xc040454  jal         func_101150
    ctx->pc = 0x3151FCu;
    SET_GPR_U32(ctx, 31, 0x315204u);
    ctx->pc = 0x315200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151FCu;
    // 0x315200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3151FCu, 0x315204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315204u;
label_315204:
    // 0x315204: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x315204u;
    {
        const bool branch_taken_0x315204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315204u;
        // 0x315208: 0x26a30020  addiu       $v1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315204) {
            ctx->pc = 0x315260u;
            goto label_315260;
        }
    }
    ctx->pc = 0x31520Cu;
label_31520c:
    // 0x31520c: 0x115c3c  dsll32      $t3, $s1, 16
    ctx->pc = 0x31520cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) << (32 + 16));
    // 0x315210: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x315210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x315214: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x315214u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x315218: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x315218u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x31521c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x315220: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x315220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x315224: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x315224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x315228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31522c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31522cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315230: 0xc040532  jal         func_1014C8
    ctx->pc = 0x315230u;
    SET_GPR_U32(ctx, 31, 0x315238u);
    ctx->pc = 0x315234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315230u;
    // 0x315234: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x315230u, 0x315238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315238u;
label_315238:
    // 0x315238: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x315238u;
    SET_GPR_U32(ctx, 31, 0x315240u);
    ctx->pc = 0x31523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315238u;
    // 0x31523c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x315238u, 0x315240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315240u;
label_315240:
    // 0x315240: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x315240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x315244: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x315244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x315248: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x315248u;
    SET_GPR_U32(ctx, 31, 0x315250u);
    ctx->pc = 0x31524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315248u;
    // 0x31524c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x315248u, 0x315250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315250u;
label_315250:
    // 0x315250: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x315250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315254: 0xc040454  jal         func_101150
    ctx->pc = 0x315254u;
    SET_GPR_U32(ctx, 31, 0x31525Cu);
    ctx->pc = 0x315258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315254u;
    // 0x315258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x315254u, 0x31525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31525Cu;
label_31525c:
    // 0x31525c: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x31525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_315260:
    // 0x315260: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x315260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x315264: 0xac434790  sw          $v1, 0x4790($v0)
    ctx->pc = 0x315264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 3));
label_315268:
    // 0x315268: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x315268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31526c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315270: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x315270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x315274: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x315274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x315278: 0xac450370  sw          $a1, 0x370($v0)
    ctx->pc = 0x315278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 5));
    // 0x31527c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31527cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x315280: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x315280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315284: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x315284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315288: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x315288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31528c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x31528cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x315290: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x315290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x315294: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x315294u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x315298: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x315298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31529c: 0xfca00010  sd          $zero, 0x10($a1)
    ctx->pc = 0x31529cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 0));
    // 0x3152a0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3152a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3152a4: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x3152a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x3152a8: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x3152a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3152ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3152acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3152b0: 0x24750020  addiu       $s5, $v1, 0x20
    ctx->pc = 0x3152b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3152b4: 0xac550370  sw          $s5, 0x370($v0)
    ctx->pc = 0x3152b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 21));
    // 0x3152b8: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3152b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3152bc: 0x5044001b  beql        $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3152BCu;
    {
        const bool branch_taken_0x3152bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3152bc) {
            ctx->pc = 0x3152C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3152BCu;
            // 0x3152c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31532Cu;
            goto label_31532c;
        }
    }
    ctx->pc = 0x3152C4u;
    // 0x3152c4: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x3152C4u;
    SET_GPR_U32(ctx, 31, 0x3152CCu);
    ctx->pc = 0x3152C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3152C4u;
    // 0x3152c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x3152C4u, 0x3152CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152CCu;
label_3152cc:
    // 0x3152cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3152ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3152d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3152d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3152d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3152d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3152d8: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x3152d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x3152dc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x3152dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x3152e0: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x3152e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x3152e4: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x3152E4u;
    SET_GPR_U32(ctx, 31, 0x3152ECu);
    ctx->pc = 0x3152E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3152E4u;
    // 0x3152e8: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x3152E4u, 0x3152ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152ECu;
label_3152ec:
    // 0x3152ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3152ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3152f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3152f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3152f4: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x3152f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
    // 0x3152f8: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x3152f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x3152fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3152fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x315300: 0x218fc  dsll32      $v1, $v0, 3
    ctx->pc = 0x315300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 3));
    // 0x315304: 0x2242825  or          $a1, $s1, $a0
    ctx->pc = 0x315304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x315308: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x315308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31530c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31530cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315310: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x315310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x315314: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x315314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x315318: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31531c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31531cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x315320: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x315320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x315324: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x315324u;
    {
        const bool branch_taken_0x315324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315324u;
        // 0x315328: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315324) {
            ctx->pc = 0x315390u;
            goto label_315390;
        }
    }
    ctx->pc = 0x31532Cu;
label_31532c:
    // 0x31532c: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31532Cu;
    SET_GPR_U32(ctx, 31, 0x315334u);
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x31532Cu, 0x315334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315334u;
label_315334:
    // 0x315334: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31533c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31533cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x315340: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x315340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x315344: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x315344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x315348: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x315348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x31534c: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31534Cu;
    SET_GPR_U32(ctx, 31, 0x315354u);
    ctx->pc = 0x315350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31534Cu;
    // 0x315350: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x31534Cu, 0x315354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315354u;
label_315354:
    // 0x315354: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x315354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315358: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x315358u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31535c: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x31535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
    // 0x315360: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x315360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x315364: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x315364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x315368: 0x218fc  dsll32      $v1, $v0, 3
    ctx->pc = 0x315368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 3));
    // 0x31536c: 0x2242825  or          $a1, $s1, $a0
    ctx->pc = 0x31536cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x315370: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x315370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315374: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x315374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315378: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x315378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x31537c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x31537cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x315380: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315384: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x315384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x315388: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x315388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31538c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x31538cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_315390:
    // 0x315390: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315394: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x315394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x315398: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x315398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31539c: 0x246d6c00  addiu       $t5, $v1, 0x6C00
    ctx->pc = 0x31539cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x3153a0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3153a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3153a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3153a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3153a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3153a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3153ac: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x3153acu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x3153b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3153b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3153b4: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x3153b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x3153b8: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x3153b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x3153bc: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x3153bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x3153c0: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x3153c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x3153c4: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x3153c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x3153c8: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x3153c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x3153cc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3153ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3153d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3153d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3153d4: 0xfcc50020  sd          $a1, 0x20($a2)
    ctx->pc = 0x3153d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 5));
    // 0x3153d8: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x3153d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3153dc: 0xfcc40028  sd          $a0, 0x28($a2)
    ctx->pc = 0x3153dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 4));
    // 0x3153e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3153e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3153e4: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x3153e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x3153e8: 0xfcc20030  sd          $v0, 0x30($a2)
    ctx->pc = 0x3153e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 2));
    // 0x3153ec: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3153ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3153f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3153f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3153f4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x3153f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x3153f8: 0x34423513  ori         $v0, $v0, 0x3513
    ctx->pc = 0x3153f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x3153fc: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3153fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x315400: 0xfcc20038  sd          $v0, 0x38($a2)
    ctx->pc = 0x315400u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 2));
    // 0x315404: 0x8c650370  lw          $a1, 0x370($v1)
    ctx->pc = 0x315404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x315408: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31540c: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31540cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x315410: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x315410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x315414: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x315414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x315418: 0xac440370  sw          $a0, 0x370($v0)
    ctx->pc = 0x315418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 4));
    // 0x31541c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x31541cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x315420: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x315420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x315424: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x315424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x315428: 0x8c6e0370  lw          $t6, 0x370($v1)
    ctx->pc = 0x315428u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31542c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31542cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x315430: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x315430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x315434: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x315434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x315438: 0xadc20004  sw          $v0, 0x4($t6)
    ctx->pc = 0x315438u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 2));
    // 0x31543c: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x31543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x315440: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x315440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x315444: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x315444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x315448: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x315448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31544c: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x31544cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x315450: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x315450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315454: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x315454u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x315458: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x315458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31545c: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x31545cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x315460: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x315460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x315464: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x315464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x315468: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x315468u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x31546c: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31546cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x315470: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x315470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x315474: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x315474u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x315478: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x315478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31547c: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x31547cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x315480: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x315480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x315484: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x315484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x315488: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x315488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x31548c: 0xacad0010  sw          $t5, 0x10($a1)
    ctx->pc = 0x31548cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 13));
    // 0x315490: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x315490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x315494: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x315494u;
    {
        const bool branch_taken_0x315494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315494) {
            ctx->pc = 0x315498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315494u;
            // 0x315498: 0x141100  sll         $v0, $s4, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3154ECu;
            goto label_3154ec;
        }
    }
    ctx->pc = 0x31549Cu;
    // 0x31549c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x31549cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x3154a0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x3154a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x3154a4: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x3154a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x3154a8: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x3154a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x3154ac: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3154acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3154b0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3154b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3154b4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3154b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3154b8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3154b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3154bc: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x3154bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3154c0: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x3154c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3154c4: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x3154c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3154c8: 0x0  nop
    ctx->pc = 0x3154c8u;
    // NOP
    // 0x3154cc: 0x1810  mfhi        $v1
    ctx->pc = 0x3154ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3154d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3154d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3154d4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3154d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3154d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3154d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3154dc: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x3154dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x3154e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3154e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3154e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3154E4u;
    {
        const bool branch_taken_0x3154e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3154E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154E4u;
        // 0x3154e8: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3154e4) {
            ctx->pc = 0x3154F0u;
            goto label_3154f0;
        }
    }
    ctx->pc = 0x3154ECu;
label_3154ec:
    // 0x3154ec: 0x24467100  addiu       $a2, $v0, 0x7100
    ctx->pc = 0x3154ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_3154f0:
    // 0x3154f0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3154f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3154f4: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x3154f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x3154f8: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x3154f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3154fc: 0x246f6c00  addiu       $t7, $v1, 0x6C00
    ctx->pc = 0x3154fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x315500: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x315500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x315504: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x315504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x315508: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x315508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31550c: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x31550cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x315510: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x315510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x315514: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x315514u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x315518: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x315518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31551c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31551cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315520: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x315520u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x315524: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x315524u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x315528: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x315528u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31552c: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31552cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x315530: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x315530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x315534: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x315534u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x315538: 0x8c710370  lw          $s1, 0x370($v1)
    ctx->pc = 0x315538u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31553c: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31553cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x315540: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x315540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x315544: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x315544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x315548: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x315548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31554c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x31554cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x315550: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x315550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x315554: 0x8dd10370  lw          $s1, 0x370($t6)
    ctx->pc = 0x315554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x315558: 0x262e0010  addiu       $t6, $s1, 0x10
    ctx->pc = 0x315558u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x31555c: 0xac4e0370  sw          $t6, 0x370($v0)
    ctx->pc = 0x31555cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 14));
    // 0x315560: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x315560u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x315564: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x315564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x315568: 0x8dad0370  lw          $t5, 0x370($t5)
    ctx->pc = 0x315568u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31556c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x31556cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x315570: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x315570u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x315574: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x315574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x315578: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x315578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x31557c: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x31557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x315580: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x315580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x315584: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x315584u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x315588: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x315588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x31558c: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x31558cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x315590: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x315590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x315594: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x315594u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x315598: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x315598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31559c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x31559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3155a0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3155a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x3155a4: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x3155a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x3155a8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3155a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3155ac: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x3155acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x3155b0: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x3155b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x3155b4: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x3155b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x3155b8: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x3155b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x3155bc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x3155bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3155c0: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x3155c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x3155c4: 0xacaf0010  sw          $t7, 0x10($a1)
    ctx->pc = 0x3155c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 15));
    // 0x3155c8: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x3155c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x3155cc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3155CCu;
    {
        const bool branch_taken_0x3155cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3155cc) {
            ctx->pc = 0x3155D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3155CCu;
            // 0x3155d0: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31561Cu;
            goto label_31561c;
        }
    }
    ctx->pc = 0x3155D4u;
    // 0x3155d4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x3155d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3155d8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x3155d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x3155dc: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x3155dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x3155e0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3155e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3155e4: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x3155e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3155e8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3155e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3155ec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3155ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3155f0: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x3155f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3155f4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3155f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3155f8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3155f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3155fc: 0x0  nop
    ctx->pc = 0x3155fcu;
    // NOP
    // 0x315600: 0x1010  mfhi        $v0
    ctx->pc = 0x315600u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x315604: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x315604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x315608: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x315608u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x31560c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315610: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x315610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x315614: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x315614u;
    {
        const bool branch_taken_0x315614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315614u;
        // 0x315618: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315614) {
            ctx->pc = 0x315620u;
            goto label_315620;
        }
    }
    ctx->pc = 0x31561Cu;
label_31561c:
    // 0x31561c: 0x24447100  addiu       $a0, $v0, 0x7100
    ctx->pc = 0x31561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_315620:
    // 0x315620: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315624: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x315624u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x315628: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x315628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31562c: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31562cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x315630: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x315630u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x315634: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x315634u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x315638: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x315638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31563c: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31563cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x315640: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x315640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x315644: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315648: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x315648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31564c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31564cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x315650: 0x346b000c  ori         $t3, $v1, 0xC
    ctx->pc = 0x315650u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x315654: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x315654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x315658: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x315658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31565c: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x31565cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x315660: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x315660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x315664: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x315664u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x315668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x315668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31566c: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x31566cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x315670: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x315670u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x315674: 0xac4a0190  sw          $t2, 0x190($v0)
    ctx->pc = 0x315674u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 10)); // MMIO: 0x70000190
    // 0x315678: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x315678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31567c: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x31567cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x315680: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x315680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x315684: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x315684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x315688: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x315688u;
    SET_GPR_U32(ctx, 31, 0x315690u);
    ctx->pc = 0x31568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315688u;
    // 0x31568c: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x315688u, 0x315690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315690u;
label_315690:
    // 0x315690: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x315690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x315694: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x315694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x315698: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x315698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31569c: 0xc040a04  jal         func_102810
    ctx->pc = 0x31569Cu;
    SET_GPR_U32(ctx, 31, 0x3156A4u);
    ctx->pc = 0x3156A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31569Cu;
    // 0x3156a0: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31569Cu, 0x3156A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156A4u;
label_3156a4:
    // 0x3156a4: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x3156a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_3156a8:
    // 0x3156a8: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x3156a8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x3156ac: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x3156acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x3156b0: 0x0  nop
    ctx->pc = 0x3156b0u;
    // NOP
    // 0x3156b4: 0x0  nop
    ctx->pc = 0x3156b4u;
    // NOP
    // 0x3156b8: 0x0  nop
    ctx->pc = 0x3156b8u;
    // NOP
    // 0x3156bc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3156BCu;
    {
        const bool branch_taken_0x3156bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3156bc) {
            ctx->pc = 0x3156A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3156a8;
        }
    }
    ctx->pc = 0x3156C4u;
    // 0x3156c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3156c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3156c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3156c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3156cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3156ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3156d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3156d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3156d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3156d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3156d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3156d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3156dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3156dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3156e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3156e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3156e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3156e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3156e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3156e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3156ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3156ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3156F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156ECu;
        // 0x3156f0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3156ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3156F4u;
    // 0x3156f4: 0x0  nop
    ctx->pc = 0x3156f4u;
    // NOP
    // 0x3156f8: 0x0  nop
    ctx->pc = 0x3156f8u;
    // NOP
    // 0x3156fc: 0x0  nop
    ctx->pc = 0x3156fcu;
    // NOP
    // 0x315700: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x315700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x315704: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x315704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x315708: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x315708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x31570c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x31570cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x315710: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x315710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x315714: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x315714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x315718: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x315718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31571c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31571cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x315720: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x315720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x315724: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x315724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x315728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31572c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315730: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x315730u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x315734: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x315734u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x315738: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x315738u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31573c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31573cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x315740: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x315740u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x315744: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x315744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315748: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x315748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31574c: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x31574cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x315750: 0x46800de0  cvt.s.w     $f23, $f1
    ctx->pc = 0x315750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x315754: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x315754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x315758: 0x965e001c  lhu         $fp, 0x1C($s2)
    ctx->pc = 0x315758u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x31575c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x31575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x315760: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x315760u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x315764: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x315764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x315768: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x315768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x31576c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x31576Cu;
    {
        const bool branch_taken_0x31576c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31576Cu;
        // 0x315770: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31576c) {
            ctx->pc = 0x315804u;
            goto label_315804;
        }
    }
    ctx->pc = 0x315774u;
    // 0x315774: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x315774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x315778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31577c: 0x0  nop
    ctx->pc = 0x31577cu;
    // NOP
    // 0x315780: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x315780u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[23]));
    // 0x315784: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x315784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x315788: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x315788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31578c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31578cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315790: 0x0  nop
    ctx->pc = 0x315790u;
    // NOP
    // 0x315794: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315798: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x315798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31579c: 0x4602001d  msub.s      $f0, $f0, $f2
    ctx->pc = 0x31579cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x3157a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3157a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3157a4: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x3157a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x3157a8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3157A8u;
    {
        const bool branch_taken_0x3157a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3157a8) {
            ctx->pc = 0x3157ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3157A8u;
            // 0x3157ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3157BCu;
            goto label_3157bc;
        }
    }
    ctx->pc = 0x3157B0u;
    // 0x3157b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3157b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3157b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3157B4u;
    {
        const bool branch_taken_0x3157b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3157B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157B4u;
        // 0x3157b8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157b4) {
            ctx->pc = 0x3157D4u;
            goto label_3157d4;
        }
    }
    ctx->pc = 0x3157BCu;
label_3157bc:
    // 0x3157bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3157bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3157c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3157c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3157c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3157c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3157c8: 0x0  nop
    ctx->pc = 0x3157c8u;
    // NOP
    // 0x3157cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3157ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3157d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3157d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3157d4:
    // 0x3157d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3157d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3157d8: 0x0  nop
    ctx->pc = 0x3157d8u;
    // NOP
    // 0x3157dc: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x3157dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[23]));
    // 0x3157e0: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x3157e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3157e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3157e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3157e8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3157e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x3157ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3157ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3157f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3157f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3157f4: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x3157F4u;
    {
        const bool branch_taken_0x3157f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3157f4) {
            ctx->pc = 0x3157F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3157F4u;
            // 0x3157f8: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x315848u;
            goto label_315848;
        }
    }
    ctx->pc = 0x3157FCu;
    // 0x3157fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3157FCu;
    {
        const bool branch_taken_0x3157fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157FCu;
        // 0x315800: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157fc) {
            ctx->pc = 0x315844u;
            goto label_315844;
        }
    }
    ctx->pc = 0x315804u;
label_315804:
    // 0x315804: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x315804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x315808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31580c: 0x0  nop
    ctx->pc = 0x31580cu;
    // NOP
    // 0x315810: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x315810u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[23]));
    // 0x315814: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x315814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315818: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x315818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31581c: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x31581cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x315820: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x315824: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x315824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x315828: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31582c: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x31582cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x315830: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315834: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x315834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x315838: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x315838u;
    {
        const bool branch_taken_0x315838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315838) {
            ctx->pc = 0x315844u;
            goto label_315844;
        }
    }
    ctx->pc = 0x315840u;
    // 0x315840: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x315840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_315844:
    // 0x315844: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x315844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_315848:
    // 0x315848: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x315848u;
    {
        const bool branch_taken_0x315848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315848) {
            ctx->pc = 0x31584Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315848u;
            // 0x31584c: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3158E0u;
            goto label_3158e0;
        }
    }
    ctx->pc = 0x315850u;
    // 0x315850: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x315850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x315854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x315854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315858: 0x0  nop
    ctx->pc = 0x315858u;
    // NOP
    // 0x31585c: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x31585cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[22]));
    // 0x315860: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x315860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x315864: 0xc6620038  lwc1        $f2, 0x38($s3)
    ctx->pc = 0x315864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x315868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31586c: 0x0  nop
    ctx->pc = 0x31586cu;
    // NOP
    // 0x315870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315874: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x315874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x315878: 0x4602001d  msub.s      $f0, $f0, $f2
    ctx->pc = 0x315878u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x31587c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31587cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x315880: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x315880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x315884: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x315884u;
    {
        const bool branch_taken_0x315884 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x315884) {
            ctx->pc = 0x315888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315884u;
            // 0x315888: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315898u;
            goto label_315898;
        }
    }
    ctx->pc = 0x31588Cu;
    // 0x31588c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31588cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315890: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x315890u;
    {
        const bool branch_taken_0x315890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315890u;
        // 0x315894: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x315890) {
            ctx->pc = 0x3158B0u;
            goto label_3158b0;
        }
    }
    ctx->pc = 0x315898u;
label_315898:
    // 0x315898: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x315898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31589c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31589cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3158a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3158a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3158a4: 0x0  nop
    ctx->pc = 0x3158a4u;
    // NOP
    // 0x3158a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3158a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3158ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3158acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3158b0:
    // 0x3158b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3158b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3158b4: 0x0  nop
    ctx->pc = 0x3158b4u;
    // NOP
    // 0x3158b8: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3158b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[22]));
    // 0x3158bc: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x3158bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3158c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3158c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3158c4: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x3158c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x3158c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3158c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3158cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3158ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3158d0: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
    ctx->pc = 0x3158D0u;
    {
        const bool branch_taken_0x3158d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3158d0) {
            ctx->pc = 0x3158D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3158D0u;
            // 0x3158d4: 0x8e680024  lw          $t0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31596Cu;
            goto label_31596c;
        }
    }
    ctx->pc = 0x3158D8u;
    // 0x3158d8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3158D8u;
    {
        const bool branch_taken_0x3158d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3158DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158D8u;
        // 0x3158dc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158d8) {
            ctx->pc = 0x315968u;
            goto label_315968;
        }
    }
    ctx->pc = 0x3158E0u;
label_3158e0:
    // 0x3158e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3158e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3158e4: 0x0  nop
    ctx->pc = 0x3158e4u;
    // NOP
    // 0x3158e8: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3158e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[22]));
    // 0x3158ec: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x3158ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x3158f0: 0xc6620038  lwc1        $f2, 0x38($s3)
    ctx->pc = 0x3158f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3158f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3158f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3158f8: 0x0  nop
    ctx->pc = 0x3158f8u;
    // NOP
    // 0x3158fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3158fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315900: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x315900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x315904: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x315904u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x315908: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31590c: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x31590cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x315910: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x315910u;
    {
        const bool branch_taken_0x315910 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x315910) {
            ctx->pc = 0x315914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315910u;
            // 0x315914: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315924u;
            goto label_315924;
        }
    }
    ctx->pc = 0x315918u;
    // 0x315918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x315918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31591c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31591Cu;
    {
        const bool branch_taken_0x31591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31591Cu;
        // 0x315920: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31591c) {
            ctx->pc = 0x31593Cu;
            goto label_31593c;
        }
    }
    ctx->pc = 0x315924u;
label_315924:
    // 0x315924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x315924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x315928: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x315928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31592c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31592cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315930: 0x0  nop
    ctx->pc = 0x315930u;
    // NOP
    // 0x315934: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x315934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x315938: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x315938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31593c:
    // 0x31593c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31593cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315940: 0x0  nop
    ctx->pc = 0x315940u;
    // NOP
    // 0x315944: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x315944u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[22]));
    // 0x315948: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x315948u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x31594c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31594cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x315950: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x315950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x315954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315958: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x315958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31595c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31595Cu;
    {
        const bool branch_taken_0x31595c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31595c) {
            ctx->pc = 0x315968u;
            goto label_315968;
        }
    }
    ctx->pc = 0x315964u;
    // 0x315964: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x315964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_315968:
    // 0x315968: 0x8e680024  lw          $t0, 0x24($s3)
    ctx->pc = 0x315968u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_31596c:
    // 0x31596c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x31596cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x315970: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x315970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x315974: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x315974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x315978: 0x8e670028  lw          $a3, 0x28($s3)
    ctx->pc = 0x315978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x31597c: 0x84900  sll         $t1, $t0, 4
    ctx->pc = 0x31597cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x315980: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x315980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x315984: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x315984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x315988: 0x25250008  addiu       $a1, $t1, 0x8
    ctx->pc = 0x315988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x31598c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x31598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x315990: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x315990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x315994: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x315994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x315998: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x315998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x31599c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x31599cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x3159a0: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x3159a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x3159a4: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x3159a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3159a8: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x3159a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3159ac: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x3159acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x3159b0: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x3159b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3159b4: 0x43602  srl         $a2, $a0, 24
    ctx->pc = 0x3159b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x3159b8: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x3159b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3159bc: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x3159bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3159c0: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x3159c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3159c4: 0x4b043  sra         $s6, $a0, 1
    ctx->pc = 0x3159c4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3159c8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3159c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3159cc: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3159ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3159d0: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x3159d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x3159d4: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x3159d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3159d8: 0x42a03  sra         $a1, $a0, 8
    ctx->pc = 0x3159d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 8));
    // 0x3159dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3159dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3159e0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3159e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3159e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3159e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3159e8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3159e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3159ec: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x3159ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x3159f0: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x3159f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3159f4: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x3159f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3159f8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3159f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x3159fc: 0x41a3c  dsll32      $v1, $a0, 8
    ctx->pc = 0x3159fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 8));
    // 0x315a00: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x315a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x315a04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x315A04u;
    {
        const bool branch_taken_0x315a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A04u;
        // 0x315a08: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a04) {
            ctx->pc = 0x315A24u;
            goto label_315a24;
        }
    }
    ctx->pc = 0x315A0Cu;
    // 0x315a0c: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x315a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x315a10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x315a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315a14: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x315a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x315a18: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x315a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x315a1c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x315a1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x315a20: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x315a20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_315a24:
    // 0x315a24: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x315A24u;
    SET_GPR_U32(ctx, 31, 0x315A2Cu);
    ctx->pc = 0x315A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A24u;
    // 0x315a28: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128D0u, 0x315A24u, 0x315A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A2Cu;
label_315a2c:
    // 0x315a2c: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x315a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x315a30: 0xc0c4a40  jal         func_312900
    ctx->pc = 0x315A30u;
    SET_GPR_U32(ctx, 31, 0x315A38u);
    ctx->pc = 0x315A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A30u;
    // 0x315a34: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312900u, 0x315A30u, 0x315A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A38u;
label_315a38:
    // 0x315a38: 0xafb40168  sw          $s4, 0x168($sp)
    ctx->pc = 0x315a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 20));
    // 0x315a3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x315a3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x315a40: 0xafb40160  sw          $s4, 0x160($sp)
    ctx->pc = 0x315a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 20));
    // 0x315a44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x315a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315a48: 0xafb1016c  sw          $s1, 0x16C($sp)
    ctx->pc = 0x315a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 17));
    // 0x315a4c: 0x27b40160  addiu       $s4, $sp, 0x160
    ctx->pc = 0x315a4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x315a50: 0xafb10164  sw          $s1, 0x164($sp)
    ctx->pc = 0x315a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 17));
    // 0x315a54: 0x27b30150  addiu       $s3, $sp, 0x150
    ctx->pc = 0x315a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x315a58: 0xafb00154  sw          $s0, 0x154($sp)
    ctx->pc = 0x315a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 16));
    // 0x315a5c: 0xafb00150  sw          $s0, 0x150($sp)
    ctx->pc = 0x315a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 16));
    // 0x315a60: 0xafb7015c  sw          $s7, 0x15C($sp)
    ctx->pc = 0x315a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 23));
    // 0x315a64: 0xafb70158  sw          $s7, 0x158($sp)
    ctx->pc = 0x315a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 23));
label_315a68:
    // 0x315a68: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x315a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315a6c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x315a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315a70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x315a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x315a74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315a78: 0x46170841  sub.s       $f1, $f1, $f23
    ctx->pc = 0x315a78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x315a7c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x315a7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x315a80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315a80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x315a84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315a84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x315a88: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x315a88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x315a8c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x315a8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x315a90: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x315a90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x315a94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x315a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x315a98: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x315a98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x315a9c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x315a9cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315aa0: 0x0  nop
    ctx->pc = 0x315aa0u;
    // NOP
    // 0x315aa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315aa8: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x315aa8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x315aac: 0xc048930  jal         func_1224C0
    ctx->pc = 0x315AACu;
    SET_GPR_U32(ctx, 31, 0x315AB4u);
    ctx->pc = 0x315AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AACu;
    // 0x315ab0: 0x46150b1d  msub.s      $f12, $f1, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x315AACu, 0x315AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AB4u;
label_315ab4:
    // 0x315ab4: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x315ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x315ab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x315ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315abc: 0xc048a46  jal         func_122918
    ctx->pc = 0x315ABCu;
    SET_GPR_U32(ctx, 31, 0x315AC4u);
    ctx->pc = 0x315AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315ABCu;
    // 0x315ac0: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x315ABCu, 0x315AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AC4u;
label_315ac4:
    // 0x315ac4: 0xc048bde  jal         func_122F78
    ctx->pc = 0x315AC4u;
    SET_GPR_U32(ctx, 31, 0x315ACCu);
    ctx->pc = 0x315AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AC4u;
    // 0x315ac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x315AC4u, 0x315ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315ACCu;
label_315acc:
    // 0x315acc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x315accu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315ad0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x315ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x315ad4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x315ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x315ad8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x315ad8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x315adc: 0x0  nop
    ctx->pc = 0x315adcu;
    // NOP
    // 0x315ae0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315ae4: 0x4614001a  mula.s      $f0, $f20
    ctx->pc = 0x315ae4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x315ae8: 0xc048930  jal         func_1224C0
    ctx->pc = 0x315AE8u;
    SET_GPR_U32(ctx, 31, 0x315AF0u);
    ctx->pc = 0x315AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AE8u;
    // 0x315aec: 0x46150b1c  madd.s      $f12, $f1, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[21]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x315AE8u, 0x315AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AF0u;
label_315af0:
    // 0x315af0: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x315af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x315af4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x315af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315af8: 0xc048a46  jal         func_122918
    ctx->pc = 0x315AF8u;
    SET_GPR_U32(ctx, 31, 0x315B00u);
    ctx->pc = 0x315AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AF8u;
    // 0x315afc: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x315AF8u, 0x315B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B00u;
label_315b00:
    // 0x315b00: 0xc048bde  jal         func_122F78
    ctx->pc = 0x315B00u;
    SET_GPR_U32(ctx, 31, 0x315B08u);
    ctx->pc = 0x315B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B00u;
    // 0x315b04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x315B00u, 0x315B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B08u;
label_315b08:
    // 0x315b08: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x315b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315b0c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x315b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x315b10: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x315b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315b14: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x315b14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x315b18: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x315b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x315b1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x315b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x315b20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x315b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x315b24: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x315b24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x315b28: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x315b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x315b2c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315b2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x315b30: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x315b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x315b34: 0x0  nop
    ctx->pc = 0x315b34u;
    // NOP
    // 0x315b38: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x315b38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x315b3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x315b3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x315b40: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x315b40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x315b44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x315b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x315b48: 0x0  nop
    ctx->pc = 0x315b48u;
    // NOP
    // 0x315b4c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x315b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x315b50: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x315B50u;
    {
        const bool branch_taken_0x315b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B50u;
        // 0x315b54: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b50) {
            ctx->pc = 0x315A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_315a68;
        }
    }
    ctx->pc = 0x315B58u;
    // 0x315b58: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x315b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x315b5c: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x315b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x315b60: 0x8c424790  lw          $v0, 0x4790($v0)
    ctx->pc = 0x315b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x315b64: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x315B64u;
    {
        const bool branch_taken_0x315b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x315b64) {
            ctx->pc = 0x315C30u;
            goto label_315c30;
        }
    }
    ctx->pc = 0x315B6Cu;
    // 0x315b6c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x315b6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x315b70: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x315b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315b74: 0x50470017  beql        $v0, $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x315B74u;
    {
        const bool branch_taken_0x315b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x315b74) {
            ctx->pc = 0x315B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315B74u;
            // 0x315b78: 0x87a200f0  lh          $v0, 0xF0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315BD4u;
            goto label_315bd4;
        }
    }
    ctx->pc = 0x315B7Cu;
    // 0x315b7c: 0x87a200f0  lh          $v0, 0xF0($sp)
    ctx->pc = 0x315b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x315b80: 0x1e543c  dsll32      $t2, $fp, 16
    ctx->pc = 0x315b80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) << (32 + 16));
    // 0x315b84: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x315b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x315b88: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x315b88u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x315b8c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x315b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x315b90: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x315b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x315b94: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x315b94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315b98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x315b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315b9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x315b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ba0: 0xc040532  jal         func_1014C8
    ctx->pc = 0x315BA0u;
    SET_GPR_U32(ctx, 31, 0x315BA8u);
    ctx->pc = 0x315BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BA0u;
    // 0x315ba4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x315BA0u, 0x315BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BA8u;
label_315ba8:
    // 0x315ba8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x315BA8u;
    SET_GPR_U32(ctx, 31, 0x315BB0u);
    ctx->pc = 0x315BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BA8u;
    // 0x315bac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x315BA8u, 0x315BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BB0u;
label_315bb0:
    // 0x315bb0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x315bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x315bb4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x315bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x315bb8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x315BB8u;
    SET_GPR_U32(ctx, 31, 0x315BC0u);
    ctx->pc = 0x315BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BB8u;
    // 0x315bbc: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x315BB8u, 0x315BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BC0u;
label_315bc0:
    // 0x315bc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x315bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315bc4: 0xc040454  jal         func_101150
    ctx->pc = 0x315BC4u;
    SET_GPR_U32(ctx, 31, 0x315BCCu);
    ctx->pc = 0x315BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BC4u;
    // 0x315bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x315BC4u, 0x315BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BCCu;
label_315bcc:
    // 0x315bcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x315BCCu;
    {
        const bool branch_taken_0x315bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BCCu;
        // 0x315bd0: 0x26430020  addiu       $v1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bcc) {
            ctx->pc = 0x315C28u;
            goto label_315c28;
        }
    }
    ctx->pc = 0x315BD4u;
label_315bd4:
    // 0x315bd4: 0x1e543c  dsll32      $t2, $fp, 16
    ctx->pc = 0x315bd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) << (32 + 16));
    // 0x315bd8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x315bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x315bdc: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x315bdcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x315be0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x315be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x315be4: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x315be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x315be8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x315be8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315bec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x315becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x315bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315bf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x315bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315bf8: 0xc040532  jal         func_1014C8
    ctx->pc = 0x315BF8u;
    SET_GPR_U32(ctx, 31, 0x315C00u);
    ctx->pc = 0x315BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BF8u;
    // 0x315bfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x315BF8u, 0x315C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C00u;
label_315c00:
    // 0x315c00: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x315C00u;
    SET_GPR_U32(ctx, 31, 0x315C08u);
    ctx->pc = 0x315C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C00u;
    // 0x315c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x315C00u, 0x315C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C08u;
label_315c08:
    // 0x315c08: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x315c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x315c0c: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x315c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x315c10: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x315C10u;
    SET_GPR_U32(ctx, 31, 0x315C18u);
    ctx->pc = 0x315C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C10u;
    // 0x315c14: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x315C10u, 0x315C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C18u;
label_315c18:
    // 0x315c18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x315c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315c1c: 0xc040454  jal         func_101150
    ctx->pc = 0x315C1Cu;
    SET_GPR_U32(ctx, 31, 0x315C24u);
    ctx->pc = 0x315C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C1Cu;
    // 0x315c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x315C1Cu, 0x315C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C24u;
label_315c24:
    // 0x315c24: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x315c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_315c28:
    // 0x315c28: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x315c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x315c2c: 0xac434790  sw          $v1, 0x4790($v0)
    ctx->pc = 0x315c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 3));
label_315c30:
    // 0x315c30: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x315c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x315c34: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315c38: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x315c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x315c3c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x315c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x315c40: 0xac450370  sw          $a1, 0x370($v0)
    ctx->pc = 0x315c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 5));
    // 0x315c44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x315c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x315c48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x315c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315c4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x315c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315c50: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x315c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x315c54: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x315c54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x315c58: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x315c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x315c5c: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x315c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x315c60: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x315c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x315c64: 0xfca00010  sd          $zero, 0x10($a1)
    ctx->pc = 0x315c64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 0));
    // 0x315c68: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315c6c: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x315c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x315c70: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x315c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x315c74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x315c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315c78: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x315c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x315c7c: 0xac510370  sw          $s1, 0x370($v0)
    ctx->pc = 0x315c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 17));
    // 0x315c80: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x315c80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x315c84: 0x5044001b  beql        $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x315C84u;
    {
        const bool branch_taken_0x315c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x315c84) {
            ctx->pc = 0x315C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315C84u;
            // 0x315c88: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315CF4u;
            goto label_315cf4;
        }
    }
    ctx->pc = 0x315C8Cu;
    // 0x315c8c: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x315C8Cu;
    SET_GPR_U32(ctx, 31, 0x315C94u);
    ctx->pc = 0x315C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C8Cu;
    // 0x315c90: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x315C8Cu, 0x315C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C94u;
label_315c94:
    // 0x315c94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315c98: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x315c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x315c9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x315c9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x315ca0: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x315ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x315ca4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x315ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x315ca8: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x315ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x315cac: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x315CACu;
    SET_GPR_U32(ctx, 31, 0x315CB4u);
    ctx->pc = 0x315CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315CACu;
    // 0x315cb0: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x315CACu, 0x315CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CB4u;
label_315cb4:
    // 0x315cb4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x315cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315cb8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x315cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x315cbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x315cbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x315cc0: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x315cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x315cc4: 0x2042825  or          $a1, $s0, $a0
    ctx->pc = 0x315cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x315cc8: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x315cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ccc: 0x218fc  dsll32      $v1, $v0, 3
    ctx->pc = 0x315cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 3));
    // 0x315cd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x315cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315cd4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x315cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315cd8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x315cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x315cdc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x315cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x315ce0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315ce4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x315ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x315ce8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x315ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x315cec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x315CECu;
    {
        const bool branch_taken_0x315cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CECu;
        // 0x315cf0: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cec) {
            ctx->pc = 0x315D58u;
            goto label_315d58;
        }
    }
    ctx->pc = 0x315CF4u;
label_315cf4:
    // 0x315cf4: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x315CF4u;
    SET_GPR_U32(ctx, 31, 0x315CFCu);
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x315CF4u, 0x315CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315CFCu;
label_315cfc:
    // 0x315cfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315d00: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x315d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x315d04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x315d04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x315d08: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x315d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x315d0c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x315d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x315d10: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x315d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x315d14: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x315D14u;
    SET_GPR_U32(ctx, 31, 0x315D1Cu);
    ctx->pc = 0x315D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315D14u;
    // 0x315d18: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x315D14u, 0x315D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315D1Cu;
label_315d1c:
    // 0x315d1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x315d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315d20: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x315d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x315d24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x315d24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x315d28: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x315d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x315d2c: 0x2042825  or          $a1, $s0, $a0
    ctx->pc = 0x315d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x315d30: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x315d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315d34: 0x218fc  dsll32      $v1, $v0, 3
    ctx->pc = 0x315d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 3));
    // 0x315d38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x315d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x315d3c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x315d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315d40: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x315d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x315d44: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x315d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x315d48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315d4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x315d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x315d50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x315d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x315d54: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x315d54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_315d58:
    // 0x315d58: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315d5c: 0x3c03c0aa  lui         $v1, 0xC0AA
    ctx->pc = 0x315d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49322 << 16));
    // 0x315d60: 0x8c480370  lw          $t0, 0x370($v0)
    ctx->pc = 0x315d60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x315d64: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x315d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x315d68: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x315d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x315d6c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x315d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x315d70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x315d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x315d74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x315d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x315d78: 0xfd070008  sd          $a3, 0x8($t0)
    ctx->pc = 0x315d78u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 7));
    // 0x315d7c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x315d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x315d80: 0xfd000010  sd          $zero, 0x10($t0)
    ctx->pc = 0x315d80u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 0));
    // 0x315d84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x315d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x315d88: 0xfd060018  sd          $a2, 0x18($t0)
    ctx->pc = 0x315d88u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 6));
    // 0x315d8c: 0x70021b89  pcpyld      $v1, $zero, $v0
    ctx->pc = 0x315d8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x315d90: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x315d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x315d94: 0xfd050020  sd          $a1, 0x20($t0)
    ctx->pc = 0x315d94u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 5));
    // 0x315d98: 0xfd040028  sd          $a0, 0x28($t0)
    ctx->pc = 0x315d98u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 4));
    // 0x315d9c: 0x24025135  addiu       $v0, $zero, 0x5135
    ctx->pc = 0x315d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20789));
    // 0x315da0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x315da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315da4: 0xfd030030  sd          $v1, 0x30($t0)
    ctx->pc = 0x315da4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 3));
    // 0x315da8: 0x3c021351  lui         $v0, 0x1351
    ctx->pc = 0x315da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4945 << 16));
    // 0x315dac: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x315dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x315db0: 0x34433513  ori         $v1, $v0, 0x3513
    ctx->pc = 0x315db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x315db4: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x315db4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x315db8: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x315db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x315dbc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315dc0: 0xfd050038  sd          $a1, 0x38($t0)
    ctx->pc = 0x315dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 5));
    // 0x315dc4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x315dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x315dc8: 0x8c8d0370  lw          $t5, 0x370($a0)
    ctx->pc = 0x315dc8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x315dcc: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x315dccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x315dd0: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x315dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x315dd4: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x315dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x315dd8: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x315dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x315ddc: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x315ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x315de0: 0x25a40040  addiu       $a0, $t5, 0x40
    ctx->pc = 0x315de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x315de4: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x315de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x315de8: 0xac440370  sw          $a0, 0x370($v0)
    ctx->pc = 0x315de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 4));
    // 0x315dec: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x315decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x315df0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x315df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x315df4: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x315df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x315df8: 0xada20040  sw          $v0, 0x40($t5)
    ctx->pc = 0x315df8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 64), GPR_U32(ctx, 2));
    // 0x315dfc: 0x8c6e0370  lw          $t6, 0x370($v1)
    ctx->pc = 0x315dfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x315e00: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x315e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x315e04: 0x8fad0160  lw          $t5, 0x160($sp)
    ctx->pc = 0x315e04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x315e08: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x315e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x315e0c: 0xadc20004  sw          $v0, 0x4($t6)
    ctx->pc = 0x315e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 2));
    // 0x315e10: 0x8d8e0370  lw          $t6, 0x370($t4)
    ctx->pc = 0x315e10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x315e14: 0xd1100  sll         $v0, $t5, 4
    ctx->pc = 0x315e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x315e18: 0x244c6c00  addiu       $t4, $v0, 0x6C00
    ctx->pc = 0x315e18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x315e1c: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x315e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x315e20: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x315e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x315e24: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x315e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x315e28: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x315e28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x315e2c: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x315e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315e30: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x315e30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x315e34: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x315e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x315e38: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x315e38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x315e3c: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x315e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x315e40: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x315e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x315e44: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x315e44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x315e48: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x315e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x315e4c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x315e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x315e50: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x315e50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x315e54: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x315e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x315e58: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x315e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    // 0x315e5c: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x315e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x315e60: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x315e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x315e64: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x315e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x315e68: 0xacac0010  sw          $t4, 0x10($a1)
    ctx->pc = 0x315e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 12));
    // 0x315e6c: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x315e6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x315e70: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x315E70u;
    {
        const bool branch_taken_0x315e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315e70) {
            ctx->pc = 0x315E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315E70u;
            // 0x315e74: 0x8fa20150  lw          $v0, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315ECCu;
            goto label_315ecc;
        }
    }
    ctx->pc = 0x315E78u;
    // 0x315e78: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x315e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x315e7c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x315e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x315e80: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x315e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x315e84: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x315e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x315e88: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x315e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x315e8c: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x315e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x315e90: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x315e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x315e94: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x315e94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x315e98: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x315e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x315e9c: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x315e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x315ea0: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x315ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x315ea4: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x315ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x315ea8: 0x0  nop
    ctx->pc = 0x315ea8u;
    // NOP
    // 0x315eac: 0x1810  mfhi        $v1
    ctx->pc = 0x315eacu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x315eb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x315eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x315eb4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x315eb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x315eb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315ebc: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x315ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x315ec0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x315ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x315ec4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315EC4u;
    {
        const bool branch_taken_0x315ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EC4u;
        // 0x315ec8: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ec4) {
            ctx->pc = 0x315ED4u;
            goto label_315ed4;
        }
    }
    ctx->pc = 0x315ECCu;
label_315ecc:
    // 0x315ecc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x315eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x315ed0: 0x24477100  addiu       $a3, $v0, 0x7100
    ctx->pc = 0x315ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_315ed4:
    // 0x315ed4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315ed8: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x315ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x315edc: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x315edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x315ee0: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x315ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x315ee4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x315ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x315ee8: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x315ee8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x315eec: 0x8faf0164  lw          $t7, 0x164($sp)
    ctx->pc = 0x315eecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x315ef0: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x315ef0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x315ef4: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x315ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x315ef8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x315ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x315efc: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x315efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x315f00: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x315f00u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x315f04: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x315f04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x315f08: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x315f08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x315f0c: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x315f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x315f10: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x315f10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x315f14: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x315f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x315f18: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x315f18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x315f1c: 0x8c700370  lw          $s0, 0x370($v1)
    ctx->pc = 0x315f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x315f20: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x315f20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x315f24: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x315f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x315f28: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x315f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x315f2c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x315f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x315f30: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x315f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x315f34: 0x8dd00370  lw          $s0, 0x370($t6)
    ctx->pc = 0x315f34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x315f38: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x315f38u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x315f3c: 0x260f0010  addiu       $t7, $s0, 0x10
    ctx->pc = 0x315f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x315f40: 0x25ce6c00  addiu       $t6, $t6, 0x6C00
    ctx->pc = 0x315f40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
    // 0x315f44: 0xac4f0370  sw          $t7, 0x370($v0)
    ctx->pc = 0x315f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 15));
    // 0x315f48: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x315f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x315f4c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x315f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x315f50: 0x8dad0370  lw          $t5, 0x370($t5)
    ctx->pc = 0x315f50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x315f54: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x315f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x315f58: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x315f58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x315f5c: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x315f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x315f60: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x315f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x315f64: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x315f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x315f68: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x315f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x315f6c: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x315f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x315f70: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x315f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315f74: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x315f74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x315f78: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x315f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x315f7c: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x315f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x315f80: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x315f80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x315f84: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x315f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x315f88: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x315f88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x315f8c: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x315f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x315f90: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x315f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x315f94: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x315f94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x315f98: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x315f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x315f9c: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x315f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    // 0x315fa0: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x315fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x315fa4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x315fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x315fa8: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x315fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x315fac: 0xacae0010  sw          $t6, 0x10($a1)
    ctx->pc = 0x315facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 14));
    // 0x315fb0: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x315fb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x315fb4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x315FB4u;
    {
        const bool branch_taken_0x315fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315fb4) {
            ctx->pc = 0x315FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315FB4u;
            // 0x315fb8: 0x8fa20154  lw          $v0, 0x154($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316008u;
            goto label_316008;
        }
    }
    ctx->pc = 0x315FBCu;
    // 0x315fbc: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x315fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x315fc0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x315fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x315fc4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x315fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x315fc8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x315fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x315fcc: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x315fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x315fd0: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x315fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x315fd4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x315fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x315fd8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x315fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315fdc: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x315fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x315fe0: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x315fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x315fe4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x315fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x315fe8: 0x0  nop
    ctx->pc = 0x315fe8u;
    // NOP
    // 0x315fec: 0x1010  mfhi        $v0
    ctx->pc = 0x315fecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x315ff0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x315ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x315ff4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x315ff4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x315ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x315ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x315ffc: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x315ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x316000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316000u;
    {
        const bool branch_taken_0x316000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316000u;
        // 0x316004: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316000) {
            ctx->pc = 0x316010u;
            goto label_316010;
        }
    }
    ctx->pc = 0x316008u;
label_316008:
    // 0x316008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31600c: 0x24477100  addiu       $a3, $v0, 0x7100
    ctx->pc = 0x31600cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_316010:
    // 0x316010: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x316010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x316014: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x316014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x316018: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x316018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31601c: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x31601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x316020: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x316020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x316024: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x316024u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x316028: 0x8faf0168  lw          $t7, 0x168($sp)
    ctx->pc = 0x316028u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x31602c: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31602cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x316030: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x316030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x316034: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x316034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x316038: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x316038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31603c: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31603cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x316040: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x316040u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x316044: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x316044u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x316048: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x316048u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31604c: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31604cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x316050: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x316050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x316054: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x316054u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x316058: 0x8c700370  lw          $s0, 0x370($v1)
    ctx->pc = 0x316058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31605c: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31605cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x316060: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x316060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x316064: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x316064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x316068: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x316068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31606c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x31606cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x316070: 0x8dd00370  lw          $s0, 0x370($t6)
    ctx->pc = 0x316070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x316074: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x316074u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x316078: 0x260f0010  addiu       $t7, $s0, 0x10
    ctx->pc = 0x316078u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31607c: 0x25ce6c00  addiu       $t6, $t6, 0x6C00
    ctx->pc = 0x31607cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
    // 0x316080: 0xac4f0370  sw          $t7, 0x370($v0)
    ctx->pc = 0x316080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 15));
    // 0x316084: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x316084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x316088: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x316088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x31608c: 0x8dad0370  lw          $t5, 0x370($t5)
    ctx->pc = 0x31608cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x316090: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x316090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x316094: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x316094u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x316098: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x316098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x31609c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x31609cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3160a0: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x3160a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x3160a4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3160a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3160a8: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x3160a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x3160ac: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x3160acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3160b0: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x3160b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x3160b4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3160b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3160b8: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x3160b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x3160bc: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x3160bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x3160c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3160c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3160c4: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3160c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x3160c8: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x3160c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x3160cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3160ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3160d0: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x3160d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x3160d4: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x3160d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x3160d8: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x3160d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    // 0x3160dc: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x3160dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x3160e0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x3160e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3160e4: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x3160e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x3160e8: 0xacae0010  sw          $t6, 0x10($a1)
    ctx->pc = 0x3160e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 14));
    // 0x3160ec: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x3160ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x3160f0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3160F0u;
    {
        const bool branch_taken_0x3160f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3160f0) {
            ctx->pc = 0x3160F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3160F0u;
            // 0x3160f4: 0x8fa20158  lw          $v0, 0x158($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316144u;
            goto label_316144;
        }
    }
    ctx->pc = 0x3160F8u;
    // 0x3160f8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3160f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3160fc: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x3160fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x316100: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x316100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x316104: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x316108: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x316108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x31610c: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x31610cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x316110: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x316110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x316114: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x316114u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316118: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x316118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x31611c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x31611cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x316120: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x316120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x316124: 0x0  nop
    ctx->pc = 0x316124u;
    // NOP
    // 0x316128: 0x1010  mfhi        $v0
    ctx->pc = 0x316128u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31612c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x316130: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x316130u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x316134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316138: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x316138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x31613c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31613Cu;
    {
        const bool branch_taken_0x31613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31613Cu;
        // 0x316140: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31613c) {
            ctx->pc = 0x31614Cu;
            goto label_31614c;
        }
    }
    ctx->pc = 0x316144u;
label_316144:
    // 0x316144: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x316148: 0x24477100  addiu       $a3, $v0, 0x7100
    ctx->pc = 0x316148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_31614c:
    // 0x31614c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x316150: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x316150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x316154: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x316154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x316158: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x316158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31615c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31615cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x316160: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x316160u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x316164: 0x8faf016c  lw          $t7, 0x16C($sp)
    ctx->pc = 0x316164u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x316168: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x316168u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31616c: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x31616cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x316170: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x316170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x316174: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x316174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x316178: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x316178u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31617c: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31617cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x316180: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x316180u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x316184: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x316184u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x316188: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x316188u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31618c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x31618cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x316190: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x316190u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x316194: 0x8c700370  lw          $s0, 0x370($v1)
    ctx->pc = 0x316194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x316198: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x316198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31619c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31619cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x3161a0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3161a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3161a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3161a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3161a8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3161a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3161ac: 0x8dd00370  lw          $s0, 0x370($t6)
    ctx->pc = 0x3161acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x3161b0: 0xf7100  sll         $t6, $t7, 4
    ctx->pc = 0x3161b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x3161b4: 0x260f0010  addiu       $t7, $s0, 0x10
    ctx->pc = 0x3161b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3161b8: 0x25ce6c00  addiu       $t6, $t6, 0x6C00
    ctx->pc = 0x3161b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
    // 0x3161bc: 0xac4f0370  sw          $t7, 0x370($v0)
    ctx->pc = 0x3161bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 15));
    // 0x3161c0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3161c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3161c4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3161c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x3161c8: 0x8dad0370  lw          $t5, 0x370($t5)
    ctx->pc = 0x3161c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x3161cc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x3161ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3161d0: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x3161d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x3161d4: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x3161d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x3161d8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3161d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3161dc: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x3161dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x3161e0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3161e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3161e4: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x3161e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x3161e8: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x3161e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3161ec: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x3161ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x3161f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3161f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3161f4: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x3161f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x3161f8: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x3161f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x3161fc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3161fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x316200: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x316200u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x316204: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x316204u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x316208: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x316208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31620c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x31620cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x316210: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x316210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x316214: 0xac56000c  sw          $s6, 0xC($v0)
    ctx->pc = 0x316214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 22));
    // 0x316218: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x316218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31621c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x31621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316220: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x316220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x316224: 0xacae0010  sw          $t6, 0x10($a1)
    ctx->pc = 0x316224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 14));
    // 0x316228: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x316228u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x31622c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x31622Cu;
    {
        const bool branch_taken_0x31622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31622c) {
            ctx->pc = 0x316230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31622Cu;
            // 0x316230: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316280u;
            goto label_316280;
        }
    }
    ctx->pc = 0x316234u;
    // 0x316234: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x316234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x316238: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x316238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x31623c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x31623cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x316240: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x316244: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x316244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x316248: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x316248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x31624c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x31624cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x316250: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x316250u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316254: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x316254u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x316258: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x316258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31625c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x31625cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x316260: 0x0  nop
    ctx->pc = 0x316260u;
    // NOP
    // 0x316264: 0x1010  mfhi        $v0
    ctx->pc = 0x316264u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x316268: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x316268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31626c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x31626cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x316270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316274: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x316274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x316278: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316278u;
    {
        const bool branch_taken_0x316278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316278u;
        // 0x31627c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316278) {
            ctx->pc = 0x316288u;
            goto label_316288;
        }
    }
    ctx->pc = 0x316280u;
label_316280:
    // 0x316280: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x316284: 0x24447100  addiu       $a0, $v0, 0x7100
    ctx->pc = 0x316284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_316288:
    // 0x316288: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x316288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31628c: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x31628cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x316290: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x316290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x316294: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x316294u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x316298: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x316298u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x31629c: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31629cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x3162a0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3162a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x3162a4: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3162a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x3162a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3162a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x3162ac: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3162acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3162b0: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x3162b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3162b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3162b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3162b8: 0x346b0012  ori         $t3, $v1, 0x12
    ctx->pc = 0x3162b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
    // 0x3162bc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3162bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3162c0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3162c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3162c4: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x3162c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x3162c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3162c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3162cc: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x3162ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x3162d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3162d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162d4: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x3162d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x3162d8: 0x7c6001f0  sq          $zero, 0x1F0($v1)
    ctx->pc = 0x3162d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 496), GPR_VEC(ctx, 0));
    // 0x3162dc: 0xac4a01f0  sw          $t2, 0x1F0($v0)
    ctx->pc = 0x3162dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 496), GPR_U32(ctx, 10)); // MMIO: 0x700001f0
    // 0x3162e0: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x3162e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x3162e4: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x3162e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x3162e8: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x3162e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x3162ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3162ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3162f0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3162F0u;
    SET_GPR_U32(ctx, 31, 0x3162F8u);
    ctx->pc = 0x3162F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162F0u;
    // 0x3162f4: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3162F0u, 0x3162F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162F8u;
label_3162f8:
    // 0x3162f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3162f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3162fc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3162fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x316300: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x316300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x316304: 0xc040a04  jal         func_102810
    ctx->pc = 0x316304u;
    SET_GPR_U32(ctx, 31, 0x31630Cu);
    ctx->pc = 0x316308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316304u;
    // 0x316308: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x316304u, 0x31630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31630Cu;
label_31630c:
    // 0x31630c: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31630cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_316310:
    // 0x316310: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x316310u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x316314: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x316314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x316318: 0x0  nop
    ctx->pc = 0x316318u;
    // NOP
    // 0x31631c: 0x0  nop
    ctx->pc = 0x31631cu;
    // NOP
    // 0x316320: 0x0  nop
    ctx->pc = 0x316320u;
    // NOP
    // 0x316324: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x316324u;
    {
        const bool branch_taken_0x316324 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x316324) {
            ctx->pc = 0x316310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316310;
        }
    }
    ctx->pc = 0x31632Cu;
    // 0x31632c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31632cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x316330: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x316330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x316334: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x316334u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x316338: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x316338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31633c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x31633cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x316340: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x316340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x316344: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x316344u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316348: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x316348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31634c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x31634cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316350: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x316350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316354: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x316354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316358: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x316358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31635c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31635cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316360: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316364: 0x3e00008  jr          $ra
    ctx->pc = 0x316364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316364u;
        // 0x316368: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31636Cu;
    // 0x31636c: 0x0  nop
    ctx->pc = 0x31636cu;
    // NOP
    // 0x316370: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x316370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x316374: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x316374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x316378: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x316378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31637c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x316380: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x316380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x316384: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x316384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x316388: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x316388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31638c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31638cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x316390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x316390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x316394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x316398: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x316398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31639c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3163a0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3163a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3163a4: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x3163a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3163a8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3163a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3163ac: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x3163acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3163b0: 0x9617001c  lhu         $s7, 0x1C($s0)
    ctx->pc = 0x3163b0u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3163b4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x3163b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3163b8: 0x961e001e  lhu         $fp, 0x1E($s0)
    ctx->pc = 0x3163b8u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x3163bc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3163bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3163c0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3163C0u;
    {
        const bool branch_taken_0x3163c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3163C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163C0u;
        // 0x3163c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163c0) {
            ctx->pc = 0x316458u;
            goto label_316458;
        }
    }
    ctx->pc = 0x3163C8u;
    // 0x3163c8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3163c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3163cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3163ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3163d0: 0x0  nop
    ctx->pc = 0x3163d0u;
    // NOP
    // 0x3163d4: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x3163d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x3163d8: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x3163d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x3163dc: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x3163dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3163e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3163e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3163e4: 0x0  nop
    ctx->pc = 0x3163e4u;
    // NOP
    // 0x3163e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3163e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3163ec: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3163ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3163f0: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x3163f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x3163f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3163f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3163f8: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x3163f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x3163fc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3163FCu;
    {
        const bool branch_taken_0x3163fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3163fc) {
            ctx->pc = 0x316400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3163FCu;
            // 0x316400: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316410u;
            goto label_316410;
        }
    }
    ctx->pc = 0x316404u;
    // 0x316404: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x316404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316408: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x316408u;
    {
        const bool branch_taken_0x316408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316408u;
        // 0x31640c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316408) {
            ctx->pc = 0x316428u;
            goto label_316428;
        }
    }
    ctx->pc = 0x316410u;
label_316410:
    // 0x316410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x316410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x316414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x316414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x316418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x316418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31641c: 0x0  nop
    ctx->pc = 0x31641cu;
    // NOP
    // 0x316420: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x316420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x316424: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x316424u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_316428:
    // 0x316428: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31642c: 0x0  nop
    ctx->pc = 0x31642cu;
    // NOP
    // 0x316430: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x316430u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x316434: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x316434u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x316438: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316438u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31643c: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x31643cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x316440: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x316440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x316444: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x316444u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x316448: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
    ctx->pc = 0x316448u;
    {
        const bool branch_taken_0x316448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316448) {
            ctx->pc = 0x31644Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316448u;
            // 0x31644c: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3164E8u;
            goto label_3164e8;
        }
    }
    ctx->pc = 0x316450u;
    // 0x316450: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x316450u;
    {
        const bool branch_taken_0x316450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316450u;
        // 0x316454: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316450) {
            ctx->pc = 0x3164E4u;
            goto label_3164e4;
        }
    }
    ctx->pc = 0x316458u;
label_316458:
    // 0x316458: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x316458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x31645c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31645cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316460: 0x0  nop
    ctx->pc = 0x316460u;
    // NOP
    // 0x316464: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x316464u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x316468: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x316468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x31646c: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x31646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x316470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x316470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316474: 0x0  nop
    ctx->pc = 0x316474u;
    // NOP
    // 0x316478: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x316478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31647c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x31647cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x316480: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x316480u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x316484: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x316488: 0x44160800  mfc1        $s6, $f1
    ctx->pc = 0x316488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x31648c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31648Cu;
    {
        const bool branch_taken_0x31648c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31648c) {
            ctx->pc = 0x316490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31648Cu;
            // 0x316490: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3164A0u;
            goto label_3164a0;
        }
    }
    ctx->pc = 0x316494u;
    // 0x316494: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x316494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316498: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x316498u;
    {
        const bool branch_taken_0x316498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316498u;
        // 0x31649c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316498) {
            ctx->pc = 0x3164B8u;
            goto label_3164b8;
        }
    }
    ctx->pc = 0x3164A0u;
label_3164a0:
    // 0x3164a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3164a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3164a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3164a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3164a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3164a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3164ac: 0x0  nop
    ctx->pc = 0x3164acu;
    // NOP
    // 0x3164b0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3164b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3164b4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3164b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3164b8:
    // 0x3164b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3164b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3164bc: 0x0  nop
    ctx->pc = 0x3164bcu;
    // NOP
    // 0x3164c0: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x3164c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x3164c4: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x3164c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3164c8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3164c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3164cc: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x3164ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x3164d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3164d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3164d4: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x3164d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3164d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3164D8u;
    {
        const bool branch_taken_0x3164d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3164d8) {
            ctx->pc = 0x3164E4u;
            goto label_3164e4;
        }
    }
    ctx->pc = 0x3164E0u;
    // 0x3164e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3164e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3164e4:
    // 0x3164e4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3164e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_3164e8:
    // 0x3164e8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x3164E8u;
    {
        const bool branch_taken_0x3164e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3164e8) {
            ctx->pc = 0x3164ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3164E8u;
            // 0x3164ec: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316580u;
            goto label_316580;
        }
    }
    ctx->pc = 0x3164F0u;
    // 0x3164f0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3164f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3164f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3164f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3164f8: 0x0  nop
    ctx->pc = 0x3164f8u;
    // NOP
    // 0x3164fc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3164fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x316500: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x316500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x316504: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x316504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x316508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x316508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31650c: 0x0  nop
    ctx->pc = 0x31650cu;
    // NOP
    // 0x316510: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x316510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x316514: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x316514u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x316518: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x316518u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x31651c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31651cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x316520: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x316520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x316524: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x316524u;
    {
        const bool branch_taken_0x316524 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x316524) {
            ctx->pc = 0x316528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316524u;
            // 0x316528: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316538u;
            goto label_316538;
        }
    }
    ctx->pc = 0x31652Cu;
    // 0x31652c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31652cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x316530u;
    {
        const bool branch_taken_0x316530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316530u;
        // 0x316534: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316530) {
            ctx->pc = 0x316550u;
            goto label_316550;
        }
    }
    ctx->pc = 0x316538u;
label_316538:
    // 0x316538: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x316538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31653c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31653cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x316540: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x316540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316544: 0x0  nop
    ctx->pc = 0x316544u;
    // NOP
    // 0x316548: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x316548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31654c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31654cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_316550:
    // 0x316550: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316554: 0x0  nop
    ctx->pc = 0x316554u;
    // NOP
    // 0x316558: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x316558u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x31655c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x31655cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x316560: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316560u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x316564: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x316564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x316568: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x316568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31656c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x31656cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x316570: 0x45030026  bc1tl       . + 4 + (0x26 << 2)
    ctx->pc = 0x316570u;
    {
        const bool branch_taken_0x316570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316570) {
            ctx->pc = 0x316574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316570u;
            // 0x316574: 0x8e490024  lw          $t1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31660Cu;
            goto label_31660c;
        }
    }
    ctx->pc = 0x316578u;
    // 0x316578: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x316578u;
    {
        const bool branch_taken_0x316578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316578u;
        // 0x31657c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316578) {
            ctx->pc = 0x316608u;
            goto label_316608;
        }
    }
    ctx->pc = 0x316580u;
label_316580:
    // 0x316580: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316584: 0x0  nop
    ctx->pc = 0x316584u;
    // NOP
    // 0x316588: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x316588u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x31658c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x31658cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x316590: 0xc6430038  lwc1        $f3, 0x38($s2)
    ctx->pc = 0x316590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x316594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x316594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316598: 0x0  nop
    ctx->pc = 0x316598u;
    // NOP
    // 0x31659c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31659cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3165a0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3165a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3165a4: 0x4603085c  madd.s      $f1, $f1, $f3
    ctx->pc = 0x3165a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x3165a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3165a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3165ac: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x3165acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x3165b0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3165B0u;
    {
        const bool branch_taken_0x3165b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3165b0) {
            ctx->pc = 0x3165B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3165B0u;
            // 0x3165b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3165C4u;
            goto label_3165c4;
        }
    }
    ctx->pc = 0x3165B8u;
    // 0x3165b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3165b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3165bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3165BCu;
    {
        const bool branch_taken_0x3165bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3165C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165BCu;
        // 0x3165c0: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165bc) {
            ctx->pc = 0x3165DCu;
            goto label_3165dc;
        }
    }
    ctx->pc = 0x3165C4u;
label_3165c4:
    // 0x3165c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3165c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3165c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3165c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3165cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3165ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3165d0: 0x0  nop
    ctx->pc = 0x3165d0u;
    // NOP
    // 0x3165d4: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3165d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3165d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3165d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3165dc:
    // 0x3165dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3165dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3165e0: 0x0  nop
    ctx->pc = 0x3165e0u;
    // NOP
    // 0x3165e4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3165e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x3165e8: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x3165e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3165ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3165ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3165f0: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x3165f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x3165f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3165f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3165f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3165f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3165fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3165FCu;
    {
        const bool branch_taken_0x3165fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3165fc) {
            ctx->pc = 0x316608u;
            goto label_316608;
        }
    }
    ctx->pc = 0x316604u;
    // 0x316604: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x316604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_316608:
    // 0x316608: 0x8e490024  lw          $t1, 0x24($s2)
    ctx->pc = 0x316608u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_31660c:
    // 0x31660c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x31660cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x316610: 0x8e470028  lw          $a3, 0x28($s2)
    ctx->pc = 0x316610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x316614: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x316614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x316618: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x316618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31661c: 0x1254021  addu        $t0, $t1, $a1
    ctx->pc = 0x31661cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x316620: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x316620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x316624: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x316624u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x316628: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x316628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x31662c: 0x7fa500d0  sq          $a1, 0xD0($sp)
    ctx->pc = 0x31662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 5));
    // 0x316630: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x316630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x316634: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x316634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x316638: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x316638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x31663c: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x31663cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x316640: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x316640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x316644: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x316644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x316648: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x316648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x31664c: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x31664cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x316650: 0x662824  and         $a1, $v1, $a2
    ctx->pc = 0x316650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x316654: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x316654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316658: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x316658u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x31665c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x31665cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x316660: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x316660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x316664: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x316664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x316668: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x316668u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x31666c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x31666cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x316670: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x316670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x316674: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x316674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x316678: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x316678u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x31667c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316680: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x316680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x316684: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x316684u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x316688: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x316688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x31668c: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x31668cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x316690: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x316690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x316694: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x316694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x316698: 0x41a3c  dsll32      $v1, $a0, 8
    ctx->pc = 0x316698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 8));
    // 0x31669c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x31669cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x3166a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3166A0u;
    {
        const bool branch_taken_0x3166a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3166A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166A0u;
        // 0x3166a4: 0x58843  sra         $s1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3166a0) {
            ctx->pc = 0x3166C0u;
            goto label_3166c0;
        }
    }
    ctx->pc = 0x3166A8u;
    // 0x3166a8: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x3166a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3166ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3166acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3166b0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x3166b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x3166b4: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x3166b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3166b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3166b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3166bc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x3166bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3166c0:
    // 0x3166c0: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3166c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3166c4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3166c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3166c8: 0x8c424780  lw          $v0, 0x4780($v0)
    ctx->pc = 0x3166c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18304)));
    // 0x3166cc: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3166CCu;
    {
        const bool branch_taken_0x3166cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3166cc) {
            ctx->pc = 0x31672Cu;
            goto label_31672c;
        }
    }
    ctx->pc = 0x3166D4u;
    // 0x3166d4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3166d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3166d8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3166d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3166dc: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x3166dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x3166e0: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x3166e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x3166e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3166e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3166e8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3166e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3166ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3166ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3166f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166f4: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3166F4u;
    SET_GPR_U32(ctx, 31, 0x3166FCu);
    ctx->pc = 0x3166F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166F4u;
    // 0x3166f8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x3166F4u, 0x3166FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166FCu;
label_3166fc:
    // 0x3166fc: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3166FCu;
    SET_GPR_U32(ctx, 31, 0x316704u);
    ctx->pc = 0x316700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166FCu;
    // 0x316700: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3166FCu, 0x316704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316704u;
label_316704:
    // 0x316704: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x316704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x316708: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x316708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31670c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31670Cu;
    SET_GPR_U32(ctx, 31, 0x316714u);
    ctx->pc = 0x316710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31670Cu;
    // 0x316710: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x31670Cu, 0x316714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316714u;
label_316714:
    // 0x316714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x316714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316718: 0xc040454  jal         func_101150
    ctx->pc = 0x316718u;
    SET_GPR_U32(ctx, 31, 0x316720u);
    ctx->pc = 0x31671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316718u;
    // 0x31671c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x316718u, 0x316720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316720u;
label_316720:
    // 0x316720: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x316720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x316724: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x316724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x316728: 0xac434780  sw          $v1, 0x4780($v0)
    ctx->pc = 0x316728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18304), GPR_U32(ctx, 3));
label_31672c:
    // 0x31672c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x316730: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x316730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x316734: 0x8c424790  lw          $v0, 0x4790($v0)
    ctx->pc = 0x316734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x316738: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x316738u;
    {
        const bool branch_taken_0x316738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x316738) {
            ctx->pc = 0x31673Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316738u;
            // 0x31673c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3167A4u;
            goto label_3167a4;
        }
    }
    ctx->pc = 0x316740u;
    // 0x316740: 0x17543c  dsll32      $t2, $s7, 16
    ctx->pc = 0x316740u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 23) << (32 + 16));
    // 0x316744: 0x1e5c3c  dsll32      $t3, $fp, 16
    ctx->pc = 0x316744u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 30) << (32 + 16));
    // 0x316748: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x316748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31674c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x31674cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x316750: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x316750u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x316754: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x316754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x316758: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x316758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x31675c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31675cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x316760: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x316760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x316764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x316764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316768: 0xc040532  jal         func_1014C8
    ctx->pc = 0x316768u;
    SET_GPR_U32(ctx, 31, 0x316770u);
    ctx->pc = 0x31676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316768u;
    // 0x31676c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x316768u, 0x316770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316770u;
label_316770:
    // 0x316770: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x316770u;
    SET_GPR_U32(ctx, 31, 0x316778u);
    ctx->pc = 0x316774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316770u;
    // 0x316774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x316770u, 0x316778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316778u;
label_316778:
    // 0x316778: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x316778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31677c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x31677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x316780: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x316780u;
    SET_GPR_U32(ctx, 31, 0x316788u);
    ctx->pc = 0x316784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316780u;
    // 0x316784: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x316780u, 0x316788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316788u;
label_316788:
    // 0x316788: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x316788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31678c: 0xc040454  jal         func_101150
    ctx->pc = 0x31678Cu;
    SET_GPR_U32(ctx, 31, 0x316794u);
    ctx->pc = 0x316790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31678Cu;
    // 0x316790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x31678Cu, 0x316794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316794u;
label_316794:
    // 0x316794: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x316794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x316798: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x316798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31679c: 0xac434790  sw          $v1, 0x4790($v0)
    ctx->pc = 0x31679cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 3));
    // 0x3167a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3167a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3167a4:
    // 0x3167a4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3167a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x3167a8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3167a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3167ac: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x3167acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x3167b0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3167b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3167b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3167b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3167b8: 0xac460370  sw          $a2, 0x370($v0)
    ctx->pc = 0x3167b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 6));
    // 0x3167bc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3167bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3167c0: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x3167c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x3167c4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3167c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3167c8: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x3167c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x3167cc: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x3167ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3167d0: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x3167d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x3167d4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3167d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3167d8: 0xfcc50018  sd          $a1, 0x18($a2)
    ctx->pc = 0x3167d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 5));
    // 0x3167dc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3167dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3167e0: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x3167e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3167e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3167e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167e8: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x3167e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3167ec: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x3167ECu;
    SET_GPR_U32(ctx, 31, 0x3167F4u);
    ctx->pc = 0x3167F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3167ECu;
    // 0x3167f0: 0xac500370  sw          $s0, 0x370($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x3167ECu, 0x3167F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167F4u;
label_3167f4:
    // 0x3167f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3167f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3167f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3167f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3167fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x316800: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x316800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x316804: 0x3c020131  lui         $v0, 0x131
    ctx->pc = 0x316804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)305 << 16));
    // 0x316808: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x316808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x31680c: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31680Cu;
    SET_GPR_U32(ctx, 31, 0x316814u);
    ctx->pc = 0x316810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31680Cu;
    // 0x316810: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x31680Cu, 0x316814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316814u;
label_316814:
    // 0x316814: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x316814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316818: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x316818u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31681c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31681cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x316820: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x316820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x316824: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x316824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x316828: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x316828u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31682c: 0x2433025  or          $a2, $s2, $v1
    ctx->pc = 0x31682cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x316830: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x316830u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x316834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x316834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x316838: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x316838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31683c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x31683cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x316840: 0x220fc  dsll32      $a0, $v0, 3
    ctx->pc = 0x316840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 3));
    // 0x316844: 0x3c032017  lui         $v1, 0x2017
    ctx->pc = 0x316844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8215 << 16));
    // 0x316848: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x316848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x31684c: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x31684cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x316850: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x316850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x316854: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x316854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x316858: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x316858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x31685c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x31685cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x316860: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x316860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x316864: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x316864u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x316868: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x316868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31686c: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x31686cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x316870: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x316870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x316874: 0xfe000010  sd          $zero, 0x10($s0)
    ctx->pc = 0x316874u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
    // 0x316878: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x316878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31687c: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x31687cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x316880: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x316880u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x316884: 0x3c0360ab  lui         $v1, 0x60AB
    ctx->pc = 0x316884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24747 << 16));
    // 0x316888: 0xfe050020  sd          $a1, 0x20($s0)
    ctx->pc = 0x316888u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
    // 0x31688c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31688cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x316890: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x316890u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x316894: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x316894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x316898: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x316898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31689c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31689cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3168a0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3168a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3168a4: 0xfe040030  sd          $a0, 0x30($s0)
    ctx->pc = 0x3168a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 4));
    // 0x3168a8: 0x34633513  ori         $v1, $v1, 0x3513
    ctx->pc = 0x3168a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x3168ac: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x3168acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x3168b0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3168b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3168b4: 0x8c860370  lw          $a2, 0x370($a0)
    ctx->pc = 0x3168b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x3168b8: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3168b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3168bc: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x3168bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x3168c0: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x3168c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x3168c4: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3168c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x3168c8: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x3168c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x3168cc: 0x24c50040  addiu       $a1, $a2, 0x40
    ctx->pc = 0x3168ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3168d0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3168d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3168d4: 0xac650370  sw          $a1, 0x370($v1)
    ctx->pc = 0x3168d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 5));
    // 0x3168d8: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x3168d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3168dc: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x3168dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x3168e0: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x3168e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x3168e4: 0x8c8e0370  lw          $t6, 0x370($a0)
    ctx->pc = 0x3168e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x3168e8: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3168e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x3168ec: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3168ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3168f0: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x3168f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x3168f4: 0xadc30004  sw          $v1, 0x4($t6)
    ctx->pc = 0x3168f4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 3));
    // 0x3168f8: 0x8da30370  lw          $v1, 0x370($t5)
    ctx->pc = 0x3168f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x3168fc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3168fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x316900: 0x8d830370  lw          $v1, 0x370($t4)
    ctx->pc = 0x316900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x316904: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x316904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x316908: 0x8d6b0370  lw          $t3, 0x370($t3)
    ctx->pc = 0x316908u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31690c: 0x25630010  addiu       $v1, $t3, 0x10
    ctx->pc = 0x31690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x316910: 0xad430370  sw          $v1, 0x370($t2)
    ctx->pc = 0x316910u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 880), GPR_U32(ctx, 3));
    // 0x316914: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x316914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x316918: 0xad630010  sw          $v1, 0x10($t3)
    ctx->pc = 0x316918u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 3));
    // 0x31691c: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x31691cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x316920: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x316920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x316924: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x316924u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x316928: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x316928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31692c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x31692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x316930: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x316930u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x316934: 0x8ce30370  lw          $v1, 0x370($a3)
    ctx->pc = 0x316934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x316938: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x316938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x31693c: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31693cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x316940: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x316940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x316944: 0xaca30370  sw          $v1, 0x370($a1)
    ctx->pc = 0x316944u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 3));
    // 0x316948: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x316948u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x31694c: 0x9082b280  lbu         $v0, -0x4D80($a0)
    ctx->pc = 0x31694cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x316950: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x316950u;
    {
        const bool branch_taken_0x316950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316950) {
            ctx->pc = 0x316954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316950u;
            // 0x316954: 0x141100  sll         $v0, $s4, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3169A8u;
            goto label_3169a8;
        }
    }
    ctx->pc = 0x316958u;
    // 0x316958: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x316958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x31695c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x31695cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x316960: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x316960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x316964: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x316964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x316968: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x316968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x31696c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x31696cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x316970: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x316970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x316974: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x316974u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x316978: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x316978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x31697c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x31697cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x316980: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x316980u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x316984: 0x0  nop
    ctx->pc = 0x316984u;
    // NOP
    // 0x316988: 0x1810  mfhi        $v1
    ctx->pc = 0x316988u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31698c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x316990: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x316990u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x316994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x316994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316998: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x316998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x31699c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31699cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3169a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3169A0u;
    {
        const bool branch_taken_0x3169a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3169A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169A0u;
        // 0x3169a4: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169a0) {
            ctx->pc = 0x3169ACu;
            goto label_3169ac;
        }
    }
    ctx->pc = 0x3169A8u;
label_3169a8:
    // 0x3169a8: 0x24467100  addiu       $a2, $v0, 0x7100
    ctx->pc = 0x3169a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_3169ac:
    // 0x3169ac: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3169acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3169b0: 0x161900  sll         $v1, $s6, 4
    ctx->pc = 0x3169b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x3169b4: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x3169b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3169b8: 0x246f6c00  addiu       $t7, $v1, 0x6C00
    ctx->pc = 0x3169b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x3169bc: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3169bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3169c0: 0x2405a833  addiu       $a1, $zero, -0x57CD
    ctx->pc = 0x3169c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x3169c4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3169c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3169c8: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x3169c8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x3169cc: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x3169ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x3169d0: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x3169d0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x3169d4: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x3169d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x3169d8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3169d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3169dc: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x3169dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x3169e0: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x3169e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x3169e4: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x3169e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x3169e8: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x3169e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x3169ec: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x3169ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x3169f0: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x3169f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x3169f4: 0x8c700370  lw          $s0, 0x370($v1)
    ctx->pc = 0x3169f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3169f8: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3169f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x3169fc: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3169fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x316a00: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x316a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x316a04: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x316a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x316a08: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x316a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x316a0c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x316a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x316a10: 0x8dd00370  lw          $s0, 0x370($t6)
    ctx->pc = 0x316a10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x316a14: 0x260e0010  addiu       $t6, $s0, 0x10
    ctx->pc = 0x316a14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x316a18: 0xac4e0370  sw          $t6, 0x370($v0)
    ctx->pc = 0x316a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 14));
    // 0x316a1c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x316a1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x316a20: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x316a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x316a24: 0x8dad0370  lw          $t5, 0x370($t5)
    ctx->pc = 0x316a24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x316a28: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x316a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x316a2c: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x316a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x316a30: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x316a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x316a34: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x316a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x316a38: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x316a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x316a3c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x316a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x316a40: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x316a40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x316a44: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x316a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316a48: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x316a48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x316a4c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x316a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x316a50: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x316a50u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x316a54: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x316a54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x316a58: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x316a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x316a5c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x316a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x316a60: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x316a60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x316a64: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x316a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x316a68: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x316a68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x316a6c: 0x8cc20370  lw          $v0, 0x370($a2)
    ctx->pc = 0x316a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x316a70: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x316a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x316a74: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x316a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x316a78: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x316a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x316a7c: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x316a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x316a80: 0xacaf0010  sw          $t7, 0x10($a1)
    ctx->pc = 0x316a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 15));
    // 0x316a84: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x316a84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x316a88: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x316A88u;
    {
        const bool branch_taken_0x316a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316a88) {
            ctx->pc = 0x316A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316A88u;
            // 0x316a8c: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316AD8u;
            goto label_316ad8;
        }
    }
    ctx->pc = 0x316A90u;
    // 0x316a90: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x316a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x316a94: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x316a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x316a98: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x316a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x316a9c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x316a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x316aa0: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x316aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x316aa4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x316aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x316aa8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x316aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316aac: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x316aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x316ab0: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x316ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x316ab4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x316ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x316ab8: 0x0  nop
    ctx->pc = 0x316ab8u;
    // NOP
    // 0x316abc: 0x1010  mfhi        $v0
    ctx->pc = 0x316abcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x316ac0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x316ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x316ac4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x316ac4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x316ac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316acc: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x316accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x316ad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x316AD0u;
    {
        const bool branch_taken_0x316ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AD0u;
        // 0x316ad4: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ad0) {
            ctx->pc = 0x316ADCu;
            goto label_316adc;
        }
    }
    ctx->pc = 0x316AD8u;
label_316ad8:
    // 0x316ad8: 0x24447100  addiu       $a0, $v0, 0x7100
    ctx->pc = 0x316ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_316adc:
    // 0x316adc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x316adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x316ae0: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x316ae0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x316ae4: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x316ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x316ae8: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x316ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x316aec: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x316aecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x316af0: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x316af0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x316af4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x316af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x316af8: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x316af8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x316afc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x316afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x316b00: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x316b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x316b04: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x316b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x316b08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x316b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x316b0c: 0x346b000c  ori         $t3, $v1, 0xC
    ctx->pc = 0x316b0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x316b10: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x316b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x316b14: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x316b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x316b18: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x316b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x316b1c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x316b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x316b20: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x316b20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x316b24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x316b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b28: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x316b28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x316b2c: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x316b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x316b30: 0xac4a0190  sw          $t2, 0x190($v0)
    ctx->pc = 0x316b30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 10)); // MMIO: 0x70000190
    // 0x316b34: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x316b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x316b38: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x316b38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x316b3c: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x316b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x316b40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x316b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x316b44: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x316B44u;
    SET_GPR_U32(ctx, 31, 0x316B4Cu);
    ctx->pc = 0x316B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B44u;
    // 0x316b48: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x316B44u, 0x316B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B4Cu;
label_316b4c:
    // 0x316b4c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x316b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x316b50: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x316b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x316b54: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x316b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x316b58: 0xc040a04  jal         func_102810
    ctx->pc = 0x316B58u;
    SET_GPR_U32(ctx, 31, 0x316B60u);
    ctx->pc = 0x316B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B58u;
    // 0x316b5c: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x316B58u, 0x316B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B60u;
label_316b60:
    // 0x316b60: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x316b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_316b64:
    // 0x316b64: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x316b64u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x316b68: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x316b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x316b6c: 0x0  nop
    ctx->pc = 0x316b6cu;
    // NOP
    // 0x316b70: 0x0  nop
    ctx->pc = 0x316b70u;
    // NOP
    // 0x316b74: 0x0  nop
    ctx->pc = 0x316b74u;
    // NOP
    // 0x316b78: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x316B78u;
    {
        const bool branch_taken_0x316b78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x316b78) {
            ctx->pc = 0x316B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316b64;
        }
    }
    ctx->pc = 0x316B80u;
    // 0x316b80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x316b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x316b84: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x316b84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x316b88: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x316b88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316b8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x316b8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316b90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x316b90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316b94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x316b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x316b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x316BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BA8u;
        // 0x316bac: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316BB0u;
    // 0x316bb0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x316bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x316bb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x316bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x316bb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x316bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x316bbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x316bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x316bc0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x316bc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bc4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x316bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x316bc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x316bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x316bcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x316bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x316bd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x316bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x316bd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x316bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x316bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x316bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x316be0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x316be0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x316be4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x316be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x316be8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x316be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x316bec: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x316becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x316bf0: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x316bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x316bf4: 0x94e6001c  lhu         $a2, 0x1C($a3)
    ctx->pc = 0x316bf4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x316bf8: 0x90e40018  lbu         $a0, 0x18($a3)
    ctx->pc = 0x316bf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x316bfc: 0x24f30020  addiu       $s3, $a3, 0x20
    ctx->pc = 0x316bfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x316c00: 0x94e5001e  lhu         $a1, 0x1E($a3)
    ctx->pc = 0x316c00u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x316c04: 0x7fa40130  sq          $a0, 0x130($sp)
    ctx->pc = 0x316c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 4));
    // 0x316c08: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x316c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x316c0c: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x316C0Cu;
    {
        const bool branch_taken_0x316c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x316C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C0Cu;
        // 0x316c10: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c0c) {
            ctx->pc = 0x316CACu;
            goto label_316cac;
        }
    }
    ctx->pc = 0x316C14u;
    // 0x316c14: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x316c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x316c18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316c18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316c1c: 0x0  nop
    ctx->pc = 0x316c1cu;
    // NOP
    // 0x316c20: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x316c20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x316c24: 0x8fc8002c  lw          $t0, 0x2C($fp)
    ctx->pc = 0x316c24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x316c28: 0xc7c30034  lwc1        $f3, 0x34($fp)
    ctx->pc = 0x316c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x316c2c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x316c2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316c30: 0x0  nop
    ctx->pc = 0x316c30u;
    // NOP
    // 0x316c34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x316c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x316c38: 0x1044823  subu        $t1, $t0, $a0
    ctx->pc = 0x316c38u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x316c3c: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x316c3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x316c40: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316c40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x316c44: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x316c44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x316c48: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x316C48u;
    {
        const bool branch_taken_0x316c48 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x316C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C48u;
        // 0x316c4c: 0xafa401f0  sw          $a0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c48) {
            ctx->pc = 0x316C5Cu;
            goto label_316c5c;
        }
    }
    ctx->pc = 0x316C50u;
    // 0x316c50: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x316c50u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316c54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x316C54u;
    {
        const bool branch_taken_0x316c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C54u;
        // 0x316c58: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c54) {
            ctx->pc = 0x316C78u;
            goto label_316c78;
        }
    }
    ctx->pc = 0x316C5Cu;
label_316c5c:
    // 0x316c5c: 0x93842  srl         $a3, $t1, 1
    ctx->pc = 0x316c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x316c60: 0x31240001  andi        $a0, $t1, 0x1
    ctx->pc = 0x316c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x316c64: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x316c64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x316c68: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x316c68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316c6c: 0x0  nop
    ctx->pc = 0x316c6cu;
    // NOP
    // 0x316c70: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x316c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x316c74: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x316c74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_316c78:
    // 0x316c78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316c7c: 0x0  nop
    ctx->pc = 0x316c7cu;
    // NOP
    // 0x316c80: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x316c80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x316c84: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x316c84u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x316c88: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x316c8c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x316c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x316c90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x316c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x316c94: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x316c94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x316c98: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x316C98u;
    {
        const bool branch_taken_0x316c98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x316C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C98u;
        // 0x316c9c: 0xafa401e0  sw          $a0, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c98) {
            ctx->pc = 0x316D58u;
            goto label_316d58;
        }
    }
    ctx->pc = 0x316CA0u;
    // 0x316ca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x316ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x316ca4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x316CA4u;
    {
        const bool branch_taken_0x316ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CA4u;
        // 0x316ca8: 0xafa401e0  sw          $a0, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ca4) {
            ctx->pc = 0x316D58u;
            goto label_316d58;
        }
    }
    ctx->pc = 0x316CACu;
label_316cac:
    // 0x316cac: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x316cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x316cb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316cb4: 0x0  nop
    ctx->pc = 0x316cb4u;
    // NOP
    // 0x316cb8: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x316cb8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x316cbc: 0x8fc8002c  lw          $t0, 0x2C($fp)
    ctx->pc = 0x316cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x316cc0: 0xc7c30034  lwc1        $f3, 0x34($fp)
    ctx->pc = 0x316cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x316cc4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x316cc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316cc8: 0x0  nop
    ctx->pc = 0x316cc8u;
    // NOP
    // 0x316ccc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x316cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x316cd0: 0x1044823  subu        $t1, $t0, $a0
    ctx->pc = 0x316cd0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x316cd4: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x316cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x316cd8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316cd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x316cdc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x316cdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x316ce0: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x316CE0u;
    {
        const bool branch_taken_0x316ce0 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x316CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CE0u;
        // 0x316ce4: 0xafa401f0  sw          $a0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ce0) {
            ctx->pc = 0x316CF4u;
            goto label_316cf4;
        }
    }
    ctx->pc = 0x316CE8u;
    // 0x316ce8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x316ce8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316cec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x316CECu;
    {
        const bool branch_taken_0x316cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CECu;
        // 0x316cf0: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316cec) {
            ctx->pc = 0x316D10u;
            goto label_316d10;
        }
    }
    ctx->pc = 0x316CF4u;
label_316cf4:
    // 0x316cf4: 0x93842  srl         $a3, $t1, 1
    ctx->pc = 0x316cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x316cf8: 0x31240001  andi        $a0, $t1, 0x1
    ctx->pc = 0x316cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x316cfc: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x316cfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x316d00: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x316d00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316d04: 0x0  nop
    ctx->pc = 0x316d04u;
    // NOP
    // 0x316d08: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x316d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x316d0c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x316d0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_316d10:
    // 0x316d10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316d14: 0x0  nop
    ctx->pc = 0x316d14u;
    // NOP
    // 0x316d18: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x316d18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x316d1c: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x316d1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x316d20: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316d20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x316d24: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x316d24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x316d28: 0x0  nop
    ctx->pc = 0x316d28u;
    // NOP
    // 0x316d2c: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x316d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x316d30: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x316d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x316d34: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x316d34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316d38: 0x0  nop
    ctx->pc = 0x316d38u;
    // NOP
    // 0x316d3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x316d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x316d40: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x316d40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x316d44: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x316D44u;
    {
        const bool branch_taken_0x316d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316d44) {
            ctx->pc = 0x316D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316D44u;
            // 0x316d48: 0x30630002  andi        $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x316D5Cu;
            goto label_316d5c;
        }
    }
    ctx->pc = 0x316D4Cu;
    // 0x316d4c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x316d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x316d50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x316d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x316d54: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x316d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
label_316d58:
    // 0x316d58: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x316d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_316d5c:
    // 0x316d5c: 0x54600027  bnel        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x316D5Cu;
    {
        const bool branch_taken_0x316d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x316d5c) {
            ctx->pc = 0x316D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316D5Cu;
            // 0x316d60: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316DFCu;
            goto label_316dfc;
        }
    }
    ctx->pc = 0x316D64u;
    // 0x316d64: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x316d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x316d68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316d6c: 0x0  nop
    ctx->pc = 0x316d6cu;
    // NOP
    // 0x316d70: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x316d70u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x316d74: 0x8fc70030  lw          $a3, 0x30($fp)
    ctx->pc = 0x316d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x316d78: 0xc7c30038  lwc1        $f3, 0x38($fp)
    ctx->pc = 0x316d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x316d7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x316d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316d80: 0x0  nop
    ctx->pc = 0x316d80u;
    // NOP
    // 0x316d84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x316d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x316d88: 0xe34823  subu        $t1, $a3, $v1
    ctx->pc = 0x316d88u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x316d8c: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x316d8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x316d90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316d90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x316d94: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x316d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x316d98: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x316D98u;
    {
        const bool branch_taken_0x316d98 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x316D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D98u;
        // 0x316d9c: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316d98) {
            ctx->pc = 0x316DACu;
            goto label_316dac;
        }
    }
    ctx->pc = 0x316DA0u;
    // 0x316da0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x316da0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x316DA4u;
    {
        const bool branch_taken_0x316da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DA4u;
        // 0x316da8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316da4) {
            ctx->pc = 0x316DC8u;
            goto label_316dc8;
        }
    }
    ctx->pc = 0x316DACu;
label_316dac:
    // 0x316dac: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x316dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x316db0: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x316db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x316db4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x316db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x316db8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x316db8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316dbc: 0x0  nop
    ctx->pc = 0x316dbcu;
    // NOP
    // 0x316dc0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x316dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x316dc4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x316dc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_316dc8:
    // 0x316dc8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316dcc: 0x0  nop
    ctx->pc = 0x316dccu;
    // NOP
    // 0x316dd0: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x316dd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x316dd4: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x316dd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x316dd8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316dd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x316ddc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x316ddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x316de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x316de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x316de4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x316de4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x316de8: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x316DE8u;
    {
        const bool branch_taken_0x316de8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x316DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DE8u;
        // 0x316dec: 0xafa301c0  sw          $v1, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316de8) {
            ctx->pc = 0x316E8Cu;
            goto label_316e8c;
        }
    }
    ctx->pc = 0x316DF0u;
    // 0x316df0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316df4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x316DF4u;
    {
        const bool branch_taken_0x316df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316DF4u;
        // 0x316df8: 0xafa301c0  sw          $v1, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316df4) {
            ctx->pc = 0x316E8Cu;
            goto label_316e8c;
        }
    }
    ctx->pc = 0x316DFCu;
label_316dfc:
    // 0x316dfc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316e00: 0x0  nop
    ctx->pc = 0x316e00u;
    // NOP
    // 0x316e04: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x316e04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x316e08: 0x8fc70030  lw          $a3, 0x30($fp)
    ctx->pc = 0x316e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x316e0c: 0xc7c30038  lwc1        $f3, 0x38($fp)
    ctx->pc = 0x316e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x316e10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x316e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316e14: 0x0  nop
    ctx->pc = 0x316e14u;
    // NOP
    // 0x316e18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x316e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x316e1c: 0xe34823  subu        $t1, $a3, $v1
    ctx->pc = 0x316e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x316e20: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x316e20u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x316e24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x316e28: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x316e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x316e2c: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x316E2Cu;
    {
        const bool branch_taken_0x316e2c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x316E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E2Cu;
        // 0x316e30: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e2c) {
            ctx->pc = 0x316E40u;
            goto label_316e40;
        }
    }
    ctx->pc = 0x316E34u;
    // 0x316e34: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x316e34u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316e38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x316E38u;
    {
        const bool branch_taken_0x316e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E38u;
        // 0x316e3c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e38) {
            ctx->pc = 0x316E5Cu;
            goto label_316e5c;
        }
    }
    ctx->pc = 0x316E40u;
label_316e40:
    // 0x316e40: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x316e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x316e44: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x316e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x316e48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x316e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x316e4c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x316e4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316e50: 0x0  nop
    ctx->pc = 0x316e50u;
    // NOP
    // 0x316e54: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x316e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x316e58: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x316e58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_316e5c:
    // 0x316e5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x316e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x316e60: 0x0  nop
    ctx->pc = 0x316e60u;
    // NOP
    // 0x316e64: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x316e64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x316e68: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x316e68u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x316e6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x316e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x316e70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x316e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x316e74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x316e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x316e78: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x316e78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x316e7c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x316E7Cu;
    {
        const bool branch_taken_0x316e7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x316E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E7Cu;
        // 0x316e80: 0xafa301c0  sw          $v1, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e7c) {
            ctx->pc = 0x316E8Cu;
            goto label_316e8c;
        }
    }
    ctx->pc = 0x316E84u;
    // 0x316e84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316e88: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x316e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
label_316e8c:
    // 0x316e8c: 0x8fd70028  lw          $s7, 0x28($fp)
    ctx->pc = 0x316e8cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x316e90: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x316e90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x316e94: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x316e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x316e98: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x316e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x316e9c: 0x8fd60024  lw          $s6, 0x24($fp)
    ctx->pc = 0x316e9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x316ea0: 0x2e73821  addu        $a3, $s7, $a3
    ctx->pc = 0x316ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x316ea4: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x316ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
    // 0x316ea8: 0x8a5024  and         $t2, $a0, $t2
    ctx->pc = 0x316ea8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x316eac: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x316eacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x316eb0: 0xa5e02  srl         $t3, $t2, 24
    ctx->pc = 0x316eb0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x316eb4: 0x75403  sra         $t2, $a3, 16
    ctx->pc = 0x316eb4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 7), 16));
    // 0x316eb8: 0x2c84021  addu        $t0, $s6, $t0
    ctx->pc = 0x316eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x316ebc: 0x25670001  addiu       $a3, $t3, 0x1
    ctx->pc = 0x316ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x316ec0: 0x7fa80120  sq          $t0, 0x120($sp)
    ctx->pc = 0x316ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 8));
    // 0x316ec4: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x316ec4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x316ec8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x316ec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x316ecc: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x316eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
    // 0x316ed0: 0xa3843  sra         $a3, $t2, 1
    ctx->pc = 0x316ed0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 10), 1));
    // 0x316ed4: 0x8fc8000c  lw          $t0, 0xC($fp)
    ctx->pc = 0x316ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x316ed8: 0xafa70160  sw          $a3, 0x160($sp)
    ctx->pc = 0x316ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 7));
    // 0x316edc: 0x3087ff00  andi        $a3, $a0, 0xFF00
    ctx->pc = 0x316edcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x316ee0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x316ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x316ee4: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x316ee4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x316ee8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x316ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x316eec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x316eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x316ef0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x316ef0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x316ef4: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x316ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x316ef8: 0x72043  sra         $a0, $a3, 1
    ctx->pc = 0x316ef8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 1));
    // 0x316efc: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x316efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x316f00: 0x8223c  dsll32      $a0, $t0, 8
    ctx->pc = 0x316f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 8));
    // 0x316f04: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x316f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x316f08: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316F08u;
    {
        const bool branch_taken_0x316f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F08u;
        // 0x316f0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f08) {
            ctx->pc = 0x316F2Cu;
            goto label_316f2c;
        }
    }
    ctx->pc = 0x316F10u;
    // 0x316f10: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x316f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x316f14: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x316f14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x316f18: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x316f18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x316f1c: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x316f1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x316f20: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x316f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x316f24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x316f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316f28: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x316f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
label_316f2c:
    // 0x316f2c: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x316f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x316f30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x316f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316f34: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x316f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x316f38: 0x68202  srl         $s0, $a2, 8
    ctx->pc = 0x316f38u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x316f3c: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x316f3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x316f40: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x316F40u;
    {
        const bool branch_taken_0x316f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x316F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F40u;
        // 0x316f44: 0x3c140002  lui         $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f40) {
            ctx->pc = 0x316F4Cu;
            goto label_316f4c;
        }
    }
    ctx->pc = 0x316F48u;
    // 0x316f48: 0x3c140004  lui         $s4, 0x4
    ctx->pc = 0x316f48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4 << 16));
label_316f4c:
    // 0x316f4c: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x316f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x316f50: 0x1060020d  beqz        $v1, . + 4 + (0x20D << 2)
    ctx->pc = 0x316F50u;
    {
        const bool branch_taken_0x316f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F50u;
        // 0x316f54: 0xafa001b0  sw          $zero, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f50) {
            ctx->pc = 0x317788u;
            goto label_317788;
        }
    }
    ctx->pc = 0x316F58u;
    // 0x316f58: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x316f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x316f5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x316f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f60: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x316f60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x316f64: 0x330fc  dsll32      $a2, $v1, 3
    ctx->pc = 0x316f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 3));
    // 0x316f68: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x316f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x316f6c: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x316f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x316f70: 0x3c032021  lui         $v1, 0x2021
    ctx->pc = 0x316f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8225 << 16));
    // 0x316f74: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x316f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x316f78: 0x34633480  ori         $v1, $v1, 0x3480
    ctx->pc = 0x316f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13440);
    // 0x316f7c: 0x3c042001  lui         $a0, 0x2001
    ctx->pc = 0x316f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8193 << 16));
    // 0x316f80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x316f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x316f84: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x316f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x316f88: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x316f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x316f8c: 0x34833480  ori         $v1, $a0, 0x3480
    ctx->pc = 0x316f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13440);
    // 0x316f90: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x316f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x316f94: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x316f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x316f98: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x316f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_316f9c:
    // 0x316f9c: 0x120001f2  beqz        $s0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x316F9Cu;
    {
        const bool branch_taken_0x316f9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F9Cu;
        // 0x316fa0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f9c) {
            ctx->pc = 0x317768u;
            goto label_317768;
        }
    }
    ctx->pc = 0x316FA4u;
    // 0x316fa4: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x316fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x316fa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x316fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316fac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316fb0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x316fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x316fb4: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x316fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x316fb8: 0x2f21823  subu        $v1, $s7, $s2
    ctx->pc = 0x316fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x316fbc: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x316fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x316fc0: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x316fc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x316fc4: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x316fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x316fc8: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x316fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x316fcc: 0x0  nop
    ctx->pc = 0x316fccu;
    // NOP
label_316fd0:
    // 0x316fd0: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x316fd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x316fd4: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x316fd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x316fd8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x316FD8u;
    {
        const bool branch_taken_0x316fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FD8u;
        // 0x316fdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316fd8) {
            ctx->pc = 0x316FF8u;
            goto label_316ff8;
        }
    }
    ctx->pc = 0x316FE0u;
    // 0x316fe0: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x316fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x316fe4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x316fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x316fe8: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x316fe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x316fec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x316FECu;
    {
        const bool branch_taken_0x316fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x316fec) {
            ctx->pc = 0x317000u;
            goto label_317000;
        }
    }
    ctx->pc = 0x316FF4u;
    // 0x316ff4: 0x0  nop
    ctx->pc = 0x316ff4u;
    // NOP
label_316ff8:
    // 0x316ff8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x316FF8u;
    {
        const bool branch_taken_0x316ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FF8u;
        // 0x316ffc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ff8) {
            ctx->pc = 0x317028u;
            goto label_317028;
        }
    }
    ctx->pc = 0x317000u;
label_317000:
    // 0x317000: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x317000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x317004: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x317004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x317008: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x317008u;
    {
        const bool branch_taken_0x317008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x317008) {
            ctx->pc = 0x317020u;
            goto label_317020;
        }
    }
    ctx->pc = 0x317010u;
    // 0x317010: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x317010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x317014: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x317014u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x317018: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317018u;
    {
        const bool branch_taken_0x317018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x317018) {
            ctx->pc = 0x317028u;
            goto label_317028;
        }
    }
    ctx->pc = 0x317020u;
label_317020:
    // 0x317020: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x317020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317024: 0x0  nop
    ctx->pc = 0x317024u;
    // NOP
label_317028:
    // 0x317028: 0x108001c9  beqz        $a0, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x317028u;
    {
        const bool branch_taken_0x317028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x317028) {
            ctx->pc = 0x317750u;
            goto label_317750;
        }
    }
    ctx->pc = 0x317030u;
    // 0x317030: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x317030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x317034: 0x8c424790  lw          $v0, 0x4790($v0)
    ctx->pc = 0x317034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x317038: 0x12620035  beq         $s3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x317038u;
    {
        const bool branch_taken_0x317038 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x317038) {
            ctx->pc = 0x317110u;
            goto label_317110;
        }
    }
    ctx->pc = 0x317040u;
    // 0x317040: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x317040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x317044: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x317044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317048: 0x10470015  beq         $v0, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x317048u;
    {
        const bool branch_taken_0x317048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x317048) {
            ctx->pc = 0x3170A0u;
            goto label_3170a0;
        }
    }
    ctx->pc = 0x317050u;
    // 0x317050: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x317050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x317054: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x317054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x317058: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x317058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x31705c: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x31705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x317060: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x317060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x317064: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x317064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317068: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x317068u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31706c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31706Cu;
    SET_GPR_U32(ctx, 31, 0x317074u);
    ctx->pc = 0x317070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31706Cu;
    // 0x317070: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x31706Cu, 0x317074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317074u;
label_317074:
    // 0x317074: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x317074u;
    SET_GPR_U32(ctx, 31, 0x31707Cu);
    ctx->pc = 0x317078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317074u;
    // 0x317078: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x317074u, 0x31707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31707Cu;
label_31707c:
    // 0x31707c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31707cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x317080: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x317080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317084: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x317084u;
    SET_GPR_U32(ctx, 31, 0x31708Cu);
    ctx->pc = 0x317088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317084u;
    // 0x317088: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x317084u, 0x31708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31708Cu;
label_31708c:
    // 0x31708c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31708cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317090: 0xc040454  jal         func_101150
    ctx->pc = 0x317090u;
    SET_GPR_U32(ctx, 31, 0x317098u);
    ctx->pc = 0x317094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317090u;
    // 0x317094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x317090u, 0x317098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317098u;
label_317098:
    // 0x317098: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x317098u;
    {
        const bool branch_taken_0x317098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317098) {
            ctx->pc = 0x3170F0u;
            goto label_3170f0;
        }
    }
    ctx->pc = 0x3170A0u;
label_3170a0:
    // 0x3170a0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3170a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3170a4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x3170a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3170a8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x3170a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x3170ac: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x3170acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x3170b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3170b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3170b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3170b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3170b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3170b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3170bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3170bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3170c0: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3170C0u;
    SET_GPR_U32(ctx, 31, 0x3170C8u);
    ctx->pc = 0x3170C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170C0u;
    // 0x3170c4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x3170C0u, 0x3170C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170C8u;
label_3170c8:
    // 0x3170c8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3170C8u;
    SET_GPR_U32(ctx, 31, 0x3170D0u);
    ctx->pc = 0x3170CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170C8u;
    // 0x3170cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3170C8u, 0x3170D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170D0u;
label_3170d0:
    // 0x3170d0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3170d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3170d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3170d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3170d8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3170D8u;
    SET_GPR_U32(ctx, 31, 0x3170E0u);
    ctx->pc = 0x3170DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170D8u;
    // 0x3170dc: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3170D8u, 0x3170E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170E0u;
label_3170e0:
    // 0x3170e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3170e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3170e4: 0xc040454  jal         func_101150
    ctx->pc = 0x3170E4u;
    SET_GPR_U32(ctx, 31, 0x3170ECu);
    ctx->pc = 0x3170E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3170E4u;
    // 0x3170e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3170E4u, 0x3170ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3170ECu;
label_3170ec:
    // 0x3170ec: 0x0  nop
    ctx->pc = 0x3170ecu;
    // NOP
label_3170f0:
    // 0x3170f0: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3170f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3170f4: 0xac534790  sw          $s3, 0x4790($v0)
    ctx->pc = 0x3170f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 19));
    // 0x3170f8: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3170f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3170fc: 0xac404794  sw          $zero, 0x4794($v0)
    ctx->pc = 0x3170fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18324), GPR_U32(ctx, 0));
    // 0x317100: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x317100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x317104: 0xac404798  sw          $zero, 0x4798($v0)
    ctx->pc = 0x317104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18328), GPR_U32(ctx, 0));
    // 0x317108: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x317108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31710c: 0xac40479c  sw          $zero, 0x479C($v0)
    ctx->pc = 0x31710cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18332), GPR_U32(ctx, 0));
label_317110:
    // 0x317110: 0x2d1082a  slt         $at, $s6, $s1
    ctx->pc = 0x317110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x317114: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x317114u;
    {
        const bool branch_taken_0x317114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x317114) {
            ctx->pc = 0x317118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317114u;
            // 0x317118: 0x2d12023  subu        $a0, $s6, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317120u;
            goto label_317120;
        }
    }
    ctx->pc = 0x31711Cu;
    // 0x31711c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317120:
    // 0x317120: 0x2f2082a  slt         $at, $s7, $s2
    ctx->pc = 0x317120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x317124: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x317124u;
    {
        const bool branch_taken_0x317124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x317124) {
            ctx->pc = 0x317128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317124u;
            // 0x317128: 0x8fa30190  lw          $v1, 0x190($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317130u;
            goto label_317130;
        }
    }
    ctx->pc = 0x31712Cu;
    // 0x31712c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31712cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317130:
    // 0x317130: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x317130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x317134: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x317134u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x317138: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x317138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31713c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x31713cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x317140: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x317140u;
    {
        const bool branch_taken_0x317140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x317140) {
            ctx->pc = 0x317144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317140u;
            // 0x317144: 0x515823  subu        $t3, $v0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31714Cu;
            goto label_31714c;
        }
    }
    ctx->pc = 0x317148u;
    // 0x317148: 0x240b0100  addiu       $t3, $zero, 0x100
    ctx->pc = 0x317148u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_31714c:
    // 0x31714c: 0x7ba50110  lq          $a1, 0x110($sp)
    ctx->pc = 0x31714cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x317150: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x317150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x317154: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x317154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x317158: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x317158u;
    {
        const bool branch_taken_0x317158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x317158) {
            ctx->pc = 0x317170u;
            goto label_317170;
        }
    }
    ctx->pc = 0x317160u;
    // 0x317160: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x317160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x317164: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x317164u;
    {
        const bool branch_taken_0x317164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317164u;
        // 0x317168: 0x240f0100  addiu       $t7, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317164) {
            ctx->pc = 0x317180u;
            goto label_317180;
        }
    }
    ctx->pc = 0x31716Cu;
    // 0x31716c: 0x0  nop
    ctx->pc = 0x31716cu;
    // NOP
label_317170:
    // 0x317170: 0x8faf0180  lw          $t7, 0x180($sp)
    ctx->pc = 0x317170u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x317174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317178: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x317178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x31717c: 0x0  nop
    ctx->pc = 0x31717cu;
    // NOP
label_317180:
    // 0x317180: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x317180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x317184: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x317184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x317188: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x317188u;
    {
        const bool branch_taken_0x317188 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x317188) {
            ctx->pc = 0x3171F0u;
            goto label_3171f0;
        }
    }
    ctx->pc = 0x317190u;
    // 0x317190: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x317190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x317194: 0xb63023  subu        $a2, $a1, $s6
    ctx->pc = 0x317194u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x317198: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x317198u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31719c: 0x1712821  addu        $a1, $t3, $s1
    ctx->pc = 0x31719cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x3171a0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3171a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3171a4: 0xb62823  subu        $a1, $a1, $s6
    ctx->pc = 0x3171a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x3171a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3171a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3171ac: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x3171acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x3171b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3171b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3171b4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3171b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3171b8: 0x0  nop
    ctx->pc = 0x3171b8u;
    // NOP
    // 0x3171bc: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x3171bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3171c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3171c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3171c4: 0xc7c40034  lwc1        $f4, 0x34($fp)
    ctx->pc = 0x3171c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3171c8: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3171c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3171cc: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x3171ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x3171d0: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3171d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3171d4: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x3171d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x3171d8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3171d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3171dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3171dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3171e0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3171e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3171e4: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x3171e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x3171e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3171E8u;
    {
        const bool branch_taken_0x3171e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3171e8) {
            ctx->pc = 0x317248u;
            goto label_317248;
        }
    }
    ctx->pc = 0x3171F0u;
label_3171f0:
    // 0x3171f0: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x3171f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3171f4: 0xb63023  subu        $a2, $a1, $s6
    ctx->pc = 0x3171f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x3171f8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3171f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3171fc: 0x1712821  addu        $a1, $t3, $s1
    ctx->pc = 0x3171fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x317200: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x317200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x317204: 0xb62823  subu        $a1, $a1, $s6
    ctx->pc = 0x317204u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x317208: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317208u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31720c: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x31720cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x317210: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x317210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x317214: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x317214u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317218: 0x0  nop
    ctx->pc = 0x317218u;
    // NOP
    // 0x31721c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x31721cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x317220: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317224: 0xc7c40034  lwc1        $f4, 0x34($fp)
    ctx->pc = 0x317224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x317228: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317228u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x31722c: 0x4602209d  msub.s      $f2, $f4, $f2
    ctx->pc = 0x31722cu;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x317230: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317230u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317234: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x317234u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x317238: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31723c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31723cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x317240: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x317240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x317244: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x317244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
label_317248:
    // 0x317248: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x317248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x31724c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31724Cu;
    {
        const bool branch_taken_0x31724c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31724c) {
            ctx->pc = 0x3172B8u;
            goto label_3172b8;
        }
    }
    ctx->pc = 0x317254u;
    // 0x317254: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x317254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x317258: 0x573023  subu        $a2, $v0, $s7
    ctx->pc = 0x317258u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x31725c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x31725cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317260: 0x1f21021  addu        $v0, $t7, $s2
    ctx->pc = 0x317260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x317264: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x317264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x317268: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x317268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x31726c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31726cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317270: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x317270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x317274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x317274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x317278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x317278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31727c: 0x0  nop
    ctx->pc = 0x31727cu;
    // NOP
    // 0x317280: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x317280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x317284: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317288: 0xc7c40038  lwc1        $f4, 0x38($fp)
    ctx->pc = 0x317288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31728c: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x31728cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317290: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x317290u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x317294: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317294u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317298: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x317298u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x31729c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31729cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3172a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3172a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3172a4: 0x440d0800  mfc1        $t5, $f1
    ctx->pc = 0x3172a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x3172a8: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x3172a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x3172ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3172ACu;
    {
        const bool branch_taken_0x3172ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3172ac) {
            ctx->pc = 0x317310u;
            goto label_317310;
        }
    }
    ctx->pc = 0x3172B4u;
    // 0x3172b4: 0x0  nop
    ctx->pc = 0x3172b4u;
    // NOP
label_3172b8:
    // 0x3172b8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x3172b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3172bc: 0x573023  subu        $a2, $v0, $s7
    ctx->pc = 0x3172bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x3172c0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3172c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3172c4: 0x1f21021  addu        $v0, $t7, $s2
    ctx->pc = 0x3172c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x3172c8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3172c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3172cc: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x3172ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x3172d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3172d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3172d4: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x3172d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x3172d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3172d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3172dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3172dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3172e0: 0x0  nop
    ctx->pc = 0x3172e0u;
    // NOP
    // 0x3172e4: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x3172e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3172e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3172e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3172ec: 0xc7c40038  lwc1        $f4, 0x38($fp)
    ctx->pc = 0x3172ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3172f0: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3172f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3172f4: 0x4602209d  msub.s      $f2, $f4, $f2
    ctx->pc = 0x3172f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x3172f8: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3172f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3172fc: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x3172fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x317300: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317300u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x317304: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x317308: 0x440d0800  mfc1        $t5, $f1
    ctx->pc = 0x317308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x31730c: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x31730cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_317310:
    // 0x317310: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x317310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x317314: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x317314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x317318: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x317318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31731c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x31731cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x317320: 0xacc20370  sw          $v0, 0x370($a2)
    ctx->pc = 0x317320u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 880), GPR_U32(ctx, 2));
    // 0x317324: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x317324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x317328: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x317328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31732c: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x31732cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x317330: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x317330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x317334: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x317334u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x317338: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x317338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31733c: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x31733cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x317340: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x317340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317344: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x317344u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x317348: 0xfc460018  sd          $a2, 0x18($v0)
    ctx->pc = 0x317348u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
    // 0x31734c: 0x7ba60130  lq          $a2, 0x130($sp)
    ctx->pc = 0x31734cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x317350: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x317350u;
    {
        const bool branch_taken_0x317350 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x317350) {
            ctx->pc = 0x317368u;
            goto label_317368;
        }
    }
    ctx->pc = 0x317358u;
    // 0x317358: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x317358u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31735c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31735Cu;
    {
        const bool branch_taken_0x31735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31735Cu;
        // 0x317360: 0xfc460020  sd          $a2, 0x20($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31735c) {
            ctx->pc = 0x317370u;
            goto label_317370;
        }
    }
    ctx->pc = 0x317364u;
    // 0x317364: 0x0  nop
    ctx->pc = 0x317364u;
    // NOP
label_317368:
    // 0x317368: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x317368u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31736c: 0xfc460020  sd          $a2, 0x20($v0)
    ctx->pc = 0x31736cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 6));
label_317370:
    // 0x317370: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x317370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x317374: 0x24490008  addiu       $t1, $v0, 0x8
    ctx->pc = 0x317374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x317378: 0x3c0660ab  lui         $a2, 0x60AB
    ctx->pc = 0x317378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24747 << 16));
    // 0x31737c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x31737cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x317380: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x317380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x317384: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x317384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x317388: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x317388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31738c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x31738cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x317390: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x317390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x317394: 0x24596c00  addiu       $t9, $v0, 0x6C00
    ctx->pc = 0x317394u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x317398: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x317398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31739c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31739cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3173a0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3173a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3173a4: 0x8c450370  lw          $a1, 0x370($v0)
    ctx->pc = 0x3173a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3173a8: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x3173a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x3173ac: 0x3c18009d  lui         $t8, 0x9D
    ctx->pc = 0x3173acu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)157 << 16));
    // 0x3173b0: 0xfca70028  sd          $a3, 0x28($a1)
    ctx->pc = 0x3173b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 7));
    // 0x3173b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3173b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3173b8: 0xfca00030  sd          $zero, 0x30($a1)
    ctx->pc = 0x3173b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 0));
    // 0x3173bc: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3173bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x3173c0: 0xfca40038  sd          $a0, 0x38($a1)
    ctx->pc = 0x3173c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 4));
    // 0x3173c4: 0xfca30040  sd          $v1, 0x40($a1)
    ctx->pc = 0x3173c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 3));
    // 0x3173c8: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x3173c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3173cc: 0xfca20048  sd          $v0, 0x48($a1)
    ctx->pc = 0x3173ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 2));
    // 0x3173d0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3173d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3173d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3173d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3173d8: 0xfca40050  sd          $a0, 0x50($a1)
    ctx->pc = 0x3173d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 4));
    // 0x3173dc: 0x34423513  ori         $v0, $v0, 0x3513
    ctx->pc = 0x3173dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x3173e0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3173e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3173e4: 0xfca20058  sd          $v0, 0x58($a1)
    ctx->pc = 0x3173e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 88), GPR_U64(ctx, 2));
    // 0x3173e8: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3173e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3173ec: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3173ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3173f0: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3173f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x3173f4: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x3173f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3173f8: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3173f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3173fc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3173fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x317400: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x317400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x317404: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x317404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x317408: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x317408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x31740c: 0xaca60370  sw          $a2, 0x370($a1)
    ctx->pc = 0x31740cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 6));
    // 0x317410: 0xac490060  sw          $t1, 0x60($v0)
    ctx->pc = 0x317410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 9));
    // 0x317414: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x317414u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x317418: 0x8c890370  lw          $t1, 0x370($a0)
    ctx->pc = 0x317418u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31741c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31741cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x317420: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x317420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x317424: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x317424u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x317428: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x317428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31742c: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x31742cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x317430: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x317430u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x317434: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x317434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x317438: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x317438u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x31743c: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x31743cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x317440: 0x8ce90370  lw          $t1, 0x370($a3)
    ctx->pc = 0x317440u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x317444: 0x7ba700a0  lq          $a3, 0xA0($sp)
    ctx->pc = 0x317444u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x317448: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x317448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x31744c: 0xace80370  sw          $t0, 0x370($a3)
    ctx->pc = 0x31744cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 8));
    // 0x317450: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x317450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x317454: 0xad270010  sw          $a3, 0x10($t1)
    ctx->pc = 0x317454u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 7));
    // 0x317458: 0x8cc70370  lw          $a3, 0x370($a2)
    ctx->pc = 0x317458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31745c: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x31745cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x317460: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x317460u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x317464: 0x8ca60370  lw          $a2, 0x370($a1)
    ctx->pc = 0x317464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x317468: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x317468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31746c: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x31746cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x317470: 0x8c850370  lw          $a1, 0x370($a0)
    ctx->pc = 0x317470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x317474: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x317474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x317478: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x317478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x31747c: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x31747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x317480: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x317480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x317484: 0xac430370  sw          $v1, 0x370($v0)
    ctx->pc = 0x317484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 3));
    // 0x317488: 0xac990010  sw          $t9, 0x10($a0)
    ctx->pc = 0x317488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 25));
    // 0x31748c: 0x9302b280  lbu         $v0, -0x4D80($t8)
    ctx->pc = 0x31748cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4294947456)));
    // 0x317490: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x317490u;
    {
        const bool branch_taken_0x317490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317490) {
            ctx->pc = 0x317494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317490u;
            // 0x317494: 0xd1100  sll         $v0, $t5, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3174E8u;
            goto label_3174e8;
        }
    }
    ctx->pc = 0x317498u;
    // 0x317498: 0xd1900  sll         $v1, $t5, 4
    ctx->pc = 0x317498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x31749c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x31749cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x3174a0: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x3174a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x3174a4: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x3174a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x3174a8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3174a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3174ac: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3174acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3174b0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3174b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3174b4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3174b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3174b8: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x3174b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3174bc: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x3174bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3174c0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x3174c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3174c4: 0x0  nop
    ctx->pc = 0x3174c4u;
    // NOP
    // 0x3174c8: 0x1810  mfhi        $v1
    ctx->pc = 0x3174c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3174cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3174ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3174d0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3174d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3174d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3174d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3174d8: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x3174d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x3174dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3174dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3174e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3174E0u;
    {
        const bool branch_taken_0x3174e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3174E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174E0u;
        // 0x3174e4: 0x621824  and         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3174e0) {
            ctx->pc = 0x3174ECu;
            goto label_3174ec;
        }
    }
    ctx->pc = 0x3174E8u;
label_3174e8:
    // 0x3174e8: 0x24437100  addiu       $v1, $v0, 0x7100
    ctx->pc = 0x3174e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_3174ec:
    // 0x3174ec: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x3174ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x3174f0: 0xe2100  sll         $a0, $t6, 4
    ctx->pc = 0x3174f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x3174f4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3174f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3174f8: 0x248e6c00  addiu       $t6, $a0, 0x6C00
    ctx->pc = 0x3174f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x3174fc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3174fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x317500: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x317500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x317504: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x317504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x317508: 0xfc900  sll         $t9, $t7, 4
    ctx->pc = 0x317508u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x31750c: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31750cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x317510: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x317510u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x317514: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x317514u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x317518: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x317518u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31751c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x31751cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x317520: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x317520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x317524: 0x8ca30370  lw          $v1, 0x370($a1)
    ctx->pc = 0x317524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x317528: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x317528u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31752c: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31752cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x317530: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x317530u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x317534: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x317534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x317538: 0x3c1801dc  lui         $t8, 0x1DC
    ctx->pc = 0x317538u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)476 << 16));
    // 0x31753c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x31753cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x317540: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x317540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x317544: 0x8c8f0370  lw          $t7, 0x370($a0)
    ctx->pc = 0x317544u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x317548: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x317548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31754c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x317550: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x317550u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x317554: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x317554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x317558: 0x8daf0370  lw          $t7, 0x370($t5)
    ctx->pc = 0x317558u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31755c: 0x25ed0010  addiu       $t5, $t7, 0x10
    ctx->pc = 0x31755cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x317560: 0xad6d0370  sw          $t5, 0x370($t3)
    ctx->pc = 0x317560u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 880), GPR_U32(ctx, 13));
    // 0x317564: 0x7bab00c0  lq          $t3, 0xC0($sp)
    ctx->pc = 0x317564u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x317568: 0xadeb0010  sw          $t3, 0x10($t7)
    ctx->pc = 0x317568u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 11));
    // 0x31756c: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x31756cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x317570: 0xad590004  sw          $t9, 0x4($t2)
    ctx->pc = 0x317570u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 25));
    // 0x317574: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x317574u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x317578: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x317578u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x31757c: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x31757cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x317580: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x317580u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x317584: 0x8ce80370  lw          $t0, 0x370($a3)
    ctx->pc = 0x317584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x317588: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x317588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x31758c: 0xacc70370  sw          $a3, 0x370($a2)
    ctx->pc = 0x31758cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 880), GPR_U32(ctx, 7));
    // 0x317590: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x317590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x317594: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x317594u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x317598: 0x8ca60370  lw          $a2, 0x370($a1)
    ctx->pc = 0x317598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31759c: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x31759cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3175a0: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3175a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x3175a4: 0x8c850370  lw          $a1, 0x370($a0)
    ctx->pc = 0x3175a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x3175a8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x3175a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3175ac: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x3175acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x3175b0: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x3175b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3175b4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x3175b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3175b8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3175b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3175bc: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x3175bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3175c0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3175c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3175c4: 0xaf020370  sw          $v0, 0x370($t8)
    ctx->pc = 0x3175c4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 880), GPR_U32(ctx, 2));
    // 0x3175c8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x3175c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3175cc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3175CCu;
    {
        const bool branch_taken_0x3175cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3175D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175CCu;
        // 0x3175d0: 0xac6e0010  sw          $t6, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175cc) {
            ctx->pc = 0x317640u;
            goto label_317640;
        }
    }
    ctx->pc = 0x3175D4u;
    // 0x3175d4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3175d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3175d8: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x3175d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x3175dc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x3175DCu;
    {
        const bool branch_taken_0x3175dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3175dc) {
            ctx->pc = 0x3175E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3175DCu;
            // 0x3175e0: 0xc1100  sll         $v0, $t4, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31762Cu;
            goto label_31762c;
        }
    }
    ctx->pc = 0x3175E4u;
    // 0x3175e4: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x3175e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x3175e8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x3175e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x3175ec: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x3175ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x3175f0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3175f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3175f4: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x3175f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3175f8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3175f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3175fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3175fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x317600: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x317600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x317604: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x317604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x317608: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x317608u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x31760c: 0x0  nop
    ctx->pc = 0x31760cu;
    // NOP
    // 0x317610: 0x1010  mfhi        $v0
    ctx->pc = 0x317610u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x317614: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x317614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x317618: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x317618u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x31761c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x317620: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x317620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x317624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x317624u;
    {
        const bool branch_taken_0x317624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317624u;
        // 0x317628: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317624) {
            ctx->pc = 0x317630u;
            goto label_317630;
        }
    }
    ctx->pc = 0x31762Cu;
label_31762c:
    // 0x31762c: 0x24437100  addiu       $v1, $v0, 0x7100
    ctx->pc = 0x31762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_317630:
    // 0x317630: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x317630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x317634: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x317634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x317638: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x317638u;
    {
        const bool branch_taken_0x317638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317638u;
        // 0x31763c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317638) {
            ctx->pc = 0x3176B0u;
            goto label_3176b0;
        }
    }
    ctx->pc = 0x317640u;
label_317640:
    // 0x317640: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x317640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x317644: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x317644u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x317648: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x317648u;
    {
        const bool branch_taken_0x317648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317648) {
            ctx->pc = 0x31764Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317648u;
            // 0x31764c: 0xc1100  sll         $v0, $t4, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3176A0u;
            goto label_3176a0;
        }
    }
    ctx->pc = 0x317650u;
    // 0x317650: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x317650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x317654: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x317654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x317658: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x317658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x31765c: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x31765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x317660: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x317660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x317664: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x317664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x317668: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x317668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31766c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x31766cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x317670: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x317670u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x317674: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x317674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x317678: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x317678u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x31767c: 0x0  nop
    ctx->pc = 0x31767cu;
    // NOP
    // 0x317680: 0x1810  mfhi        $v1
    ctx->pc = 0x317680u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x317684: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x317684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x317688: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x317688u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31768c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x317690: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x317690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x317694: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x317694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x317698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x317698u;
    {
        const bool branch_taken_0x317698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317698u;
        // 0x31769c: 0x621824  and         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317698) {
            ctx->pc = 0x3176A4u;
            goto label_3176a4;
        }
    }
    ctx->pc = 0x3176A0u;
label_3176a0:
    // 0x3176a0: 0x24437100  addiu       $v1, $v0, 0x7100
    ctx->pc = 0x3176a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_3176a4:
    // 0x3176a4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3176a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3176a8: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x3176a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3176ac: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3176acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_3176b0:
    // 0x3176b0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3176b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3176b4: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x3176b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3176b8: 0x2409a833  addiu       $t1, $zero, -0x57CD
    ctx->pc = 0x3176b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x3176bc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3176bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3176c0: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x3176c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x3176c4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3176c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x3176c8: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3176c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x3176cc: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x3176ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x3176d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3176d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3176d4: 0x8c4b0370  lw          $t3, 0x370($v0)
    ctx->pc = 0x3176d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3176d8: 0x346a000c  ori         $t2, $v1, 0xC
    ctx->pc = 0x3176d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x3176dc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3176dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3176e0: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x3176e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x3176e4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3176e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3176e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3176e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3176ec: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x3176ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x3176f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3176f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3176f4: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x3176f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x3176f8: 0xac490190  sw          $t1, 0x190($v0)
    ctx->pc = 0x3176f8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 9)); // MMIO: 0x70000190
    // 0x3176fc: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x3176fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x317700: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x317700u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x317704: 0xacaa00c0  sw          $t2, 0xC0($a1)
    ctx->pc = 0x317704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 10));
    // 0x317708: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x317708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31770c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31770Cu;
    SET_GPR_U32(ctx, 31, 0x317714u);
    ctx->pc = 0x317710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31770Cu;
    // 0x317710: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31770Cu, 0x317714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317714u;
label_317714:
    // 0x317714: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x317714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x317718: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x317718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31771c: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31771cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x317720: 0xc040a04  jal         func_102810
    ctx->pc = 0x317720u;
    SET_GPR_U32(ctx, 31, 0x317728u);
    ctx->pc = 0x317724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317720u;
    // 0x317724: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x317720u, 0x317728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317728u;
label_317728:
    // 0x317728: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x317728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
    // 0x31772c: 0x0  nop
    ctx->pc = 0x31772cu;
    // NOP
label_317730:
    // 0x317730: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x317730u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x317734: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x317734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x317738: 0x0  nop
    ctx->pc = 0x317738u;
    // NOP
    // 0x31773c: 0x0  nop
    ctx->pc = 0x31773cu;
    // NOP
    // 0x317740: 0x0  nop
    ctx->pc = 0x317740u;
    // NOP
    // 0x317744: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x317744u;
    {
        const bool branch_taken_0x317744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x317744) {
            ctx->pc = 0x317730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317730;
        }
    }
    ctx->pc = 0x31774Cu;
    // 0x31774c: 0x0  nop
    ctx->pc = 0x31774cu;
    // NOP
label_317750:
    // 0x317750: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x317750u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x317754: 0x2b0182b  sltu        $v1, $s5, $s0
    ctx->pc = 0x317754u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x317758: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x317758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x31775c: 0x1460fe1c  bnez        $v1, . + 4 + (-0x1E4 << 2)
    ctx->pc = 0x31775Cu;
    {
        const bool branch_taken_0x31775c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31775Cu;
        // 0x317760: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31775c) {
            ctx->pc = 0x316FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316fd0;
        }
    }
    ctx->pc = 0x317764u;
    // 0x317764: 0x0  nop
    ctx->pc = 0x317764u;
    // NOP
label_317768:
    // 0x317768: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x317768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x31776c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x317770: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x317770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x317774: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x317774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317778: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x317778u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31777c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x31777cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x317780: 0x1460fe06  bnez        $v1, . + 4 + (-0x1FA << 2)
    ctx->pc = 0x317780u;
    {
        const bool branch_taken_0x317780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317780u;
        // 0x317784: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317780) {
            ctx->pc = 0x316F9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316f9c;
        }
    }
    ctx->pc = 0x317788u;
label_317788:
    // 0x317788: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x317788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31778c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31778cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x317790: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x317790u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x317794: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x317794u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x317798: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x317798u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31779c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31779cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3177a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3177a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3177a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3177a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3177a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3177a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3177ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3177acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3177b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3177B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3177B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177B0u;
        // 0x3177b4: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3177B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3177B8u;
    // 0x3177b8: 0x0  nop
    ctx->pc = 0x3177b8u;
    // NOP
    // 0x3177bc: 0x0  nop
    ctx->pc = 0x3177bcu;
    // NOP
    // 0x3177c0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x3177c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x3177c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3177c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3177c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3177c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3177cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3177ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3177d0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3177d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3177d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3177d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3177d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3177d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3177dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3177dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3177e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3177e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3177e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3177e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3177e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3177e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3177ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3177ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3177f0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3177f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3177f4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3177f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3177f8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3177f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3177fc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3177fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x317800: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x317800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x317804: 0x94a7001c  lhu         $a3, 0x1C($a1)
    ctx->pc = 0x317804u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x317808: 0x94a6001e  lhu         $a2, 0x1E($a1)
    ctx->pc = 0x317808u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x31780c: 0x24b30020  addiu       $s3, $a1, 0x20
    ctx->pc = 0x31780cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x317810: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x317810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x317814: 0x90a50018  lbu         $a1, 0x18($a1)
    ctx->pc = 0x317814u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x317818: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x317818u;
    {
        const bool branch_taken_0x317818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317818u;
        // 0x31781c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317818) {
            ctx->pc = 0x3178B8u;
            goto label_3178b8;
        }
    }
    ctx->pc = 0x317820u;
    // 0x317820: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x317820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x317824: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317828: 0x0  nop
    ctx->pc = 0x317828u;
    // NOP
    // 0x31782c: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x31782cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x317830: 0x8fc9002c  lw          $t1, 0x2C($fp)
    ctx->pc = 0x317830u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x317834: 0xc7c30034  lwc1        $f3, 0x34($fp)
    ctx->pc = 0x317834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x317838: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x317838u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31783c: 0x0  nop
    ctx->pc = 0x31783cu;
    // NOP
    // 0x317840: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x317840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x317844: 0x1245023  subu        $t2, $t1, $a0
    ctx->pc = 0x317844u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x317848: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x317848u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x31784c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31784cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x317850: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x317850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x317854: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x317854u;
    {
        const bool branch_taken_0x317854 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x317858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317854u;
        // 0x317858: 0xafa401f0  sw          $a0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317854) {
            ctx->pc = 0x317868u;
            goto label_317868;
        }
    }
    ctx->pc = 0x31785Cu;
    // 0x31785c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x31785cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317860: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x317860u;
    {
        const bool branch_taken_0x317860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317860u;
        // 0x317864: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317860) {
            ctx->pc = 0x317884u;
            goto label_317884;
        }
    }
    ctx->pc = 0x317868u;
label_317868:
    // 0x317868: 0xa4042  srl         $t0, $t2, 1
    ctx->pc = 0x317868u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x31786c: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x31786cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x317870: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x317870u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x317874: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x317874u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317878: 0x0  nop
    ctx->pc = 0x317878u;
    // NOP
    // 0x31787c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x31787cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x317880: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x317880u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_317884:
    // 0x317884: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317888: 0x0  nop
    ctx->pc = 0x317888u;
    // NOP
    // 0x31788c: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x31788cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x317890: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x317890u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x317894: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317894u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x317898: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x317898u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31789c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31789cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3178a0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x3178a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3178a4: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x3178A4u;
    {
        const bool branch_taken_0x3178a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3178A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178A4u;
        // 0x3178a8: 0xafa401e0  sw          $a0, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3178a4) {
            ctx->pc = 0x317964u;
            goto label_317964;
        }
    }
    ctx->pc = 0x3178ACu;
    // 0x3178ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3178acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3178b0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3178B0u;
    {
        const bool branch_taken_0x3178b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3178B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178B0u;
        // 0x3178b4: 0xafa401e0  sw          $a0, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3178b0) {
            ctx->pc = 0x317964u;
            goto label_317964;
        }
    }
    ctx->pc = 0x3178B8u;
label_3178b8:
    // 0x3178b8: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x3178b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3178bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3178bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3178c0: 0x0  nop
    ctx->pc = 0x3178c0u;
    // NOP
    // 0x3178c4: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x3178c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x3178c8: 0x8fc9002c  lw          $t1, 0x2C($fp)
    ctx->pc = 0x3178c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x3178cc: 0xc7c30034  lwc1        $f3, 0x34($fp)
    ctx->pc = 0x3178ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3178d0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3178d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3178d4: 0x0  nop
    ctx->pc = 0x3178d4u;
    // NOP
    // 0x3178d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3178d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3178dc: 0x1245023  subu        $t2, $t1, $a0
    ctx->pc = 0x3178dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x3178e0: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x3178e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x3178e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3178e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3178e8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3178e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3178ec: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3178ECu;
    {
        const bool branch_taken_0x3178ec = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x3178F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178ECu;
        // 0x3178f0: 0xafa401f0  sw          $a0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3178ec) {
            ctx->pc = 0x317900u;
            goto label_317900;
        }
    }
    ctx->pc = 0x3178F4u;
    // 0x3178f4: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3178f4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3178f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3178F8u;
    {
        const bool branch_taken_0x3178f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3178FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178F8u;
        // 0x3178fc: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3178f8) {
            ctx->pc = 0x31791Cu;
            goto label_31791c;
        }
    }
    ctx->pc = 0x317900u;
label_317900:
    // 0x317900: 0xa4042  srl         $t0, $t2, 1
    ctx->pc = 0x317900u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x317904: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x317904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x317908: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x317908u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x31790c: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x31790cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317910: 0x0  nop
    ctx->pc = 0x317910u;
    // NOP
    // 0x317914: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x317914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x317918: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x317918u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31791c:
    // 0x31791c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31791cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317920: 0x0  nop
    ctx->pc = 0x317920u;
    // NOP
    // 0x317924: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x317924u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x317928: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x317928u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x31792c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31792cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x317930: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x317930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x317934: 0x0  nop
    ctx->pc = 0x317934u;
    // NOP
    // 0x317938: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x317938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x31793c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x31793cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x317940: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x317940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317944: 0x0  nop
    ctx->pc = 0x317944u;
    // NOP
    // 0x317948: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x317948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31794c: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x31794cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317950: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x317950u;
    {
        const bool branch_taken_0x317950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317950) {
            ctx->pc = 0x317954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317950u;
            // 0x317954: 0x30630002  andi        $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317968u;
            goto label_317968;
        }
    }
    ctx->pc = 0x317958u;
    // 0x317958: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x317958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31795c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x317960: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x317960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
label_317964:
    // 0x317964: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x317964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_317968:
    // 0x317968: 0x54600027  bnel        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x317968u;
    {
        const bool branch_taken_0x317968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x317968) {
            ctx->pc = 0x31796Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317968u;
            // 0x31796c: 0x8fc3001c  lw          $v1, 0x1C($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317A08u;
            goto label_317a08;
        }
    }
    ctx->pc = 0x317970u;
    // 0x317970: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x317970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x317974: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317978: 0x0  nop
    ctx->pc = 0x317978u;
    // NOP
    // 0x31797c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x31797cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x317980: 0x8fc80030  lw          $t0, 0x30($fp)
    ctx->pc = 0x317980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x317984: 0xc7c30038  lwc1        $f3, 0x38($fp)
    ctx->pc = 0x317984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x317988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x317988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31798c: 0x0  nop
    ctx->pc = 0x31798cu;
    // NOP
    // 0x317990: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x317990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x317994: 0x1035023  subu        $t2, $t0, $v1
    ctx->pc = 0x317994u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x317998: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x317998u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x31799c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31799cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3179a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3179a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3179a4: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3179A4u;
    {
        const bool branch_taken_0x3179a4 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x3179A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179A4u;
        // 0x3179a8: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179a4) {
            ctx->pc = 0x3179B8u;
            goto label_3179b8;
        }
    }
    ctx->pc = 0x3179ACu;
    // 0x3179ac: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3179acu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3179b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3179B0u;
    {
        const bool branch_taken_0x3179b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3179B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179B0u;
        // 0x3179b4: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179b0) {
            ctx->pc = 0x3179D4u;
            goto label_3179d4;
        }
    }
    ctx->pc = 0x3179B8u;
label_3179b8:
    // 0x3179b8: 0xa2042  srl         $a0, $t2, 1
    ctx->pc = 0x3179b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x3179bc: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x3179bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x3179c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3179c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3179c4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3179c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3179c8: 0x0  nop
    ctx->pc = 0x3179c8u;
    // NOP
    // 0x3179cc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3179ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3179d0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3179d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3179d4:
    // 0x3179d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3179d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3179d8: 0x0  nop
    ctx->pc = 0x3179d8u;
    // NOP
    // 0x3179dc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3179dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x3179e0: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x3179e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3179e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3179e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3179e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3179e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3179ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3179ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3179f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3179f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3179f4: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x3179F4u;
    {
        const bool branch_taken_0x3179f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3179F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179F4u;
        // 0x3179f8: 0xafa301c0  sw          $v1, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179f4) {
            ctx->pc = 0x317A98u;
            goto label_317a98;
        }
    }
    ctx->pc = 0x3179FCu;
    // 0x3179fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3179fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x317a00: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x317A00u;
    {
        const bool branch_taken_0x317a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A00u;
        // 0x317a04: 0xafa301c0  sw          $v1, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a00) {
            ctx->pc = 0x317A98u;
            goto label_317a98;
        }
    }
    ctx->pc = 0x317A08u;
label_317a08:
    // 0x317a08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317a0c: 0x0  nop
    ctx->pc = 0x317a0cu;
    // NOP
    // 0x317a10: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x317a10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x317a14: 0x8fc80030  lw          $t0, 0x30($fp)
    ctx->pc = 0x317a14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x317a18: 0xc7c30038  lwc1        $f3, 0x38($fp)
    ctx->pc = 0x317a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x317a1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x317a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317a20: 0x0  nop
    ctx->pc = 0x317a20u;
    // NOP
    // 0x317a24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x317a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x317a28: 0x1035023  subu        $t2, $t0, $v1
    ctx->pc = 0x317a28u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x317a2c: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x317a2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x317a30: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317a30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x317a34: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x317a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x317a38: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x317A38u;
    {
        const bool branch_taken_0x317a38 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x317A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A38u;
        // 0x317a3c: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a38) {
            ctx->pc = 0x317A4Cu;
            goto label_317a4c;
        }
    }
    ctx->pc = 0x317A40u;
    // 0x317a40: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x317a40u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317a44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x317A44u;
    {
        const bool branch_taken_0x317a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A44u;
        // 0x317a48: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a44) {
            ctx->pc = 0x317A68u;
            goto label_317a68;
        }
    }
    ctx->pc = 0x317A4Cu;
label_317a4c:
    // 0x317a4c: 0xa2042  srl         $a0, $t2, 1
    ctx->pc = 0x317a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x317a50: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x317a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x317a54: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x317a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x317a58: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x317a58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317a5c: 0x0  nop
    ctx->pc = 0x317a5cu;
    // NOP
    // 0x317a60: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x317a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x317a64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x317a64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_317a68:
    // 0x317a68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317a6c: 0x0  nop
    ctx->pc = 0x317a6cu;
    // NOP
    // 0x317a70: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x317a70u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x317a74: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x317a74u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x317a78: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x317a7c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x317a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x317a80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x317a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x317a84: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x317a84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317a88: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x317A88u;
    {
        const bool branch_taken_0x317a88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x317A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A88u;
        // 0x317a8c: 0xafa301c0  sw          $v1, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a88) {
            ctx->pc = 0x317A98u;
            goto label_317a98;
        }
    }
    ctx->pc = 0x317A90u;
    // 0x317a90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x317a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x317a94: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x317a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
label_317a98:
    // 0x317a98: 0x8fd70028  lw          $s7, 0x28($fp)
    ctx->pc = 0x317a98u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x317a9c: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x317a9cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x317aa0: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x317aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317aa4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x317aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x317aa8: 0x8fd60024  lw          $s6, 0x24($fp)
    ctx->pc = 0x317aa8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x317aac: 0x2e84021  addu        $t0, $s7, $t0
    ctx->pc = 0x317aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
    // 0x317ab0: 0x7fa80120  sq          $t0, 0x120($sp)
    ctx->pc = 0x317ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 8));
    // 0x317ab4: 0x8b5824  and         $t3, $a0, $t3
    ctx->pc = 0x317ab4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x317ab8: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x317ab8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x317abc: 0xb6602  srl         $t4, $t3, 24
    ctx->pc = 0x317abcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 24));
    // 0x317ac0: 0x85c03  sra         $t3, $t0, 16
    ctx->pc = 0x317ac0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 8), 16));
    // 0x317ac4: 0x2c94821  addu        $t1, $s6, $t1
    ctx->pc = 0x317ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x317ac8: 0x25880001  addiu       $t0, $t4, 0x1
    ctx->pc = 0x317ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x317acc: 0x7fa90130  sq          $t1, 0x130($sp)
    ctx->pc = 0x317accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 9));
    // 0x317ad0: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x317ad0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x317ad4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x317ad4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x317ad8: 0xafa80170  sw          $t0, 0x170($sp)
    ctx->pc = 0x317ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 8));
    // 0x317adc: 0xb4043  sra         $t0, $t3, 1
    ctx->pc = 0x317adcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 1));
    // 0x317ae0: 0x8fc9000c  lw          $t1, 0xC($fp)
    ctx->pc = 0x317ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x317ae4: 0xafa80160  sw          $t0, 0x160($sp)
    ctx->pc = 0x317ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 8));
    // 0x317ae8: 0x3088ff00  andi        $t0, $a0, 0xFF00
    ctx->pc = 0x317ae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x317aec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x317aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x317af0: 0x84203  sra         $t0, $t0, 8
    ctx->pc = 0x317af0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 8));
    // 0x317af4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x317af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x317af8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x317af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x317afc: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x317afcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x317b00: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x317b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x317b04: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x317b04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
    // 0x317b08: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x317b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x317b0c: 0x9223c  dsll32      $a0, $t1, 8
    ctx->pc = 0x317b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 8));
    // 0x317b10: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x317b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x317b14: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317B14u;
    {
        const bool branch_taken_0x317b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B14u;
        // 0x317b18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b14) {
            ctx->pc = 0x317B38u;
            goto label_317b38;
        }
    }
    ctx->pc = 0x317B1Cu;
    // 0x317b1c: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x317b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x317b20: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x317b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x317b24: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x317b24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x317b28: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x317b28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x317b2c: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x317b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x317b30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x317b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x317b34: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x317b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
label_317b38:
    // 0x317b38: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x317b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x317b3c: 0x78202  srl         $s0, $a3, 8
    ctx->pc = 0x317b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x317b40: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x317b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x317b44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x317b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317b48: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x317B48u;
    {
        const bool branch_taken_0x317b48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x317B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B48u;
        // 0x317b4c: 0x3c140002  lui         $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b48) {
            ctx->pc = 0x317B54u;
            goto label_317b54;
        }
    }
    ctx->pc = 0x317B50u;
    // 0x317b50: 0x3c140004  lui         $s4, 0x4
    ctx->pc = 0x317b50u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4 << 16));
label_317b54:
    // 0x317b54: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x317b54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x317b58: 0x106001ef  beqz        $v1, . + 4 + (0x1EF << 2)
    ctx->pc = 0x317B58u;
    {
        const bool branch_taken_0x317b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B58u;
        // 0x317b5c: 0xafa001b0  sw          $zero, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b58) {
            ctx->pc = 0x318318u;
            goto label_318318;
        }
    }
    ctx->pc = 0x317B60u;
    // 0x317b60: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x317b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x317b64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x317b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b68: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x317b68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x317b6c: 0x318fc  dsll32      $v1, $v1, 3
    ctx->pc = 0x317b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x317b70: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x317b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_317b74:
    // 0x317b74: 0x120001e0  beqz        $s0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x317B74u;
    {
        const bool branch_taken_0x317b74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B74u;
        // 0x317b78: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b74) {
            ctx->pc = 0x3182F8u;
            goto label_3182f8;
        }
    }
    ctx->pc = 0x317B7Cu;
    // 0x317b7c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x317b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x317b80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x317b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x317b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x317b88: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x317b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x317b8c: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x317b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x317b90: 0x2f21823  subu        $v1, $s7, $s2
    ctx->pc = 0x317b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x317b94: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x317b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x317b98: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x317b98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x317b9c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x317b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x317ba0: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x317ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x317ba4: 0x0  nop
    ctx->pc = 0x317ba4u;
    // NOP
label_317ba8:
    // 0x317ba8: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x317ba8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x317bac: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x317bacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x317bb0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x317BB0u;
    {
        const bool branch_taken_0x317bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BB0u;
        // 0x317bb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bb0) {
            ctx->pc = 0x317BD0u;
            goto label_317bd0;
        }
    }
    ctx->pc = 0x317BB8u;
    // 0x317bb8: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x317bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x317bbc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x317bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x317bc0: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x317bc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x317bc4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x317BC4u;
    {
        const bool branch_taken_0x317bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x317bc4) {
            ctx->pc = 0x317BD8u;
            goto label_317bd8;
        }
    }
    ctx->pc = 0x317BCCu;
    // 0x317bcc: 0x0  nop
    ctx->pc = 0x317bccu;
    // NOP
label_317bd0:
    // 0x317bd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x317BD0u;
    {
        const bool branch_taken_0x317bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BD0u;
        // 0x317bd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bd0) {
            ctx->pc = 0x317C00u;
            goto label_317c00;
        }
    }
    ctx->pc = 0x317BD8u;
label_317bd8:
    // 0x317bd8: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x317bd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x317bdc: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x317bdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x317be0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x317BE0u;
    {
        const bool branch_taken_0x317be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x317be0) {
            ctx->pc = 0x317BF8u;
            goto label_317bf8;
        }
    }
    ctx->pc = 0x317BE8u;
    // 0x317be8: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x317be8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x317bec: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x317becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x317bf0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317BF0u;
    {
        const bool branch_taken_0x317bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x317bf0) {
            ctx->pc = 0x317C00u;
            goto label_317c00;
        }
    }
    ctx->pc = 0x317BF8u;
label_317bf8:
    // 0x317bf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x317bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317bfc: 0x0  nop
    ctx->pc = 0x317bfcu;
    // NOP
label_317c00:
    // 0x317c00: 0x108001b7  beqz        $a0, . + 4 + (0x1B7 << 2)
    ctx->pc = 0x317C00u;
    {
        const bool branch_taken_0x317c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x317c00) {
            ctx->pc = 0x3182E0u;
            goto label_3182e0;
        }
    }
    ctx->pc = 0x317C08u;
    // 0x317c08: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x317c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x317c0c: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x317c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x317c10: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x317c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x317c14: 0x24634790  addiu       $v1, $v1, 0x4790
    ctx->pc = 0x317c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18320));
    // 0x317c18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317c1c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x317c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x317c20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x317c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x317c24: 0x1262001a  beq         $s3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x317C24u;
    {
        const bool branch_taken_0x317c24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x317c24) {
            ctx->pc = 0x317C90u;
            goto label_317c90;
        }
    }
    ctx->pc = 0x317C2Cu;
    // 0x317c2c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x317c2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x317c30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x317c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x317c34: 0x246337b0  addiu       $v1, $v1, 0x37B0
    ctx->pc = 0x317c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14256));
    // 0x317c38: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x317c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x317c3c: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x317c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x317c40: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x317c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x317c44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x317c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x317c48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x317c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x317c4c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x317c4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x317c50: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x317c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317c54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x317c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x317c58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c5c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x317C5Cu;
    SET_GPR_U32(ctx, 31, 0x317C64u);
    ctx->pc = 0x317C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C5Cu;
    // 0x317c60: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x317C5Cu, 0x317C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C64u;
label_317c64:
    // 0x317c64: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x317C64u;
    SET_GPR_U32(ctx, 31, 0x317C6Cu);
    ctx->pc = 0x317C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C64u;
    // 0x317c68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x317C64u, 0x317C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C6Cu;
label_317c6c:
    // 0x317c6c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x317c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x317c70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x317c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c74: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x317C74u;
    SET_GPR_U32(ctx, 31, 0x317C7Cu);
    ctx->pc = 0x317C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C74u;
    // 0x317c78: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x317C74u, 0x317C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C7Cu;
label_317c7c:
    // 0x317c7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x317c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c80: 0xc040454  jal         func_101150
    ctx->pc = 0x317C80u;
    SET_GPR_U32(ctx, 31, 0x317C88u);
    ctx->pc = 0x317C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C80u;
    // 0x317c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x317C80u, 0x317C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317C88u;
label_317c88:
    // 0x317c88: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x317c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x317c8c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x317c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_317c90:
    // 0x317c90: 0x2d1082a  slt         $at, $s6, $s1
    ctx->pc = 0x317c90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x317c94: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x317C94u;
    {
        const bool branch_taken_0x317c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x317c94) {
            ctx->pc = 0x317C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317C94u;
            // 0x317c98: 0x2d12023  subu        $a0, $s6, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317CA0u;
            goto label_317ca0;
        }
    }
    ctx->pc = 0x317C9Cu;
    // 0x317c9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x317c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317ca0:
    // 0x317ca0: 0x2f2082a  slt         $at, $s7, $s2
    ctx->pc = 0x317ca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x317ca4: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x317CA4u;
    {
        const bool branch_taken_0x317ca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x317ca4) {
            ctx->pc = 0x317CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317CA4u;
            // 0x317ca8: 0x8fa30190  lw          $v1, 0x190($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317CB0u;
            goto label_317cb0;
        }
    }
    ctx->pc = 0x317CACu;
    // 0x317cac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x317cacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317cb0:
    // 0x317cb0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x317cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x317cb4: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x317cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x317cb8: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x317cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x317cbc: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x317cbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x317cc0: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x317CC0u;
    {
        const bool branch_taken_0x317cc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x317cc0) {
            ctx->pc = 0x317CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317CC0u;
            // 0x317cc4: 0x513823  subu        $a3, $v0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317CCCu;
            goto label_317ccc;
        }
    }
    ctx->pc = 0x317CC8u;
    // 0x317cc8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x317cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_317ccc:
    // 0x317ccc: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x317cccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x317cd0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x317cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x317cd4: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x317cd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x317cd8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x317CD8u;
    {
        const bool branch_taken_0x317cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x317cd8) {
            ctx->pc = 0x317CF0u;
            goto label_317cf0;
        }
    }
    ctx->pc = 0x317CE0u;
    // 0x317ce0: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x317ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x317ce4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x317CE4u;
    {
        const bool branch_taken_0x317ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CE4u;
        // 0x317ce8: 0x240a0100  addiu       $t2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ce4) {
            ctx->pc = 0x317D00u;
            goto label_317d00;
        }
    }
    ctx->pc = 0x317CECu;
    // 0x317cec: 0x0  nop
    ctx->pc = 0x317cecu;
    // NOP
label_317cf0:
    // 0x317cf0: 0x8faa0180  lw          $t2, 0x180($sp)
    ctx->pc = 0x317cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x317cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317cf8: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x317cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x317cfc: 0x0  nop
    ctx->pc = 0x317cfcu;
    // NOP
label_317d00:
    // 0x317d00: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x317d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x317d04: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x317d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x317d08: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x317D08u;
    {
        const bool branch_taken_0x317d08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x317d08) {
            ctx->pc = 0x317D70u;
            goto label_317d70;
        }
    }
    ctx->pc = 0x317D10u;
    // 0x317d10: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x317d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x317d14: 0xb63023  subu        $a2, $a1, $s6
    ctx->pc = 0x317d14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x317d18: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x317d18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317d1c: 0xf12821  addu        $a1, $a3, $s1
    ctx->pc = 0x317d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x317d20: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x317d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x317d24: 0xb62823  subu        $a1, $a1, $s6
    ctx->pc = 0x317d24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x317d28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317d28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d2c: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x317d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x317d30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x317d30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x317d34: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x317d34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317d38: 0x0  nop
    ctx->pc = 0x317d38u;
    // NOP
    // 0x317d3c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x317d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x317d40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317d40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317d44: 0xc7c40034  lwc1        $f4, 0x34($fp)
    ctx->pc = 0x317d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x317d48: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317d48u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317d4c: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x317d4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x317d50: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317d50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317d54: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x317d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x317d58: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317d58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x317d5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317d5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x317d60: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x317d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x317d64: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x317d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x317d68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x317D68u;
    {
        const bool branch_taken_0x317d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317d68) {
            ctx->pc = 0x317DC8u;
            goto label_317dc8;
        }
    }
    ctx->pc = 0x317D70u;
label_317d70:
    // 0x317d70: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x317d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x317d74: 0xb63023  subu        $a2, $a1, $s6
    ctx->pc = 0x317d74u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x317d78: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x317d78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317d7c: 0xf12821  addu        $a1, $a3, $s1
    ctx->pc = 0x317d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x317d80: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x317d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x317d84: 0xb62823  subu        $a1, $a1, $s6
    ctx->pc = 0x317d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x317d88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x317d88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d8c: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x317d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x317d90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x317d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x317d94: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x317d94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317d98: 0x0  nop
    ctx->pc = 0x317d98u;
    // NOP
    // 0x317d9c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x317d9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x317da0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317da4: 0xc7c40034  lwc1        $f4, 0x34($fp)
    ctx->pc = 0x317da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x317da8: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317da8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317dac: 0x4602209d  msub.s      $f2, $f4, $f2
    ctx->pc = 0x317dacu;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x317db0: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317db0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317db4: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x317db4u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x317db8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317db8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x317dbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x317dc0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x317dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x317dc4: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x317dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_317dc8:
    // 0x317dc8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x317dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x317dcc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x317DCCu;
    {
        const bool branch_taken_0x317dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317dcc) {
            ctx->pc = 0x317E38u;
            goto label_317e38;
        }
    }
    ctx->pc = 0x317DD4u;
    // 0x317dd4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x317dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x317dd8: 0x572823  subu        $a1, $v0, $s7
    ctx->pc = 0x317dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x317ddc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x317ddcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317de0: 0x1521021  addu        $v0, $t2, $s2
    ctx->pc = 0x317de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x317de4: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x317de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x317de8: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x317de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x317dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317df0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x317df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x317df4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x317df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x317df8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x317df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317dfc: 0x0  nop
    ctx->pc = 0x317dfcu;
    // NOP
    // 0x317e00: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x317e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x317e04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317e08: 0xc7c40038  lwc1        $f4, 0x38($fp)
    ctx->pc = 0x317e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x317e0c: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317e0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317e10: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x317e10u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x317e14: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317e14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317e18: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x317e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x317e1c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317e1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x317e20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x317e24: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x317e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x317e28: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x317e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x317e2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x317E2Cu;
    {
        const bool branch_taken_0x317e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e2c) {
            ctx->pc = 0x317E90u;
            goto label_317e90;
        }
    }
    ctx->pc = 0x317E34u;
    // 0x317e34: 0x0  nop
    ctx->pc = 0x317e34u;
    // NOP
label_317e38:
    // 0x317e38: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x317e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x317e3c: 0x572823  subu        $a1, $v0, $s7
    ctx->pc = 0x317e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x317e40: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x317e40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317e44: 0x1521021  addu        $v0, $t2, $s2
    ctx->pc = 0x317e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x317e48: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x317e48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x317e4c: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x317e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x317e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317e54: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x317e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x317e58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x317e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x317e5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x317e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317e60: 0x0  nop
    ctx->pc = 0x317e60u;
    // NOP
    // 0x317e64: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x317e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x317e68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317e6c: 0xc7c40038  lwc1        $f4, 0x38($fp)
    ctx->pc = 0x317e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x317e70: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317e70u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317e74: 0x4602209d  msub.s      $f2, $f4, $f2
    ctx->pc = 0x317e74u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x317e78: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x317e78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x317e7c: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x317e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x317e80: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317e80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x317e84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317e84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x317e88: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x317e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x317e8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x317e8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_317e90:
    // 0x317e90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x317e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x317e94: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x317e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x317e98: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x317e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x317e9c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x317e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x317ea0: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x317ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x317ea4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x317ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x317ea8: 0x248f0008  addiu       $t7, $a0, 0x8
    ctx->pc = 0x317ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x317eac: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x317eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x317eb0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x317eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x317eb4: 0x256b00d0  addiu       $t3, $t3, 0xD0
    ctx->pc = 0x317eb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 208));
    // 0x317eb8: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x317eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x317ebc: 0xac6b0370  sw          $t3, 0x370($v1)
    ctx->pc = 0x317ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 11));
    // 0x317ec0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x317ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317ec4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x317ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x317ec8: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x317ec8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x317ecc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x317eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x317ed0: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x317ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x317ed4: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x317ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x317ed8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x317ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x317edc: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x317edcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x317ee0: 0x248437b0  addiu       $a0, $a0, 0x37B0
    ctx->pc = 0x317ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14256));
    // 0x317ee4: 0xfd6c0008  sd          $t4, 0x8($t3)
    ctx->pc = 0x317ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 12));
    // 0x317ee8: 0x3c1801dc  lui         $t8, 0x1DC
    ctx->pc = 0x317ee8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)476 << 16));
    // 0x317eec: 0xfd600010  sd          $zero, 0x10($t3)
    ctx->pc = 0x317eecu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 0));
    // 0x317ef0: 0x3c1901dc  lui         $t9, 0x1DC
    ctx->pc = 0x317ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)476 << 16));
    // 0x317ef4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x317ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x317ef8: 0xfd660018  sd          $a2, 0x18($t3)
    ctx->pc = 0x317ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 6));
    // 0x317efc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x317efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x317f00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x317f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x317f04: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x317f04u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317f08: 0x3c062021  lui         $a2, 0x2021
    ctx->pc = 0x317f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8225 << 16));
    // 0x317f0c: 0xcc6025  or          $t4, $a2, $t4
    ctx->pc = 0x317f0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x317f10: 0x6c6825  or          $t5, $v1, $t4
    ctx->pc = 0x317f10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x317f14: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x317f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x317f18: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x317f18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x317f1c: 0x6603c  dsll32      $t4, $a2, 0
    ctx->pc = 0x317f1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) << (32 + 0));
    // 0x317f20: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x317f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x317f24: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x317f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x317f28: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x317f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x317f2c: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x317f2cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x317f30: 0xfd630020  sd          $v1, 0x20($t3)
    ctx->pc = 0x317f30u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 3));
    // 0x317f34: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x317f34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x317f38: 0xfd640028  sd          $a0, 0x28($t3)
    ctx->pc = 0x317f38u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 4));
    // 0x317f3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x317f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x317f40: 0x3c0460ab  lui         $a0, 0x60AB
    ctx->pc = 0x317f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24747 << 16));
    // 0x317f44: 0xfd600030  sd          $zero, 0x30($t3)
    ctx->pc = 0x317f44u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 0));
    // 0x317f48: 0xfd660038  sd          $a2, 0x38($t3)
    ctx->pc = 0x317f48u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 56), GPR_U64(ctx, 6));
    // 0x317f4c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x317f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x317f50: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x317f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x317f54: 0xfd6c0040  sd          $t4, 0x40($t3)
    ctx->pc = 0x317f54u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 64), GPR_U64(ctx, 12));
    // 0x317f58: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x317f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x317f5c: 0xfd630048  sd          $v1, 0x48($t3)
    ctx->pc = 0x317f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 72), GPR_U64(ctx, 3));
    // 0x317f60: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x317f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x317f64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x317f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x317f68: 0xfd640050  sd          $a0, 0x50($t3)
    ctx->pc = 0x317f68u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 80), GPR_U64(ctx, 4));
    // 0x317f6c: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x317f6cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x317f70: 0x34643513  ori         $a0, $v1, 0x3513
    ctx->pc = 0x317f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x317f74: 0xfd640058  sd          $a0, 0x58($t3)
    ctx->pc = 0x317f74u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 88), GPR_U64(ctx, 4));
    // 0x317f78: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x317f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x317f7c: 0x8c660370  lw          $a2, 0x370($v1)
    ctx->pc = 0x317f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x317f80: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x317f80u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x317f84: 0x7fab00a0  sq          $t3, 0xA0($sp)
    ctx->pc = 0x317f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 11));
    // 0x317f88: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x317f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x317f8c: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x317f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x317f90: 0x24ce0060  addiu       $t6, $a2, 0x60
    ctx->pc = 0x317f90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x317f94: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x317f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x317f98: 0xadae0370  sw          $t6, 0x370($t5)
    ctx->pc = 0x317f98u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 880), GPR_U32(ctx, 14));
    // 0x317f9c: 0xaccf0060  sw          $t7, 0x60($a2)
    ctx->pc = 0x317f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 15));
    // 0x317fa0: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x317fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x317fa4: 0x8d8f0370  lw          $t7, 0x370($t4)
    ctx->pc = 0x317fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x317fa8: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x317fa8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x317fac: 0x3c06009d  lui         $a2, 0x9D
    ctx->pc = 0x317facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)157 << 16));
    // 0x317fb0: 0xade50004  sw          $a1, 0x4($t7)
    ctx->pc = 0x317fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 5));
    // 0x317fb4: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x317fb4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x317fb8: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x317fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x317fbc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x317fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x317fc0: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x317fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x317fc4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x317fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x317fc8: 0x8f040370  lw          $a0, 0x370($t8)
    ctx->pc = 0x317fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 880)));
    // 0x317fcc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x317fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x317fd0: 0xaf230370  sw          $v1, 0x370($t9)
    ctx->pc = 0x317fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 880), GPR_U32(ctx, 3));
    // 0x317fd4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x317fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x317fd8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x317fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x317fdc: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x317fdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x317fe0: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x317fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x317fe4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x317fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x317fe8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x317fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x317fec: 0x8dc40370  lw          $a0, 0x370($t6)
    ctx->pc = 0x317fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x317ff0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x317ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x317ff4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x317ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x317ff8: 0x8da40370  lw          $a0, 0x370($t5)
    ctx->pc = 0x317ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x317ffc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x317ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x318000: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x318000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x318004: 0x8d840370  lw          $a0, 0x370($t4)
    ctx->pc = 0x318004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x318008: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x318008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31800c: 0xad630370  sw          $v1, 0x370($t3)
    ctx->pc = 0x31800cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 880), GPR_U32(ctx, 3));
    // 0x318010: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x318010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x318014: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x318014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x318018: 0x90c3b280  lbu         $v1, -0x4D80($a2)
    ctx->pc = 0x318018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294947456)));
    // 0x31801c: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x31801Cu;
    {
        const bool branch_taken_0x31801c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31801c) {
            ctx->pc = 0x318020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31801Cu;
            // 0x318020: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318074u;
            goto label_318074;
        }
    }
    ctx->pc = 0x318024u;
    // 0x318024: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x318024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x318028: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x318028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x31802c: 0x24857100  addiu       $a1, $a0, 0x7100
    ctx->pc = 0x31802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x318030: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x318030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x318034: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x318034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x318038: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x318038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31803c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x31803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x318040: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x318040u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x318044: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x318044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x318048: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x318048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31804c: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x31804cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x318050: 0x0  nop
    ctx->pc = 0x318050u;
    // NOP
    // 0x318054: 0x2010  mfhi        $a0
    ctx->pc = 0x318054u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x318058: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x318058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x31805c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x31805cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x318060: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x318060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x318064: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x318064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x318068: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x318068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31806c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31806Cu;
    {
        const bool branch_taken_0x31806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31806Cu;
        // 0x318070: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31806c) {
            ctx->pc = 0x318078u;
            goto label_318078;
        }
    }
    ctx->pc = 0x318074u;
label_318074:
    // 0x318074: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x318074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_318078:
    // 0x318078: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x318078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31807c: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x31807cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x318080: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x318080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x318084: 0x24ad6c00  addiu       $t5, $a1, 0x6C00
    ctx->pc = 0x318084u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x318088: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x318088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31808c: 0xa7100  sll         $t6, $t2, 4
    ctx->pc = 0x31808cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x318090: 0x8c660370  lw          $a2, 0x370($v1)
    ctx->pc = 0x318090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x318094: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x318094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x318098: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x318098u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x31809c: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31809cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x3180a0: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x3180a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x3180a4: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x3180a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x3180a8: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3180a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x3180ac: 0x2403a833  addiu       $v1, $zero, -0x57CD
    ctx->pc = 0x3180acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x3180b0: 0x8ca40370  lw          $a0, 0x370($a1)
    ctx->pc = 0x3180b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x3180b4: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x3180b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x3180b8: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x3180b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x3180bc: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x3180bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x3180c0: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x3180c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x3180c4: 0x3c1801dc  lui         $t8, 0x1DC
    ctx->pc = 0x3180c4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)476 << 16));
    // 0x3180c8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3180c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3180cc: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x3180ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x3180d0: 0x8def0370  lw          $t7, 0x370($t7)
    ctx->pc = 0x3180d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 880)));
    // 0x3180d4: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x3180d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x3180d8: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3180d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3180dc: 0x3c1901dc  lui         $t9, 0x1DC
    ctx->pc = 0x3180dcu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)476 << 16));
    // 0x3180e0: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x3180e0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x3180e4: 0x8d8f0370  lw          $t7, 0x370($t4)
    ctx->pc = 0x3180e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x3180e8: 0x25ec0010  addiu       $t4, $t7, 0x10
    ctx->pc = 0x3180e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x3180ec: 0xad6c0370  sw          $t4, 0x370($t3)
    ctx->pc = 0x3180ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 880), GPR_U32(ctx, 12));
    // 0x3180f0: 0x7bab00b0  lq          $t3, 0xB0($sp)
    ctx->pc = 0x3180f0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3180f4: 0xadeb0010  sw          $t3, 0x10($t7)
    ctx->pc = 0x3180f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 11));
    // 0x3180f8: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x3180f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x3180fc: 0xad4e0004  sw          $t6, 0x4($t2)
    ctx->pc = 0x3180fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 14));
    // 0x318100: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x318100u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x318104: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x318104u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x318108: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x318108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31810c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x31810cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x318110: 0x8ce80370  lw          $t0, 0x370($a3)
    ctx->pc = 0x318110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x318114: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x318114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x318118: 0xacc70370  sw          $a3, 0x370($a2)
    ctx->pc = 0x318118u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 880), GPR_U32(ctx, 7));
    // 0x31811c: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x31811cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x318120: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x318120u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x318124: 0x8ca60370  lw          $a2, 0x370($a1)
    ctx->pc = 0x318124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x318128: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x318128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x31812c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x31812cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x318130: 0x8c850370  lw          $a1, 0x370($a0)
    ctx->pc = 0x318130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x318134: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x318134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x318138: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x318138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x31813c: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x31813cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x318140: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x318140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x318144: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x318144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x318148: 0x8f040370  lw          $a0, 0x370($t8)
    ctx->pc = 0x318148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 880)));
    // 0x31814c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x31814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x318150: 0xaf230370  sw          $v1, 0x370($t9)
    ctx->pc = 0x318150u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 880), GPR_U32(ctx, 3));
    // 0x318154: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x318154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x318158: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x318158u;
    {
        const bool branch_taken_0x318158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318158u;
        // 0x31815c: 0xac8d0010  sw          $t5, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318158) {
            ctx->pc = 0x3181D0u;
            goto label_3181d0;
        }
    }
    ctx->pc = 0x318160u;
    // 0x318160: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x318160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x318164: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x318164u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x318168: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x318168u;
    {
        const bool branch_taken_0x318168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318168) {
            ctx->pc = 0x31816Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318168u;
            // 0x31816c: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3181B8u;
            goto label_3181b8;
        }
    }
    ctx->pc = 0x318170u;
    // 0x318170: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x318170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318174: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x318174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x318178: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x318178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x31817c: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x31817cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x318180: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x318180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x318184: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x318184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x318188: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x318188u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31818c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x31818cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x318190: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x318190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x318194: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x318194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x318198: 0x0  nop
    ctx->pc = 0x318198u;
    // NOP
    // 0x31819c: 0x1010  mfhi        $v0
    ctx->pc = 0x31819cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3181a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3181a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3181a4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x3181a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x3181a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3181a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3181ac: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x3181acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x3181b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3181B0u;
    {
        const bool branch_taken_0x3181b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3181B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181B0u;
        // 0x3181b4: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181b0) {
            ctx->pc = 0x3181BCu;
            goto label_3181bc;
        }
    }
    ctx->pc = 0x3181B8u;
label_3181b8:
    // 0x3181b8: 0x24437100  addiu       $v1, $v0, 0x7100
    ctx->pc = 0x3181b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_3181bc:
    // 0x3181bc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3181bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3181c0: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x3181c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x3181c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3181C4u;
    {
        const bool branch_taken_0x3181c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3181C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3181C4u;
        // 0x3181c8: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181c4) {
            ctx->pc = 0x318240u;
            goto label_318240;
        }
    }
    ctx->pc = 0x3181CCu;
    // 0x3181cc: 0x0  nop
    ctx->pc = 0x3181ccu;
    // NOP
label_3181d0:
    // 0x3181d0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3181d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3181d4: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x3181d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x3181d8: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3181D8u;
    {
        const bool branch_taken_0x3181d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3181d8) {
            ctx->pc = 0x3181DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3181D8u;
            // 0x3181dc: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318230u;
            goto label_318230;
        }
    }
    ctx->pc = 0x3181E0u;
    // 0x3181e0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3181e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3181e4: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x3181e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x3181e8: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x3181e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x3181ec: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x3181ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x3181f0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3181f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3181f4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3181f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3181f8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3181f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3181fc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3181fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x318200: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x318200u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x318204: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x318204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x318208: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x318208u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x31820c: 0x0  nop
    ctx->pc = 0x31820cu;
    // NOP
    // 0x318210: 0x1810  mfhi        $v1
    ctx->pc = 0x318210u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x318214: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x318214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x318218: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x318218u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31821c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x318220: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x318220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x318224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x318228u;
    {
        const bool branch_taken_0x318228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318228u;
        // 0x31822c: 0x621824  and         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318228) {
            ctx->pc = 0x318234u;
            goto label_318234;
        }
    }
    ctx->pc = 0x318230u;
label_318230:
    // 0x318230: 0x24437100  addiu       $v1, $v0, 0x7100
    ctx->pc = 0x318230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_318234:
    // 0x318234: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x318234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x318238: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x318238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31823c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x31823cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_318240:
    // 0x318240: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x318240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x318244: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x318244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x318248: 0x2409a833  addiu       $t1, $zero, -0x57CD
    ctx->pc = 0x318248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31824c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x318250: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x318250u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x318254: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x318254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x318258: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x318258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31825c: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x31825cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x318260: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x318260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x318264: 0x8c4b0370  lw          $t3, 0x370($v0)
    ctx->pc = 0x318264u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x318268: 0x346a000c  ori         $t2, $v1, 0xC
    ctx->pc = 0x318268u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x31826c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31826cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x318270: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x318270u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x318274: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x318274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x318278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x318278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31827c: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x31827cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x318280: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x318280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x318284: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x318284u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x318288: 0xac490190  sw          $t1, 0x190($v0)
    ctx->pc = 0x318288u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 9)); // MMIO: 0x70000190
    // 0x31828c: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x31828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x318290: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x318290u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x318294: 0xacaa00c0  sw          $t2, 0xC0($a1)
    ctx->pc = 0x318294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 10));
    // 0x318298: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x318298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31829c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31829Cu;
    SET_GPR_U32(ctx, 31, 0x3182A4u);
    ctx->pc = 0x3182A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31829Cu;
    // 0x3182a0: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31829Cu, 0x3182A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3182A4u;
label_3182a4:
    // 0x3182a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3182a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3182a8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3182a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x3182ac: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x3182acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x3182b0: 0xc040a04  jal         func_102810
    ctx->pc = 0x3182B0u;
    SET_GPR_U32(ctx, 31, 0x3182B8u);
    ctx->pc = 0x3182B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3182B0u;
    // 0x3182b4: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x3182B0u, 0x3182B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3182B8u;
label_3182b8:
    // 0x3182b8: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x3182b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
    // 0x3182bc: 0x0  nop
    ctx->pc = 0x3182bcu;
    // NOP
label_3182c0:
    // 0x3182c0: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x3182c0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x3182c4: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x3182c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x3182c8: 0x0  nop
    ctx->pc = 0x3182c8u;
    // NOP
    // 0x3182cc: 0x0  nop
    ctx->pc = 0x3182ccu;
    // NOP
    // 0x3182d0: 0x0  nop
    ctx->pc = 0x3182d0u;
    // NOP
    // 0x3182d4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3182D4u;
    {
        const bool branch_taken_0x3182d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3182d4) {
            ctx->pc = 0x3182C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3182c0;
        }
    }
    ctx->pc = 0x3182DCu;
    // 0x3182dc: 0x0  nop
    ctx->pc = 0x3182dcu;
    // NOP
label_3182e0:
    // 0x3182e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3182e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3182e4: 0x2b0182b  sltu        $v1, $s5, $s0
    ctx->pc = 0x3182e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3182e8: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x3182e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3182ec: 0x1460fe2e  bnez        $v1, . + 4 + (-0x1D2 << 2)
    ctx->pc = 0x3182ECu;
    {
        const bool branch_taken_0x3182ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3182F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3182ECu;
        // 0x3182f0: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182ec) {
            ctx->pc = 0x317BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317ba8;
        }
    }
    ctx->pc = 0x3182F4u;
    // 0x3182f4: 0x0  nop
    ctx->pc = 0x3182f4u;
    // NOP
label_3182f8:
    // 0x3182f8: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x3182f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3182fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3182fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318300: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x318300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x318304: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x318304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318308: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x318308u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31830c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x31830cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x318310: 0x1460fe18  bnez        $v1, . + 4 + (-0x1E8 << 2)
    ctx->pc = 0x318310u;
    {
        const bool branch_taken_0x318310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x318314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318310u;
        // 0x318314: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318310) {
            ctx->pc = 0x317B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317b74;
        }
    }
    ctx->pc = 0x318318u;
label_318318:
    // 0x318318: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x318318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31831c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31831cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x318320: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x318320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x318324: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x318324u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x318328: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x318328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31832c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31832cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x318330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x318330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x318334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x318338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31833c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31833cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318340: 0x3e00008  jr          $ra
    ctx->pc = 0x318340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318340u;
        // 0x318344: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318348u;
    // 0x318348: 0x0  nop
    ctx->pc = 0x318348u;
    // NOP
    // 0x31834c: 0x0  nop
    ctx->pc = 0x31834cu;
    // NOP
    // 0x318350: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x318350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x318354: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x318354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x318358: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x318358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31835c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x318360: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x318360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x318364: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x318364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x318368: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x318368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31836c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x318370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x318370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x318374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x318374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x318378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x318378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31837c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x31837cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x318380: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x318380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318384: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x318384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318388: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x318388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x31838c: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x31838cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
    // 0x318390: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x318390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x318394: 0x94a7001c  lhu         $a3, 0x1C($a1)
    ctx->pc = 0x318394u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x318398: 0x94a6001e  lhu         $a2, 0x1E($a1)
    ctx->pc = 0x318398u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x31839c: 0x24b30020  addiu       $s3, $a1, 0x20
    ctx->pc = 0x31839cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3183a0: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x3183a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3183a4: 0x90a50018  lbu         $a1, 0x18($a1)
    ctx->pc = 0x3183a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3183a8: 0x14800028  bnez        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3183A8u;
    {
        const bool branch_taken_0x3183a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3183ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183A8u;
        // 0x3183ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183a8) {
            ctx->pc = 0x31844Cu;
            goto label_31844c;
        }
    }
    ctx->pc = 0x3183B0u;
    // 0x3183b0: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x3183b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x3183b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3183b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3183b8: 0x0  nop
    ctx->pc = 0x3183b8u;
    // NOP
    // 0x3183bc: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x3183bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x3183c0: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x3183c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3183c4: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x3183c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3183c8: 0x8c89002c  lw          $t1, 0x2C($a0)
    ctx->pc = 0x3183c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3183cc: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x3183ccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3183d0: 0x0  nop
    ctx->pc = 0x3183d0u;
    // NOP
    // 0x3183d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3183d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3183d8: 0x1285023  subu        $t2, $t1, $t0
    ctx->pc = 0x3183d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3183dc: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x3183dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x3183e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3183e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3183e4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3183e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3183e8: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3183E8u;
    {
        const bool branch_taken_0x3183e8 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x3183ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183E8u;
        // 0x3183ec: 0xafa40210  sw          $a0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183e8) {
            ctx->pc = 0x3183FCu;
            goto label_3183fc;
        }
    }
    ctx->pc = 0x3183F0u;
    // 0x3183f0: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3183f0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3183f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3183F4u;
    {
        const bool branch_taken_0x3183f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3183F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183F4u;
        // 0x3183f8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3183f4) {
            ctx->pc = 0x318418u;
            goto label_318418;
        }
    }
    ctx->pc = 0x3183FCu;
label_3183fc:
    // 0x3183fc: 0xa4042  srl         $t0, $t2, 1
    ctx->pc = 0x3183fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x318400: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x318400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x318404: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x318404u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x318408: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x318408u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31840c: 0x0  nop
    ctx->pc = 0x31840cu;
    // NOP
    // 0x318410: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x318410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x318414: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x318414u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_318418:
    // 0x318418: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x318418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31841c: 0x0  nop
    ctx->pc = 0x31841cu;
    // NOP
    // 0x318420: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x318420u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x318424: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x318424u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x318428: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31842c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31842cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x318430: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x318430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x318434: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x318434u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318438: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x318438u;
    {
        const bool branch_taken_0x318438 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318438u;
        // 0x31843c: 0xafa40200  sw          $a0, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318438) {
            ctx->pc = 0x318508u;
            goto label_318508;
        }
    }
    ctx->pc = 0x318440u;
    // 0x318440: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x318440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x318444: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x318444u;
    {
        const bool branch_taken_0x318444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318444u;
        // 0x318448: 0xafa40200  sw          $a0, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318444) {
            ctx->pc = 0x318508u;
            goto label_318508;
        }
    }
    ctx->pc = 0x31844Cu;
label_31844c:
    // 0x31844c: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x31844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x318450: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x318450u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x318454: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x318454u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318458: 0x0  nop
    ctx->pc = 0x318458u;
    // NOP
    // 0x31845c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x31845cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x318460: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x318460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x318464: 0x8c89002c  lw          $t1, 0x2C($a0)
    ctx->pc = 0x318464u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x318468: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x318468u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31846c: 0x0  nop
    ctx->pc = 0x31846cu;
    // NOP
    // 0x318470: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x318470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x318474: 0x1285023  subu        $t2, $t1, $t0
    ctx->pc = 0x318474u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x318478: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x318478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31847c: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x31847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x318480: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x318480u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x318484: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x318484u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x318488: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31848c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31848cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x318490: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x318490u;
    {
        const bool branch_taken_0x318490 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x318494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318490u;
        // 0x318494: 0xafa40210  sw          $a0, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318490) {
            ctx->pc = 0x3184A4u;
            goto label_3184a4;
        }
    }
    ctx->pc = 0x318498u;
    // 0x318498: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x318498u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31849c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31849Cu;
    {
        const bool branch_taken_0x31849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3184A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31849Cu;
        // 0x3184a0: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31849c) {
            ctx->pc = 0x3184C0u;
            goto label_3184c0;
        }
    }
    ctx->pc = 0x3184A4u;
label_3184a4:
    // 0x3184a4: 0xa4042  srl         $t0, $t2, 1
    ctx->pc = 0x3184a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x3184a8: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x3184a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x3184ac: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x3184acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x3184b0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x3184b0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3184b4: 0x0  nop
    ctx->pc = 0x3184b4u;
    // NOP
    // 0x3184b8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3184b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3184bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3184bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3184c0:
    // 0x3184c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3184c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3184c4: 0x0  nop
    ctx->pc = 0x3184c4u;
    // NOP
    // 0x3184c8: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x3184c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[4]));
    // 0x3184cc: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x3184ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3184d0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3184d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3184d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3184d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3184d8: 0x0  nop
    ctx->pc = 0x3184d8u;
    // NOP
    // 0x3184dc: 0xafa40200  sw          $a0, 0x200($sp)
    ctx->pc = 0x3184dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 4));
    // 0x3184e0: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x3184e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3184e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3184e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3184e8: 0x0  nop
    ctx->pc = 0x3184e8u;
    // NOP
    // 0x3184ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3184ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3184f0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x3184f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3184f4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3184F4u;
    {
        const bool branch_taken_0x3184f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3184f4) {
            ctx->pc = 0x3184F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3184F4u;
            // 0x3184f8: 0x30630002  andi        $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31850Cu;
            goto label_31850c;
        }
    }
    ctx->pc = 0x3184FCu;
    // 0x3184fc: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x3184fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x318500: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x318500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x318504: 0xafa40200  sw          $a0, 0x200($sp)
    ctx->pc = 0x318504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 4));
label_318508:
    // 0x318508: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x318508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_31850c:
    // 0x31850c: 0x54600028  bnel        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x31850Cu;
    {
        const bool branch_taken_0x31850c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31850c) {
            ctx->pc = 0x318510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31850Cu;
            // 0x318510: 0x8fa301bc  lw          $v1, 0x1BC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3185B0u;
            goto label_3185b0;
        }
    }
    ctx->pc = 0x318514u;
    // 0x318514: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x318514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x318518: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x318518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31851c: 0x0  nop
    ctx->pc = 0x31851cu;
    // NOP
    // 0x318520: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x318520u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x318524: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x318524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x318528: 0xc4630038  lwc1        $f3, 0x38($v1)
    ctx->pc = 0x318528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31852c: 0x8c680030  lw          $t0, 0x30($v1)
    ctx->pc = 0x31852cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x318530: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x318530u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318534: 0x0  nop
    ctx->pc = 0x318534u;
    // NOP
    // 0x318538: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x318538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31853c: 0x1045023  subu        $t2, $t0, $a0
    ctx->pc = 0x31853cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x318540: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x318540u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x318544: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x318548: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x318548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31854c: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31854Cu;
    {
        const bool branch_taken_0x31854c = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x318550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31854Cu;
        // 0x318550: 0xafa301f0  sw          $v1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31854c) {
            ctx->pc = 0x318560u;
            goto label_318560;
        }
    }
    ctx->pc = 0x318554u;
    // 0x318554: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x318554u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318558: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x318558u;
    {
        const bool branch_taken_0x318558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318558u;
        // 0x31855c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318558) {
            ctx->pc = 0x31857Cu;
            goto label_31857c;
        }
    }
    ctx->pc = 0x318560u;
label_318560:
    // 0x318560: 0xa2042  srl         $a0, $t2, 1
    ctx->pc = 0x318560u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x318564: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x318564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x318568: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x318568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31856c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x31856cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318570: 0x0  nop
    ctx->pc = 0x318570u;
    // NOP
    // 0x318574: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x318574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x318578: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x318578u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31857c:
    // 0x31857c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31857cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318580: 0x0  nop
    ctx->pc = 0x318580u;
    // NOP
    // 0x318584: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x318584u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x318588: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x318588u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x31858c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31858cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x318590: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x318590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x318594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x318598: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x318598u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31859c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x31859Cu;
    {
        const bool branch_taken_0x31859c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3185A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31859Cu;
        // 0x3185a0: 0xafa301e0  sw          $v1, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31859c) {
            ctx->pc = 0x318644u;
            goto label_318644;
        }
    }
    ctx->pc = 0x3185A4u;
    // 0x3185a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3185a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3185a8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3185A8u;
    {
        const bool branch_taken_0x3185a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3185ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185A8u;
        // 0x3185ac: 0xafa301e0  sw          $v1, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185a8) {
            ctx->pc = 0x318644u;
            goto label_318644;
        }
    }
    ctx->pc = 0x3185B0u;
label_3185b0:
    // 0x3185b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3185b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3185b4: 0x0  nop
    ctx->pc = 0x3185b4u;
    // NOP
    // 0x3185b8: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3185b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x3185bc: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x3185bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3185c0: 0xc4630038  lwc1        $f3, 0x38($v1)
    ctx->pc = 0x3185c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3185c4: 0x8c680030  lw          $t0, 0x30($v1)
    ctx->pc = 0x3185c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3185c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3185c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3185cc: 0x0  nop
    ctx->pc = 0x3185ccu;
    // NOP
    // 0x3185d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3185d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3185d4: 0x1045023  subu        $t2, $t0, $a0
    ctx->pc = 0x3185d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x3185d8: 0x4603085d  msub.s      $f1, $f1, $f3
    ctx->pc = 0x3185d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x3185dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3185dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3185e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3185e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3185e4: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3185E4u;
    {
        const bool branch_taken_0x3185e4 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x3185E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185E4u;
        // 0x3185e8: 0xafa301f0  sw          $v1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185e4) {
            ctx->pc = 0x3185F8u;
            goto label_3185f8;
        }
    }
    ctx->pc = 0x3185ECu;
    // 0x3185ec: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x3185ecu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3185f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3185F0u;
    {
        const bool branch_taken_0x3185f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3185F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185F0u;
        // 0x3185f4: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3185f0) {
            ctx->pc = 0x318614u;
            goto label_318614;
        }
    }
    ctx->pc = 0x3185F8u;
label_3185f8:
    // 0x3185f8: 0xa2042  srl         $a0, $t2, 1
    ctx->pc = 0x3185f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x3185fc: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x3185fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x318600: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x318600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x318604: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x318604u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318608: 0x0  nop
    ctx->pc = 0x318608u;
    // NOP
    // 0x31860c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x31860cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x318610: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x318610u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_318614:
    // 0x318614: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x318614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318618: 0x0  nop
    ctx->pc = 0x318618u;
    // NOP
    // 0x31861c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x31861cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x318620: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x318620u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x318624: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x318628: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x318628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31862c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31862cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x318630: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x318630u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318634: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x318634u;
    {
        const bool branch_taken_0x318634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318634u;
        // 0x318638: 0xafa301e0  sw          $v1, 0x1E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318634) {
            ctx->pc = 0x318644u;
            goto label_318644;
        }
    }
    ctx->pc = 0x31863Cu;
    // 0x31863c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318640: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x318640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_318644:
    // 0x318644: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x318644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x318648: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x318648u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x31864c: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x31864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x318650: 0x8c7e0028  lw          $fp, 0x28($v1)
    ctx->pc = 0x318650u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x318654: 0x8c770024  lw          $s7, 0x24($v1)
    ctx->pc = 0x318654u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x318658: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x318658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31865c: 0x3c84021  addu        $t0, $fp, $t0
    ctx->pc = 0x31865cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x318660: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x318660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x318664: 0x7fa80120  sq          $t0, 0x120($sp)
    ctx->pc = 0x318664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 8));
    // 0x318668: 0x8b5824  and         $t3, $a0, $t3
    ctx->pc = 0x318668u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x31866c: 0x834024  and         $t0, $a0, $v1
    ctx->pc = 0x31866cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x318670: 0xb6602  srl         $t4, $t3, 24
    ctx->pc = 0x318670u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 24));
    // 0x318674: 0x2e94821  addu        $t1, $s7, $t1
    ctx->pc = 0x318674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x318678: 0x85c03  sra         $t3, $t0, 16
    ctx->pc = 0x318678u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 8), 16));
    // 0x31867c: 0x7fa90130  sq          $t1, 0x130($sp)
    ctx->pc = 0x31867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 9));
    // 0x318680: 0x25880001  addiu       $t0, $t4, 0x1
    ctx->pc = 0x318680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x318684: 0x8fa901bc  lw          $t1, 0x1BC($sp)
    ctx->pc = 0x318684u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x318688: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x318688u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x31868c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x31868cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x318690: 0xafa80170  sw          $t0, 0x170($sp)
    ctx->pc = 0x318690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 8));
    // 0x318694: 0xb4043  sra         $t0, $t3, 1
    ctx->pc = 0x318694u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 1));
    // 0x318698: 0x8d29000c  lw          $t1, 0xC($t1)
    ctx->pc = 0x318698u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x31869c: 0xafa80160  sw          $t0, 0x160($sp)
    ctx->pc = 0x31869cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 8));
    // 0x3186a0: 0x3088ff00  andi        $t0, $a0, 0xFF00
    ctx->pc = 0x3186a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x3186a4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3186a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3186a8: 0x84203  sra         $t0, $t0, 8
    ctx->pc = 0x3186a8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 8));
    // 0x3186ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3186acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3186b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3186b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3186b4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3186b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3186b8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x3186b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x3186bc: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x3186bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
    // 0x3186c0: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x3186c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x3186c4: 0x9223c  dsll32      $a0, $t1, 8
    ctx->pc = 0x3186c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 8));
    // 0x3186c8: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x3186c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x3186cc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3186CCu;
    {
        const bool branch_taken_0x3186cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186CCu;
        // 0x3186d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186cc) {
            ctx->pc = 0x3186F0u;
            goto label_3186f0;
        }
    }
    ctx->pc = 0x3186D4u;
    // 0x3186d4: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x3186d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x3186d8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x3186d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3186dc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3186dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3186e0: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x3186e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3186e4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x3186e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3186e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3186e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3186ec: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x3186ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
label_3186f0:
    // 0x3186f0: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x3186f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x3186f4: 0x78202  srl         $s0, $a3, 8
    ctx->pc = 0x3186f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x3186f8: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x3186f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x3186fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3186fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x318700: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x318700u;
    {
        const bool branch_taken_0x318700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x318704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318700u;
        // 0x318704: 0x3c140002  lui         $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318700) {
            ctx->pc = 0x31870Cu;
            goto label_31870c;
        }
    }
    ctx->pc = 0x318708u;
    // 0x318708: 0x3c140004  lui         $s4, 0x4
    ctx->pc = 0x318708u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4 << 16));
label_31870c:
    // 0x31870c: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x31870cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x318710: 0x10600231  beqz        $v1, . + 4 + (0x231 << 2)
    ctx->pc = 0x318710u;
    {
        const bool branch_taken_0x318710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318710u;
        // 0x318714: 0xafa001d0  sw          $zero, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318710) {
            ctx->pc = 0x318FD8u;
            goto label_318fd8;
        }
    }
    ctx->pc = 0x318718u;
    // 0x318718: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x318718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x31871c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31871cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318720: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x318720u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x318724: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x318724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x318728: 0x318fc  dsll32      $v1, $v1, 3
    ctx->pc = 0x318728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x31872c: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x31872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_318730:
    // 0x318730: 0x1200021d  beqz        $s0, . + 4 + (0x21D << 2)
    ctx->pc = 0x318730u;
    {
        const bool branch_taken_0x318730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x318734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318730u;
        // 0x318734: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318730) {
            ctx->pc = 0x318FA8u;
            goto label_318fa8;
        }
    }
    ctx->pc = 0x318738u;
    // 0x318738: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x318738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x31873c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31873cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x318740: 0x248408f0  addiu       $a0, $a0, 0x8F0
    ctx->pc = 0x318740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2288));
    // 0x318744: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x318744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318748: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x318748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31874c: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x31874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x318750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318754: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x318754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x318758: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x318758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x31875c: 0x3d61823  subu        $v1, $fp, $s6
    ctx->pc = 0x31875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
    // 0x318760: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x318760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x318764: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x318764u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x318768: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x318768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x31876c: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x31876cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
label_318770:
    // 0x318770: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x318770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x318774: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x318774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x318778: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x318778u;
    {
        const bool branch_taken_0x318778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318778u;
        // 0x31877c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318778) {
            ctx->pc = 0x318798u;
            goto label_318798;
        }
    }
    ctx->pc = 0x318780u;
    // 0x318780: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x318780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x318784: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x318784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x318788: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x318788u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31878c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31878Cu;
    {
        const bool branch_taken_0x31878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31878c) {
            ctx->pc = 0x3187A0u;
            goto label_3187a0;
        }
    }
    ctx->pc = 0x318794u;
    // 0x318794: 0x0  nop
    ctx->pc = 0x318794u;
    // NOP
label_318798:
    // 0x318798: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x318798u;
    {
        const bool branch_taken_0x318798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318798u;
        // 0x31879c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318798) {
            ctx->pc = 0x3187C8u;
            goto label_3187c8;
        }
    }
    ctx->pc = 0x3187A0u;
label_3187a0:
    // 0x3187a0: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x3187a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3187a4: 0x76182a  slt         $v1, $v1, $s6
    ctx->pc = 0x3187a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x3187a8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3187A8u;
    {
        const bool branch_taken_0x3187a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3187a8) {
            ctx->pc = 0x3187C0u;
            goto label_3187c0;
        }
    }
    ctx->pc = 0x3187B0u;
    // 0x3187b0: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x3187b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3187b4: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x3187b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3187b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3187B8u;
    {
        const bool branch_taken_0x3187b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3187b8) {
            ctx->pc = 0x3187C8u;
            goto label_3187c8;
        }
    }
    ctx->pc = 0x3187C0u;
label_3187c0:
    // 0x3187c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3187c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3187c4: 0x0  nop
    ctx->pc = 0x3187c4u;
    // NOP
label_3187c8:
    // 0x3187c8: 0x108001f1  beqz        $a0, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x3187C8u;
    {
        const bool branch_taken_0x3187c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3187c8) {
            ctx->pc = 0x318F90u;
            goto label_318f90;
        }
    }
    ctx->pc = 0x3187D0u;
    // 0x3187d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3187d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3187d4: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x3187d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x3187d8: 0x24634790  addiu       $v1, $v1, 0x4790
    ctx->pc = 0x3187d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18320));
    // 0x3187dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3187dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3187e0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3187e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x3187e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3187e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3187e8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3187e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x3187ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3187ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3187f0: 0x12620045  beq         $s3, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3187F0u;
    {
        const bool branch_taken_0x3187f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3187f0) {
            ctx->pc = 0x318908u;
            goto label_318908;
        }
    }
    ctx->pc = 0x3187F8u;
    // 0x3187f8: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x3187f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3187fc: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x3187fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x318800: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x318800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x318804: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x318804u;
    {
        const bool branch_taken_0x318804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x318804) {
            ctx->pc = 0x3188A0u;
            goto label_3188a0;
        }
    }
    ctx->pc = 0x31880Cu;
    // 0x31880c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x318810: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x318810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x318814: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x318814u;
    {
        const bool branch_taken_0x318814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x318814) {
            ctx->pc = 0x3188A0u;
            goto label_3188a0;
        }
    }
    ctx->pc = 0x31881Cu;
    // 0x31881c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x31881cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x318820: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x318824: 0x246337b0  addiu       $v1, $v1, 0x37B0
    ctx->pc = 0x318824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14256));
    // 0x318828: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x318828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31882c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x318830: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x318830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x318834: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x318834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x318838: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x318838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31883c: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x31883cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x318840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x318840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318844: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x318844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318848: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x318848u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31884c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31884Cu;
    SET_GPR_U32(ctx, 31, 0x318854u);
    ctx->pc = 0x318850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31884Cu;
    // 0x318850: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x31884Cu, 0x318854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318854u;
label_318854:
    // 0x318854: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x318854u;
    SET_GPR_U32(ctx, 31, 0x31885Cu);
    ctx->pc = 0x318858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318854u;
    // 0x318858: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x318854u, 0x31885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31885Cu;
label_31885c:
    // 0x31885c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31885cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x318860: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x318860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318864: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x318864u;
    SET_GPR_U32(ctx, 31, 0x31886Cu);
    ctx->pc = 0x318868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318864u;
    // 0x318868: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x318864u, 0x31886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31886Cu;
label_31886c:
    // 0x31886c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318870: 0xc040454  jal         func_101150
    ctx->pc = 0x318870u;
    SET_GPR_U32(ctx, 31, 0x318878u);
    ctx->pc = 0x318874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318870u;
    // 0x318874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x318870u, 0x318878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318878u;
label_318878:
    // 0x318878: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x318878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31887c: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x31887cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x318880: 0x24844790  addiu       $a0, $a0, 0x4790
    ctx->pc = 0x318880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18320));
    // 0x318884: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x318884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x318888: 0x2611821  addu        $v1, $s3, $at
    ctx->pc = 0x318888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x31888c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x318890: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x318890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x318894: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x318894u;
    {
        const bool branch_taken_0x318894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318894u;
        // 0x318898: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318894) {
            ctx->pc = 0x318908u;
            goto label_318908;
        }
    }
    ctx->pc = 0x31889Cu;
    // 0x31889c: 0x0  nop
    ctx->pc = 0x31889cu;
    // NOP
label_3188a0:
    // 0x3188a0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3188a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3188a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3188a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3188a8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3188a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3188ac: 0x246337b0  addiu       $v1, $v1, 0x37B0
    ctx->pc = 0x3188acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14256));
    // 0x3188b0: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x3188b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3188b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3188b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3188b8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x3188b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x3188bc: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x3188bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3188c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3188c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3188c4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3188c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3188c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3188c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3188cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3188ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3188d0: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3188D0u;
    SET_GPR_U32(ctx, 31, 0x3188D8u);
    ctx->pc = 0x3188D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3188D0u;
    // 0x3188d4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x3188D0u, 0x3188D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188D8u;
label_3188d8:
    // 0x3188d8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3188D8u;
    SET_GPR_U32(ctx, 31, 0x3188E0u);
    ctx->pc = 0x3188DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3188D8u;
    // 0x3188dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3188D8u, 0x3188E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188E0u;
label_3188e0:
    // 0x3188e0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3188e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3188e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3188e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3188e8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3188E8u;
    SET_GPR_U32(ctx, 31, 0x3188F0u);
    ctx->pc = 0x3188ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3188E8u;
    // 0x3188ec: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3188E8u, 0x3188F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188F0u;
label_3188f0:
    // 0x3188f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3188f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3188f4: 0xc040454  jal         func_101150
    ctx->pc = 0x3188F4u;
    SET_GPR_U32(ctx, 31, 0x3188FCu);
    ctx->pc = 0x3188F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3188F4u;
    // 0x3188f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3188F4u, 0x3188FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3188FCu;
label_3188fc:
    // 0x3188fc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3188fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x318900: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x318900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x318904: 0x0  nop
    ctx->pc = 0x318904u;
    // NOP
label_318908:
    // 0x318908: 0x2f2082a  slt         $at, $s7, $s2
    ctx->pc = 0x318908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x31890c: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31890Cu;
    {
        const bool branch_taken_0x31890c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31890c) {
            ctx->pc = 0x318910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31890Cu;
            // 0x318910: 0x2f22023  subu        $a0, $s7, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318918u;
            goto label_318918;
        }
    }
    ctx->pc = 0x318914u;
    // 0x318914: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x318914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318918:
    // 0x318918: 0x3d6082a  slt         $at, $fp, $s6
    ctx->pc = 0x318918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x31891c: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31891Cu;
    {
        const bool branch_taken_0x31891c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31891c) {
            ctx->pc = 0x318920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31891Cu;
            // 0x318920: 0x8fa30190  lw          $v1, 0x190($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318928u;
            goto label_318928;
        }
    }
    ctx->pc = 0x318924u;
    // 0x318924: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x318924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318928:
    // 0x318928: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x318928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x31892c: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x31892cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x318930: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x318930u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x318934: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x318934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x318938: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x318938u;
    {
        const bool branch_taken_0x318938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x318938) {
            ctx->pc = 0x31893Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318938u;
            // 0x31893c: 0x523823  subu        $a3, $v0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318944u;
            goto label_318944;
        }
    }
    ctx->pc = 0x318940u;
    // 0x318940: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x318940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_318944:
    // 0x318944: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x318944u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x318948: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x318948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31894c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x31894cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x318950: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x318950u;
    {
        const bool branch_taken_0x318950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x318950) {
            ctx->pc = 0x318968u;
            goto label_318968;
        }
    }
    ctx->pc = 0x318958u;
    // 0x318958: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x318958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
    // 0x31895c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31895Cu;
    {
        const bool branch_taken_0x31895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31895Cu;
        // 0x318960: 0x240a0100  addiu       $t2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31895c) {
            ctx->pc = 0x318978u;
            goto label_318978;
        }
    }
    ctx->pc = 0x318964u;
    // 0x318964: 0x0  nop
    ctx->pc = 0x318964u;
    // NOP
label_318968:
    // 0x318968: 0x8faa0180  lw          $t2, 0x180($sp)
    ctx->pc = 0x318968u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x31896c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318970: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x318970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
    // 0x318974: 0x0  nop
    ctx->pc = 0x318974u;
    // NOP
label_318978:
    // 0x318978: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x318978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31897c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x31897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x318980: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x318980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x318984: 0x14a0001c  bnez        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x318984u;
    {
        const bool branch_taken_0x318984 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x318984) {
            ctx->pc = 0x3189F8u;
            goto label_3189f8;
        }
    }
    ctx->pc = 0x31898Cu;
    // 0x31898c: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x31898cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x318990: 0xc4a40034  lwc1        $f4, 0x34($a1)
    ctx->pc = 0x318990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x318994: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x318994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x318998: 0xb73023  subu        $a2, $a1, $s7
    ctx->pc = 0x318998u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x31899c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x31899cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3189a0: 0xf22821  addu        $a1, $a3, $s2
    ctx->pc = 0x3189a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x3189a4: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3189a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3189a8: 0xb72823  subu        $a1, $a1, $s7
    ctx->pc = 0x3189a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x3189ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3189acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3189b0: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x3189b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3189b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3189b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3189b8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3189b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3189bc: 0x0  nop
    ctx->pc = 0x3189bcu;
    // NOP
    // 0x3189c0: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x3189c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3189c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3189c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3189c8: 0x0  nop
    ctx->pc = 0x3189c8u;
    // NOP
    // 0x3189cc: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3189ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3189d0: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x3189d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x3189d4: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3189d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3189d8: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x3189d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x3189dc: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3189dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3189e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3189e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3189e4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3189e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3189e8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x3189e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3189ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3189ECu;
    {
        const bool branch_taken_0x3189ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3189ec) {
            ctx->pc = 0x318A60u;
            goto label_318a60;
        }
    }
    ctx->pc = 0x3189F4u;
    // 0x3189f4: 0x0  nop
    ctx->pc = 0x3189f4u;
    // NOP
label_3189f8:
    // 0x3189f8: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x3189f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3189fc: 0xb73023  subu        $a2, $a1, $s7
    ctx->pc = 0x3189fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x318a00: 0xf22821  addu        $a1, $a3, $s2
    ctx->pc = 0x318a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x318a04: 0xb72823  subu        $a1, $a1, $s7
    ctx->pc = 0x318a04u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x318a08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x318a08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318a0c: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x318a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x318a10: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x318a10u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318a14: 0x0  nop
    ctx->pc = 0x318a14u;
    // NOP
    // 0x318a18: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x318a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x318a1c: 0xc4a40034  lwc1        $f4, 0x34($a1)
    ctx->pc = 0x318a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x318a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x318a24: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x318a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x318a28: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x318a28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318a2c: 0x0  nop
    ctx->pc = 0x318a2cu;
    // NOP
    // 0x318a30: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x318a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x318a34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x318a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318a38: 0x0  nop
    ctx->pc = 0x318a38u;
    // NOP
    // 0x318a3c: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x318a3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x318a40: 0x4602209d  msub.s      $f2, $f4, $f2
    ctx->pc = 0x318a40u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x318a44: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x318a44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x318a48: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x318a48u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x318a4c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x318a50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318a50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x318a54: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x318a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x318a58: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x318a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x318a5c: 0x0  nop
    ctx->pc = 0x318a5cu;
    // NOP
label_318a60:
    // 0x318a60: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x318a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x318a64: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x318A64u;
    {
        const bool branch_taken_0x318a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318a64) {
            ctx->pc = 0x318AD8u;
            goto label_318ad8;
        }
    }
    ctx->pc = 0x318A6Cu;
    // 0x318a6c: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x318a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x318a70: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x318a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x318a74: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x318a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x318a78: 0x5e2823  subu        $a1, $v0, $fp
    ctx->pc = 0x318a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x318a7c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x318a7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318a80: 0x1561021  addu        $v0, $t2, $s6
    ctx->pc = 0x318a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 22)));
    // 0x318a84: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x318a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x318a88: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x318a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x318a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318a90: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x318a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x318a94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x318a98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x318a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318a9c: 0x0  nop
    ctx->pc = 0x318a9cu;
    // NOP
    // 0x318aa0: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x318aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x318aa4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x318aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318aa8: 0x0  nop
    ctx->pc = 0x318aa8u;
    // NOP
    // 0x318aac: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x318aacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x318ab0: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x318ab0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x318ab4: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x318ab4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x318ab8: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x318ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x318abc: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318abcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x318ac0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318ac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x318ac4: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x318ac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x318ac8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x318ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x318acc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x318ACCu;
    {
        const bool branch_taken_0x318acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x318acc) {
            ctx->pc = 0x318B40u;
            goto label_318b40;
        }
    }
    ctx->pc = 0x318AD4u;
    // 0x318ad4: 0x0  nop
    ctx->pc = 0x318ad4u;
    // NOP
label_318ad8:
    // 0x318ad8: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x318ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x318adc: 0x5e2823  subu        $a1, $v0, $fp
    ctx->pc = 0x318adcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x318ae0: 0x1561021  addu        $v0, $t2, $s6
    ctx->pc = 0x318ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 22)));
    // 0x318ae4: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x318ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x318ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318aec: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x318aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x318af0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x318af0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318af4: 0x0  nop
    ctx->pc = 0x318af4u;
    // NOP
    // 0x318af8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x318af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x318afc: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x318afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x318b00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x318b04: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x318b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x318b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x318b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318b0c: 0x0  nop
    ctx->pc = 0x318b0cu;
    // NOP
    // 0x318b10: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x318b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x318b14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x318b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318b18: 0x0  nop
    ctx->pc = 0x318b18u;
    // NOP
    // 0x318b1c: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x318b1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x318b20: 0x4602209d  msub.s      $f2, $f4, $f2
    ctx->pc = 0x318b20u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x318b24: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x318b24u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x318b28: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x318b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x318b2c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318b2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x318b30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x318b30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x318b34: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x318b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x318b38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x318b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x318b3c: 0x0  nop
    ctx->pc = 0x318b3cu;
    // NOP
label_318b40:
    // 0x318b40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x318b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x318b44: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x318b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x318b48: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x318b48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x318b4c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x318b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x318b50: 0x3c0b7000  lui         $t3, 0x7000
    ctx->pc = 0x318b50u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)28672 << 16));
    // 0x318b54: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x318b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x318b58: 0x248f0008  addiu       $t7, $a0, 0x8
    ctx->pc = 0x318b58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x318b5c: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x318b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x318b60: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x318b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x318b64: 0x256b00d0  addiu       $t3, $t3, 0xD0
    ctx->pc = 0x318b64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 208));
    // 0x318b68: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x318b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x318b6c: 0xac6b0370  sw          $t3, 0x370($v1)
    ctx->pc = 0x318b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 11));
    // 0x318b70: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x318b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x318b74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x318b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x318b78: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x318b78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x318b7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x318b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x318b80: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x318b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x318b84: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x318b84u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x318b88: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x318b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x318b8c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x318b8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x318b90: 0x248437b0  addiu       $a0, $a0, 0x37B0
    ctx->pc = 0x318b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14256));
    // 0x318b94: 0xfd6c0008  sd          $t4, 0x8($t3)
    ctx->pc = 0x318b94u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 12));
    // 0x318b98: 0x3c1801dc  lui         $t8, 0x1DC
    ctx->pc = 0x318b98u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)476 << 16));
    // 0x318b9c: 0xfd600010  sd          $zero, 0x10($t3)
    ctx->pc = 0x318b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 0));
    // 0x318ba0: 0x3c1901dc  lui         $t9, 0x1DC
    ctx->pc = 0x318ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)476 << 16));
    // 0x318ba4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x318ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x318ba8: 0xfd660018  sd          $a2, 0x18($t3)
    ctx->pc = 0x318ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 6));
    // 0x318bac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x318bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x318bb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x318bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x318bb4: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x318bb4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x318bb8: 0x3c062021  lui         $a2, 0x2021
    ctx->pc = 0x318bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8225 << 16));
    // 0x318bbc: 0xcc6025  or          $t4, $a2, $t4
    ctx->pc = 0x318bbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x318bc0: 0x6c6825  or          $t5, $v1, $t4
    ctx->pc = 0x318bc0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x318bc4: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x318bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x318bc8: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x318bc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x318bcc: 0x6603c  dsll32      $t4, $a2, 0
    ctx->pc = 0x318bccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) << (32 + 0));
    // 0x318bd0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x318bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x318bd4: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x318bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x318bd8: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x318bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x318bdc: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x318bdcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x318be0: 0xfd630020  sd          $v1, 0x20($t3)
    ctx->pc = 0x318be0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 3));
    // 0x318be4: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x318be4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x318be8: 0xfd640028  sd          $a0, 0x28($t3)
    ctx->pc = 0x318be8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 4));
    // 0x318bec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x318becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x318bf0: 0x3c0460ab  lui         $a0, 0x60AB
    ctx->pc = 0x318bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24747 << 16));
    // 0x318bf4: 0xfd600030  sd          $zero, 0x30($t3)
    ctx->pc = 0x318bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 48), GPR_U64(ctx, 0));
    // 0x318bf8: 0xfd660038  sd          $a2, 0x38($t3)
    ctx->pc = 0x318bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 56), GPR_U64(ctx, 6));
    // 0x318bfc: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x318bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x318c00: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x318c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x318c04: 0xfd6c0040  sd          $t4, 0x40($t3)
    ctx->pc = 0x318c04u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 64), GPR_U64(ctx, 12));
    // 0x318c08: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x318c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x318c0c: 0xfd630048  sd          $v1, 0x48($t3)
    ctx->pc = 0x318c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 72), GPR_U64(ctx, 3));
    // 0x318c10: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x318c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x318c14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x318c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x318c18: 0xfd640050  sd          $a0, 0x50($t3)
    ctx->pc = 0x318c18u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 80), GPR_U64(ctx, 4));
    // 0x318c1c: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x318c1cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x318c20: 0x34643513  ori         $a0, $v1, 0x3513
    ctx->pc = 0x318c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x318c24: 0xfd640058  sd          $a0, 0x58($t3)
    ctx->pc = 0x318c24u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 88), GPR_U64(ctx, 4));
    // 0x318c28: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x318c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x318c2c: 0x8c660370  lw          $a2, 0x370($v1)
    ctx->pc = 0x318c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x318c30: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x318c30u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x318c34: 0x7fab00a0  sq          $t3, 0xA0($sp)
    ctx->pc = 0x318c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 11));
    // 0x318c38: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x318c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x318c3c: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x318c3cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x318c40: 0x24ce0060  addiu       $t6, $a2, 0x60
    ctx->pc = 0x318c40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x318c44: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x318c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x318c48: 0xadae0370  sw          $t6, 0x370($t5)
    ctx->pc = 0x318c48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 880), GPR_U32(ctx, 14));
    // 0x318c4c: 0xaccf0060  sw          $t7, 0x60($a2)
    ctx->pc = 0x318c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 96), GPR_U32(ctx, 15));
    // 0x318c50: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x318c50u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x318c54: 0x8d8f0370  lw          $t7, 0x370($t4)
    ctx->pc = 0x318c54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x318c58: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x318c58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x318c5c: 0x3c06009d  lui         $a2, 0x9D
    ctx->pc = 0x318c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)157 << 16));
    // 0x318c60: 0xade50004  sw          $a1, 0x4($t7)
    ctx->pc = 0x318c60u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 5));
    // 0x318c64: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x318c64u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x318c68: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x318c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x318c6c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x318c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x318c70: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x318c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x318c74: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x318c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x318c78: 0x8f040370  lw          $a0, 0x370($t8)
    ctx->pc = 0x318c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 880)));
    // 0x318c7c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x318c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x318c80: 0xaf230370  sw          $v1, 0x370($t9)
    ctx->pc = 0x318c80u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 880), GPR_U32(ctx, 3));
    // 0x318c84: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x318c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x318c88: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x318c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x318c8c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x318c8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x318c90: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x318c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x318c94: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x318c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x318c98: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x318c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x318c9c: 0x8dc40370  lw          $a0, 0x370($t6)
    ctx->pc = 0x318c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x318ca0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x318ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x318ca4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x318ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x318ca8: 0x8da40370  lw          $a0, 0x370($t5)
    ctx->pc = 0x318ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x318cac: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x318cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x318cb0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x318cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x318cb4: 0x8d840370  lw          $a0, 0x370($t4)
    ctx->pc = 0x318cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x318cb8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x318cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x318cbc: 0xad630370  sw          $v1, 0x370($t3)
    ctx->pc = 0x318cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 880), GPR_U32(ctx, 3));
    // 0x318cc0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x318cc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x318cc4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x318cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x318cc8: 0x90c3b280  lbu         $v1, -0x4D80($a2)
    ctx->pc = 0x318cc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294947456)));
    // 0x318ccc: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x318CCCu;
    {
        const bool branch_taken_0x318ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ccc) {
            ctx->pc = 0x318CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318CCCu;
            // 0x318cd0: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318D24u;
            goto label_318d24;
        }
    }
    ctx->pc = 0x318CD4u;
    // 0x318cd4: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x318cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x318cd8: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x318cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x318cdc: 0x24857100  addiu       $a1, $a0, 0x7100
    ctx->pc = 0x318cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x318ce0: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x318ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x318ce4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x318ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x318ce8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x318ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x318cec: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x318cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x318cf0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x318cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x318cf4: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x318cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x318cf8: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x318cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x318cfc: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x318cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x318d00: 0x0  nop
    ctx->pc = 0x318d00u;
    // NOP
    // 0x318d04: 0x2010  mfhi        $a0
    ctx->pc = 0x318d04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x318d08: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x318d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x318d0c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x318d0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x318d10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x318d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x318d14: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x318d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x318d18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x318d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x318d1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x318D1Cu;
    {
        const bool branch_taken_0x318d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D1Cu;
        // 0x318d20: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d1c) {
            ctx->pc = 0x318D28u;
            goto label_318d28;
        }
    }
    ctx->pc = 0x318D24u;
label_318d24:
    // 0x318d24: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x318d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_318d28:
    // 0x318d28: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x318d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x318d2c: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x318d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x318d30: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x318d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x318d34: 0x24ad6c00  addiu       $t5, $a1, 0x6C00
    ctx->pc = 0x318d34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x318d38: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x318d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x318d3c: 0x77100  sll         $t6, $a3, 4
    ctx->pc = 0x318d3cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x318d40: 0x8c660370  lw          $a2, 0x370($v1)
    ctx->pc = 0x318d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x318d44: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x318d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x318d48: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x318d48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x318d4c: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x318d4cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x318d50: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x318d50u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x318d54: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x318d54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x318d58: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x318d58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x318d5c: 0x2403a833  addiu       $v1, $zero, -0x57CD
    ctx->pc = 0x318d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x318d60: 0x8ca40370  lw          $a0, 0x370($a1)
    ctx->pc = 0x318d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x318d64: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x318d64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x318d68: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x318d68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x318d6c: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x318d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x318d70: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x318d70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x318d74: 0x3c1801dc  lui         $t8, 0x1DC
    ctx->pc = 0x318d74u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)476 << 16));
    // 0x318d78: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x318d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x318d7c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x318d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x318d80: 0x8def0370  lw          $t7, 0x370($t7)
    ctx->pc = 0x318d80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 880)));
    // 0x318d84: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x318d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x318d88: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x318d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x318d8c: 0x3c1901dc  lui         $t9, 0x1DC
    ctx->pc = 0x318d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)476 << 16));
    // 0x318d90: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x318d90u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x318d94: 0x8d8f0370  lw          $t7, 0x370($t4)
    ctx->pc = 0x318d94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x318d98: 0x25ec0010  addiu       $t4, $t7, 0x10
    ctx->pc = 0x318d98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x318d9c: 0xad6c0370  sw          $t4, 0x370($t3)
    ctx->pc = 0x318d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 880), GPR_U32(ctx, 12));
    // 0x318da0: 0xadee0010  sw          $t6, 0x10($t7)
    ctx->pc = 0x318da0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 14));
    // 0x318da4: 0x8d4b0370  lw          $t3, 0x370($t2)
    ctx->pc = 0x318da4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x318da8: 0x7baa00b0  lq          $t2, 0xB0($sp)
    ctx->pc = 0x318da8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x318dac: 0xad6a0004  sw          $t2, 0x4($t3)
    ctx->pc = 0x318dacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 10));
    // 0x318db0: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x318db0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x318db4: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x318db4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x318db8: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x318db8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x318dbc: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x318dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x318dc0: 0x8ce80370  lw          $t0, 0x370($a3)
    ctx->pc = 0x318dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x318dc4: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x318dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x318dc8: 0xacc70370  sw          $a3, 0x370($a2)
    ctx->pc = 0x318dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 880), GPR_U32(ctx, 7));
    // 0x318dcc: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x318dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x318dd0: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x318dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x318dd4: 0x8ca60370  lw          $a2, 0x370($a1)
    ctx->pc = 0x318dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x318dd8: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x318dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x318ddc: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x318ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x318de0: 0x8c850370  lw          $a1, 0x370($a0)
    ctx->pc = 0x318de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x318de4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x318de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x318de8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x318de8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x318dec: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x318decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x318df0: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x318df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x318df4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x318df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x318df8: 0x8f040370  lw          $a0, 0x370($t8)
    ctx->pc = 0x318df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 880)));
    // 0x318dfc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x318dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x318e00: 0xaf230370  sw          $v1, 0x370($t9)
    ctx->pc = 0x318e00u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 880), GPR_U32(ctx, 3));
    // 0x318e04: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x318e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x318e08: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x318E08u;
    {
        const bool branch_taken_0x318e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E08u;
        // 0x318e0c: 0xac8d0010  sw          $t5, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e08) {
            ctx->pc = 0x318E80u;
            goto label_318e80;
        }
    }
    ctx->pc = 0x318E10u;
    // 0x318e10: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x318e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x318e14: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x318e14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x318e18: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x318E18u;
    {
        const bool branch_taken_0x318e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e18) {
            ctx->pc = 0x318E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E18u;
            // 0x318e1c: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318E68u;
            goto label_318e68;
        }
    }
    ctx->pc = 0x318E20u;
    // 0x318e20: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x318e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318e24: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x318e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x318e28: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x318e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x318e2c: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x318e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x318e30: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x318e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x318e34: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x318e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x318e38: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x318e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x318e3c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x318e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x318e40: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x318e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x318e44: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x318e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x318e48: 0x0  nop
    ctx->pc = 0x318e48u;
    // NOP
    // 0x318e4c: 0x1010  mfhi        $v0
    ctx->pc = 0x318e4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x318e50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x318e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x318e54: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x318e54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x318e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x318e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x318e5c: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x318e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x318e60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x318E60u;
    {
        const bool branch_taken_0x318e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E60u;
        // 0x318e64: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e60) {
            ctx->pc = 0x318E6Cu;
            goto label_318e6c;
        }
    }
    ctx->pc = 0x318E68u;
label_318e68:
    // 0x318e68: 0x24437100  addiu       $v1, $v0, 0x7100
    ctx->pc = 0x318e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_318e6c:
    // 0x318e6c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x318e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x318e70: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x318e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x318e74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x318E74u;
    {
        const bool branch_taken_0x318e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E74u;
        // 0x318e78: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e74) {
            ctx->pc = 0x318EF0u;
            goto label_318ef0;
        }
    }
    ctx->pc = 0x318E7Cu;
    // 0x318e7c: 0x0  nop
    ctx->pc = 0x318e7cu;
    // NOP
label_318e80:
    // 0x318e80: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x318e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x318e84: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x318e84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x318e88: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x318E88u;
    {
        const bool branch_taken_0x318e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e88) {
            ctx->pc = 0x318E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E88u;
            // 0x318e8c: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318EE0u;
            goto label_318ee0;
        }
    }
    ctx->pc = 0x318E90u;
    // 0x318e90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x318e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318e94: 0x24647100  addiu       $a0, $v1, 0x7100
    ctx->pc = 0x318e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x318e98: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x318e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x318e9c: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x318e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x318ea0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x318ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x318ea4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x318ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x318ea8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x318ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x318eac: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x318eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x318eb0: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x318eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x318eb4: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x318eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x318eb8: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x318eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x318ebc: 0x0  nop
    ctx->pc = 0x318ebcu;
    // NOP
    // 0x318ec0: 0x1810  mfhi        $v1
    ctx->pc = 0x318ec0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x318ec4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x318ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x318ec8: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x318ec8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x318ecc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x318eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x318ed0: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x318ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x318ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318ed8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x318ED8u;
    {
        const bool branch_taken_0x318ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318ED8u;
        // 0x318edc: 0x621824  and         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ed8) {
            ctx->pc = 0x318EE4u;
            goto label_318ee4;
        }
    }
    ctx->pc = 0x318EE0u;
label_318ee0:
    // 0x318ee0: 0x24437100  addiu       $v1, $v0, 0x7100
    ctx->pc = 0x318ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_318ee4:
    // 0x318ee4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x318ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x318ee8: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x318ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x318eec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x318eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_318ef0:
    // 0x318ef0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x318ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x318ef4: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x318ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x318ef8: 0x2409a833  addiu       $t1, $zero, -0x57CD
    ctx->pc = 0x318ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x318efc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x318efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x318f00: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x318f00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x318f04: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x318f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x318f08: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x318f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x318f0c: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x318f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x318f10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x318f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x318f14: 0x8c4b0370  lw          $t3, 0x370($v0)
    ctx->pc = 0x318f14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x318f18: 0x346a000c  ori         $t2, $v1, 0xC
    ctx->pc = 0x318f18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x318f1c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x318f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x318f20: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x318f20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x318f24: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x318f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x318f28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x318f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f2c: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x318f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x318f30: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x318f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x318f34: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x318f34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x318f38: 0xac490190  sw          $t1, 0x190($v0)
    ctx->pc = 0x318f38u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 9)); // MMIO: 0x70000190
    // 0x318f3c: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x318f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x318f40: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x318f40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x318f44: 0xacaa00c0  sw          $t2, 0xC0($a1)
    ctx->pc = 0x318f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 10));
    // 0x318f48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x318f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x318f4c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x318F4Cu;
    SET_GPR_U32(ctx, 31, 0x318F54u);
    ctx->pc = 0x318F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F4Cu;
    // 0x318f50: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x318F4Cu, 0x318F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F54u;
label_318f54:
    // 0x318f54: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x318f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x318f58: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x318f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x318f5c: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x318f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x318f60: 0xc040a04  jal         func_102810
    ctx->pc = 0x318F60u;
    SET_GPR_U32(ctx, 31, 0x318F68u);
    ctx->pc = 0x318F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F60u;
    // 0x318f64: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x318F60u, 0x318F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F68u;
label_318f68:
    // 0x318f68: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x318f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
    // 0x318f6c: 0x0  nop
    ctx->pc = 0x318f6cu;
    // NOP
label_318f70:
    // 0x318f70: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x318f70u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x318f74: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x318f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x318f78: 0x0  nop
    ctx->pc = 0x318f78u;
    // NOP
    // 0x318f7c: 0x0  nop
    ctx->pc = 0x318f7cu;
    // NOP
    // 0x318f80: 0x0  nop
    ctx->pc = 0x318f80u;
    // NOP
    // 0x318f84: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x318F84u;
    {
        const bool branch_taken_0x318f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x318f84) {
            ctx->pc = 0x318F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318f70;
        }
    }
    ctx->pc = 0x318F8Cu;
    // 0x318f8c: 0x0  nop
    ctx->pc = 0x318f8cu;
    // NOP
label_318f90:
    // 0x318f90: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x318f90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x318f94: 0x2b0182b  sltu        $v1, $s5, $s0
    ctx->pc = 0x318f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x318f98: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x318f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x318f9c: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x318f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x318fa0: 0x1460fdf3  bnez        $v1, . + 4 + (-0x20D << 2)
    ctx->pc = 0x318FA0u;
    {
        const bool branch_taken_0x318fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x318FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FA0u;
        // 0x318fa4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fa0) {
            ctx->pc = 0x318770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318770;
        }
    }
    ctx->pc = 0x318FA8u;
label_318fa8:
    // 0x318fa8: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x318fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x318fac: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x318facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x318fb0: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x318fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x318fb4: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x318fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x318fb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318fbc: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x318fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
    // 0x318fc0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x318fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fc4: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x318fc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x318fc8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x318fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x318fcc: 0x1460fdd8  bnez        $v1, . + 4 + (-0x228 << 2)
    ctx->pc = 0x318FCCu;
    {
        const bool branch_taken_0x318fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x318FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FCCu;
        // 0x318fd0: 0x26d60100  addiu       $s6, $s6, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318fcc) {
            ctx->pc = 0x318730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318730;
        }
    }
    ctx->pc = 0x318FD4u;
    // 0x318fd4: 0x0  nop
    ctx->pc = 0x318fd4u;
    // NOP
label_318fd8:
    // 0x318fd8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x318fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x318fdc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x318fdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x318fe0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x318fe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x318fe4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x318fe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x318fe8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x318fe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x318fec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x318fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x318ff0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x318ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318ff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x318ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x318ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x318ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319000: 0x3e00008  jr          $ra
    ctx->pc = 0x319000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319000u;
        // 0x319004: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319008u;
    // 0x319008: 0x0  nop
    ctx->pc = 0x319008u;
    // NOP
    // 0x31900c: 0x0  nop
    ctx->pc = 0x31900cu;
    // NOP
    // 0x319010: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x319010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x319014: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x319014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x319018: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x319018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x31901c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x31901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x319020: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x319020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x319024: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x319024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x319028: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x319028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31902c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x319030: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x319030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x319034: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x319034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x319038: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x319038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31903c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x31903cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x319040: 0xafa401fc  sw          $a0, 0x1FC($sp)
    ctx->pc = 0x319040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 4));
    // 0x319044: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x319044u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x319048: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x319048u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31904c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31904cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x319050: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x319050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x319054: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x319054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319058: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x319058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31905c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x31905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x319060: 0x9471001c  lhu         $s1, 0x1C($v1)
    ctx->pc = 0x319060u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x319064: 0x24730020  addiu       $s3, $v1, 0x20
    ctx->pc = 0x319064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x319068: 0x9470001e  lhu         $s0, 0x1E($v1)
    ctx->pc = 0x319068u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x31906c: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x31906cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x319070: 0x90630018  lbu         $v1, 0x18($v1)
    ctx->pc = 0x319070u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x319074: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x319074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
    // 0x319078: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x319078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31907c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x31907Cu;
    {
        const bool branch_taken_0x31907c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x319080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31907Cu;
        // 0x319080: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31907c) {
            ctx->pc = 0x319124u;
            goto label_319124;
        }
    }
    ctx->pc = 0x319084u;
    // 0x319084: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x319084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319088: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x319088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x31908c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31908cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319090: 0x0  nop
    ctx->pc = 0x319090u;
    // NOP
    // 0x319094: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x319094u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[21]));
    // 0x319098: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x319098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31909c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31909cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3190a0: 0x0  nop
    ctx->pc = 0x3190a0u;
    // NOP
    // 0x3190a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3190a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3190a8: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x3190a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x3190ac: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x3190acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3190b0: 0x4602001d  msub.s      $f0, $f0, $f2
    ctx->pc = 0x3190b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x3190b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3190b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3190b8: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x3190b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3190bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3190bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3190c0: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3190C0u;
    {
        const bool branch_taken_0x3190c0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3190C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190C0u;
        // 0x3190c4: 0xafa30250  sw          $v1, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3190c0) {
            ctx->pc = 0x3190D4u;
            goto label_3190d4;
        }
    }
    ctx->pc = 0x3190C8u;
    // 0x3190c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3190c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3190cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3190CCu;
    {
        const bool branch_taken_0x3190cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3190D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3190CCu;
        // 0x3190d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3190cc) {
            ctx->pc = 0x3190F0u;
            goto label_3190f0;
        }
    }
    ctx->pc = 0x3190D4u;
label_3190d4:
    // 0x3190d4: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x3190d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x3190d8: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3190d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3190dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3190dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3190e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3190e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3190e4: 0x0  nop
    ctx->pc = 0x3190e4u;
    // NOP
    // 0x3190e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3190e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3190ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3190ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3190f0:
    // 0x3190f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3190f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3190f4: 0x0  nop
    ctx->pc = 0x3190f4u;
    // NOP
    // 0x3190f8: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3190f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[21]));
    // 0x3190fc: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x3190fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x319100: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x319100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x319104: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x319104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x319108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31910c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x31910cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319110: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x319110u;
    {
        const bool branch_taken_0x319110 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x319114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319110u;
        // 0x319114: 0xafa30240  sw          $v1, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319110) {
            ctx->pc = 0x3191C0u;
            goto label_3191c0;
        }
    }
    ctx->pc = 0x319118u;
    // 0x319118: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31911c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31911Cu;
    {
        const bool branch_taken_0x31911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31911Cu;
        // 0x319120: 0xafa30240  sw          $v1, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31911c) {
            ctx->pc = 0x3191C0u;
            goto label_3191c0;
        }
    }
    ctx->pc = 0x319124u;
label_319124:
    // 0x319124: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x319124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319128: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x319128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x31912c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31912cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319130: 0x0  nop
    ctx->pc = 0x319130u;
    // NOP
    // 0x319134: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x319134u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[21]));
    // 0x319138: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x319138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31913c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31913cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319140: 0x0  nop
    ctx->pc = 0x319140u;
    // NOP
    // 0x319144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x319148: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x319148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x31914c: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x31914cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x319150: 0x4602001d  msub.s      $f0, $f0, $f2
    ctx->pc = 0x319150u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x319154: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x319154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x319158: 0xa43023  subu        $a2, $a1, $a0
    ctx->pc = 0x319158u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x31915c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31915cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x319160: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x319160u;
    {
        const bool branch_taken_0x319160 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x319164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319160u;
        // 0x319164: 0xafa30250  sw          $v1, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319160) {
            ctx->pc = 0x319174u;
            goto label_319174;
        }
    }
    ctx->pc = 0x319168u;
    // 0x319168: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x319168u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31916c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31916Cu;
    {
        const bool branch_taken_0x31916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31916Cu;
        // 0x319170: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31916c) {
            ctx->pc = 0x319190u;
            goto label_319190;
        }
    }
    ctx->pc = 0x319174u;
label_319174:
    // 0x319174: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x319174u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x319178: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x319178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x31917c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31917cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x319180: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319180u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319184: 0x0  nop
    ctx->pc = 0x319184u;
    // NOP
    // 0x319188: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x319188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31918c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31918cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_319190:
    // 0x319190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319194: 0x0  nop
    ctx->pc = 0x319194u;
    // NOP
    // 0x319198: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x319198u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[21]));
    // 0x31919c: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x31919cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3191a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3191a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3191a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3191a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3191a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3191a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3191ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3191acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3191b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3191B0u;
    {
        const bool branch_taken_0x3191b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3191B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3191B0u;
        // 0x3191b4: 0xafa30240  sw          $v1, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3191b0) {
            ctx->pc = 0x3191C0u;
            goto label_3191c0;
        }
    }
    ctx->pc = 0x3191B8u;
    // 0x3191b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3191b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3191bc: 0xafa30240  sw          $v1, 0x240($sp)
    ctx->pc = 0x3191bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 3));
label_3191c0:
    // 0x3191c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3191c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3191c4: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3191C4u;
    {
        const bool branch_taken_0x3191c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3191c4) {
            ctx->pc = 0x3191C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3191C4u;
            // 0x3191c8: 0x8fa201fc  lw          $v0, 0x1FC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319268u;
            goto label_319268;
        }
    }
    ctx->pc = 0x3191CCu;
    // 0x3191cc: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x3191ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x3191d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3191d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3191d4: 0x0  nop
    ctx->pc = 0x3191d4u;
    // NOP
    // 0x3191d8: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x3191d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[20]));
    // 0x3191dc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3191dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3191e0: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x3191e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3191e4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x3191e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3191e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3191e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3191ec: 0x0  nop
    ctx->pc = 0x3191ecu;
    // NOP
    // 0x3191f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3191f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3191f4: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x3191f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3191f8: 0x4602001d  msub.s      $f0, $f0, $f2
    ctx->pc = 0x3191f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x3191fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3191fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x319200: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x319200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x319204: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x319204u;
    {
        const bool branch_taken_0x319204 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x319208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319204u;
        // 0x319208: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319204) {
            ctx->pc = 0x319218u;
            goto label_319218;
        }
    }
    ctx->pc = 0x31920Cu;
    // 0x31920c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31920cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319210: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x319210u;
    {
        const bool branch_taken_0x319210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319210u;
        // 0x319214: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319210) {
            ctx->pc = 0x319234u;
            goto label_319234;
        }
    }
    ctx->pc = 0x319218u;
label_319218:
    // 0x319218: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x319218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x31921c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x31921cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x319220: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x319220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x319224: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319228: 0x0  nop
    ctx->pc = 0x319228u;
    // NOP
    // 0x31922c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31922cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x319230: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x319230u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_319234:
    // 0x319234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319238: 0x0  nop
    ctx->pc = 0x319238u;
    // NOP
    // 0x31923c: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x31923cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[20]));
    // 0x319240: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x319240u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x319244: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x319244u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x319248: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x319248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31924c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31924cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x319250: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x319250u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319254: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x319254u;
    {
        const bool branch_taken_0x319254 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x319258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319254u;
        // 0x319258: 0xafa20220  sw          $v0, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319254) {
            ctx->pc = 0x3192FCu;
            goto label_3192fc;
        }
    }
    ctx->pc = 0x31925Cu;
    // 0x31925c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x319260: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x319260u;
    {
        const bool branch_taken_0x319260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319260u;
        // 0x319264: 0xafa20220  sw          $v0, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319260) {
            ctx->pc = 0x3192FCu;
            goto label_3192fc;
        }
    }
    ctx->pc = 0x319268u;
label_319268:
    // 0x319268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31926c: 0x0  nop
    ctx->pc = 0x31926cu;
    // NOP
    // 0x319270: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x319270u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[20]));
    // 0x319274: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x319274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x319278: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x319278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31927c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x31927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x319280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319284: 0x0  nop
    ctx->pc = 0x319284u;
    // NOP
    // 0x319288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31928c: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x31928cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x319290: 0x4602001d  msub.s      $f0, $f0, $f2
    ctx->pc = 0x319290u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x319294: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x319294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x319298: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x319298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31929c: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31929Cu;
    {
        const bool branch_taken_0x31929c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3192A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31929Cu;
        // 0x3192a0: 0xafa20230  sw          $v0, 0x230($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31929c) {
            ctx->pc = 0x3192B0u;
            goto label_3192b0;
        }
    }
    ctx->pc = 0x3192A4u;
    // 0x3192a4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3192a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3192a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3192A8u;
    {
        const bool branch_taken_0x3192a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3192ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192A8u;
        // 0x3192ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192a8) {
            ctx->pc = 0x3192CCu;
            goto label_3192cc;
        }
    }
    ctx->pc = 0x3192B0u;
label_3192b0:
    // 0x3192b0: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x3192b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x3192b4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3192b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3192b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3192b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3192bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3192bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3192c0: 0x0  nop
    ctx->pc = 0x3192c0u;
    // NOP
    // 0x3192c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3192c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3192c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3192c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3192cc:
    // 0x3192cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3192ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3192d0: 0x0  nop
    ctx->pc = 0x3192d0u;
    // NOP
    // 0x3192d4: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x3192d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[20]));
    // 0x3192d8: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x3192d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x3192dc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3192dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3192e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3192e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3192e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3192e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3192e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3192e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3192ec: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3192ECu;
    {
        const bool branch_taken_0x3192ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3192F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192ECu;
        // 0x3192f0: 0xafa20220  sw          $v0, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192ec) {
            ctx->pc = 0x3192FCu;
            goto label_3192fc;
        }
    }
    ctx->pc = 0x3192F4u;
    // 0x3192f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3192f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3192f8: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x3192f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_3192fc:
    // 0x3192fc: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x3192fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x319300: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x319300u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x319304: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x319304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x319308: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x319308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x31930c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x31930cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x319310: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x319310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x319314: 0x7ba60160  lq          $a2, 0x160($sp)
    ctx->pc = 0x319314u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x319318: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x319318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x31931c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x31931cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x319320: 0x7fa50150  sq          $a1, 0x150($sp)
    ctx->pc = 0x319320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 5));
    // 0x319324: 0x8fa501fc  lw          $a1, 0x1FC($sp)
    ctx->pc = 0x319324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x319328: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x319328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x31932c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x31932cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x319330: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x319330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x319334: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x319334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x319338: 0x7ba50140  lq          $a1, 0x140($sp)
    ctx->pc = 0x319338u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31933c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x31933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x319340: 0x7fa40130  sq          $a0, 0x130($sp)
    ctx->pc = 0x319340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 4));
    // 0x319344: 0x672824  and         $a1, $v1, $a3
    ctx->pc = 0x319344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x319348: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x319348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31934c: 0x53e02  srl         $a3, $a1, 24
    ctx->pc = 0x31934cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x319350: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x319350u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x319354: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x319354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x319358: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x319358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31935c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x31935cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x319360: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x319360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x319364: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x319364u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
    // 0x319368: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x319368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x31936c: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x31936cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x319370: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x319370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x319374: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x319374u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x319378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31937c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x319380: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x319380u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x319384: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x319384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x319388: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x319388u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x31938c: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x31938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x319390: 0x61a3c  dsll32      $v1, $a2, 8
    ctx->pc = 0x319390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 8));
    // 0x319394: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x319394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x319398: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x319398u;
    {
        const bool branch_taken_0x319398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319398u;
        // 0x31939c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319398) {
            ctx->pc = 0x3193BCu;
            goto label_3193bc;
        }
    }
    ctx->pc = 0x3193A0u;
    // 0x3193a0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3193a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3193a4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3193a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3193a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3193a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3193ac: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x3193acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3193b0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x3193b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3193b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3193b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3193b8: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x3193b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_3193bc:
    // 0x3193bc: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x3193bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x3193c0: 0xc0c4a34  jal         func_3128D0
    ctx->pc = 0x3193C0u;
    SET_GPR_U32(ctx, 31, 0x3193C8u);
    ctx->pc = 0x3193C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3193C0u;
    // 0x3193c4: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3128D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3128D0u, 0x3193C0u, 0x3193C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193C8u;
label_3193c8:
    // 0x3193c8: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x3193c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x3193cc: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x3193ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x3193d0: 0xc0c4a40  jal         func_312900
    ctx->pc = 0x3193D0u;
    SET_GPR_U32(ctx, 31, 0x3193D8u);
    ctx->pc = 0x3193D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3193D0u;
    // 0x3193d4: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312900u, 0x3193D0u, 0x3193D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3193D8u;
label_3193d8:
    // 0x3193d8: 0x101a02  srl         $v1, $s0, 8
    ctx->pc = 0x3193d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3193dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3193dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3193e0: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x3193e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x3193e4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3193e4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x3193e8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3193e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3193ec: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x3193ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
    // 0x3193f0: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x3193f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3193f4: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3193F4u;
    {
        const bool branch_taken_0x3193f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3193F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3193F4u;
        // 0x3193f8: 0x11f202  srl         $fp, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3193f4) {
            ctx->pc = 0x319404u;
            goto label_319404;
        }
    }
    ctx->pc = 0x3193FCu;
    // 0x3193fc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3193fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x319400: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x319400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
label_319404:
    // 0x319404: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x319404u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x319408: 0x1060030f  beqz        $v1, . + 4 + (0x30F << 2)
    ctx->pc = 0x319408u;
    {
        const bool branch_taken_0x319408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319408u;
        // 0x31940c: 0xafa00210  sw          $zero, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319408) {
            ctx->pc = 0x31A048u;
            goto label_31a048;
        }
    }
    ctx->pc = 0x319410u;
    // 0x319410: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x319410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x319414: 0xafa001e0  sw          $zero, 0x1E0($sp)
    ctx->pc = 0x319414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 0));
    // 0x319418: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x319418u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31941c: 0x340fc  dsll32      $t0, $v1, 3
    ctx->pc = 0x31941cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 3));
    // 0x319420: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x319420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x319424: 0x34660006  ori         $a2, $v1, 0x6
    ctx->pc = 0x319424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x319428: 0x3c032021  lui         $v1, 0x2021
    ctx->pc = 0x319428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8225 << 16));
    // 0x31942c: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x31942cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x319430: 0x34633480  ori         $v1, $v1, 0x3480
    ctx->pc = 0x319430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13440);
    // 0x319434: 0x3c062001  lui         $a2, 0x2001
    ctx->pc = 0x319434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8193 << 16));
    // 0x319438: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x319438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x31943c: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x31943cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x319440: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x319440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x319444: 0x34c33480  ori         $v1, $a2, 0x3480
    ctx->pc = 0x319444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13440);
    // 0x319448: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x319448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x31944c: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x31944cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x319450: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x319450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
label_319454:
    // 0x319454: 0x13c002f0  beqz        $fp, . + 4 + (0x2F0 << 2)
    ctx->pc = 0x319454u;
    {
        const bool branch_taken_0x319454 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x319458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319454u;
        // 0x319458: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319454) {
            ctx->pc = 0x31A018u;
            goto label_31a018;
        }
    }
    ctx->pc = 0x31945Cu;
    // 0x31945c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x31945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x319460: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x319460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319464: 0x7ba60140  lq          $a2, 0x140($sp)
    ctx->pc = 0x319464u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x319468: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31946c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x31946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x319470: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x319470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x319474: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x319474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x319478: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x319478u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31947c: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x31947cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
    // 0x319480: 0x7ba60130  lq          $a2, 0x130($sp)
    ctx->pc = 0x319480u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x319484: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x319484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x319488: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x319488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31948c: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x31948cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
label_319490:
    // 0x319490: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x319490u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x319494: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x319494u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x319498: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x319498u;
    {
        const bool branch_taken_0x319498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319498u;
        // 0x31949c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319498) {
            ctx->pc = 0x3194B8u;
            goto label_3194b8;
        }
    }
    ctx->pc = 0x3194A0u;
    // 0x3194a0: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x3194a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3194a4: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x3194a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3194a8: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x3194a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3194ac: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x3194acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3194b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3194B0u;
    {
        const bool branch_taken_0x3194b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3194b0) {
            ctx->pc = 0x3194C0u;
            goto label_3194c0;
        }
    }
    ctx->pc = 0x3194B8u;
label_3194b8:
    // 0x3194b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3194B8u;
    {
        const bool branch_taken_0x3194b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3194B8u;
        // 0x3194bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3194b8) {
            ctx->pc = 0x3194F0u;
            goto label_3194f0;
        }
    }
    ctx->pc = 0x3194C0u;
label_3194c0:
    // 0x3194c0: 0x7ba60130  lq          $a2, 0x130($sp)
    ctx->pc = 0x3194c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3194c4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x3194c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x3194c8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x3194c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3194cc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3194CCu;
    {
        const bool branch_taken_0x3194cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3194cc) {
            ctx->pc = 0x3194E8u;
            goto label_3194e8;
        }
    }
    ctx->pc = 0x3194D4u;
    // 0x3194d4: 0x7ba60140  lq          $a2, 0x140($sp)
    ctx->pc = 0x3194d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3194d8: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x3194d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3194dc: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x3194dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3194e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3194E0u;
    {
        const bool branch_taken_0x3194e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3194e0) {
            ctx->pc = 0x3194F0u;
            goto label_3194f0;
        }
    }
    ctx->pc = 0x3194E8u;
label_3194e8:
    // 0x3194e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3194e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3194ec: 0x0  nop
    ctx->pc = 0x3194ecu;
    // NOP
label_3194f0:
    // 0x3194f0: 0x10e002c3  beqz        $a3, . + 4 + (0x2C3 << 2)
    ctx->pc = 0x3194F0u;
    {
        const bool branch_taken_0x3194f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3194f0) {
            ctx->pc = 0x31A000u;
            goto label_31a000;
        }
    }
    ctx->pc = 0x3194F8u;
    // 0x3194f8: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3194f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3194fc: 0x8c424790  lw          $v0, 0x4790($v0)
    ctx->pc = 0x3194fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x319500: 0x12620035  beq         $s3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x319500u;
    {
        const bool branch_taken_0x319500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x319500) {
            ctx->pc = 0x3195D8u;
            goto label_3195d8;
        }
    }
    ctx->pc = 0x319508u;
    // 0x319508: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x319508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x31950c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31950cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x319510: 0x10470015  beq         $v0, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x319510u;
    {
        const bool branch_taken_0x319510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x319510) {
            ctx->pc = 0x319568u;
            goto label_319568;
        }
    }
    ctx->pc = 0x319518u;
    // 0x319518: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x319518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31951c: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x31951cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x319520: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x319520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x319524: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x319524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x319528: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x319528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31952c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31952cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x319530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319534: 0xc040532  jal         func_1014C8
    ctx->pc = 0x319534u;
    SET_GPR_U32(ctx, 31, 0x31953Cu);
    ctx->pc = 0x319538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319534u;
    // 0x319538: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x319534u, 0x31953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31953Cu;
label_31953c:
    // 0x31953c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31953Cu;
    SET_GPR_U32(ctx, 31, 0x319544u);
    ctx->pc = 0x319540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31953Cu;
    // 0x319540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31953Cu, 0x319544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319544u;
label_319544:
    // 0x319544: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x319544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x319548: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x319548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31954c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31954Cu;
    SET_GPR_U32(ctx, 31, 0x319554u);
    ctx->pc = 0x319550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31954Cu;
    // 0x319550: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x31954Cu, 0x319554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319554u;
label_319554:
    // 0x319554: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x319554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319558: 0xc040454  jal         func_101150
    ctx->pc = 0x319558u;
    SET_GPR_U32(ctx, 31, 0x319560u);
    ctx->pc = 0x31955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319558u;
    // 0x31955c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x319558u, 0x319560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319560u;
label_319560:
    // 0x319560: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x319560u;
    {
        const bool branch_taken_0x319560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319560) {
            ctx->pc = 0x3195B8u;
            goto label_3195b8;
        }
    }
    ctx->pc = 0x319568u;
label_319568:
    // 0x319568: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x319568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31956c: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x31956cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x319570: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x319570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x319574: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x319574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x319578: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x319578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31957c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31957cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319580: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x319580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319584: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x319584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319588: 0xc040532  jal         func_1014C8
    ctx->pc = 0x319588u;
    SET_GPR_U32(ctx, 31, 0x319590u);
    ctx->pc = 0x31958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319588u;
    // 0x31958c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x319588u, 0x319590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319590u;
label_319590:
    // 0x319590: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x319590u;
    SET_GPR_U32(ctx, 31, 0x319598u);
    ctx->pc = 0x319594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319590u;
    // 0x319594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x319590u, 0x319598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319598u;
label_319598:
    // 0x319598: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x319598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31959c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195a0: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3195A0u;
    SET_GPR_U32(ctx, 31, 0x3195A8u);
    ctx->pc = 0x3195A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3195A0u;
    // 0x3195a4: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3195A0u, 0x3195A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195A8u;
label_3195a8:
    // 0x3195a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3195a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195ac: 0xc040454  jal         func_101150
    ctx->pc = 0x3195ACu;
    SET_GPR_U32(ctx, 31, 0x3195B4u);
    ctx->pc = 0x3195B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3195ACu;
    // 0x3195b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3195ACu, 0x3195B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195B4u;
label_3195b4:
    // 0x3195b4: 0x0  nop
    ctx->pc = 0x3195b4u;
    // NOP
label_3195b8:
    // 0x3195b8: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3195b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3195bc: 0xac534790  sw          $s3, 0x4790($v0)
    ctx->pc = 0x3195bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 19));
    // 0x3195c0: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3195c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3195c4: 0xac404794  sw          $zero, 0x4794($v0)
    ctx->pc = 0x3195c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18324), GPR_U32(ctx, 0));
    // 0x3195c8: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3195c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3195cc: 0xac404798  sw          $zero, 0x4798($v0)
    ctx->pc = 0x3195ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18328), GPR_U32(ctx, 0));
    // 0x3195d0: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3195d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3195d4: 0xac40479c  sw          $zero, 0x479C($v0)
    ctx->pc = 0x3195d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18332), GPR_U32(ctx, 0));
label_3195d8:
    // 0x3195d8: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x3195d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3195dc: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x3195dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3195e0: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3195E0u;
    {
        const bool branch_taken_0x3195e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3195e0) {
            ctx->pc = 0x3195E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3195E0u;
            // 0x3195e4: 0x521023  subu        $v0, $v0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3195F0u;
            goto label_3195f0;
        }
    }
    ctx->pc = 0x3195E8u;
    // 0x3195e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3195E8u;
    {
        const bool branch_taken_0x3195e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3195ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195E8u;
        // 0x3195ec: 0x7fa000e0  sq          $zero, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195e8) {
            ctx->pc = 0x3195F4u;
            goto label_3195f4;
        }
    }
    ctx->pc = 0x3195F0u;
label_3195f0:
    // 0x3195f0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3195f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3195f4:
    // 0x3195f4: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x3195f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3195f8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x3195f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x3195fc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3195fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x319600: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x319600u;
    {
        const bool branch_taken_0x319600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x319600) {
            ctx->pc = 0x319604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319600u;
            // 0x319604: 0x8fa201d0  lw          $v0, 0x1D0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319610u;
            goto label_319610;
        }
    }
    ctx->pc = 0x319608u;
    // 0x319608: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319608u;
    {
        const bool branch_taken_0x319608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319608u;
        // 0x31960c: 0x7fa000d0  sq          $zero, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319608) {
            ctx->pc = 0x319614u;
            goto label_319614;
        }
    }
    ctx->pc = 0x319610u;
label_319610:
    // 0x319610: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x319610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_319614:
    // 0x319614: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x319614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x319618: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x319618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31961c: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x31961cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x319620: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x319620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x319624: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319624u;
    {
        const bool branch_taken_0x319624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x319624) {
            ctx->pc = 0x319628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319624u;
            // 0x319628: 0x521023  subu        $v0, $v0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319638u;
            goto label_319638;
        }
    }
    ctx->pc = 0x31962Cu;
    // 0x31962c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x31962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x319630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319630u;
    {
        const bool branch_taken_0x319630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319630u;
        // 0x319634: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319630) {
            ctx->pc = 0x31963Cu;
            goto label_31963c;
        }
    }
    ctx->pc = 0x319638u;
label_319638:
    // 0x319638: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x319638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_31963c:
    // 0x31963c: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x31963cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x319640: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x319640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x319644: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x319644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x319648: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x319648u;
    {
        const bool branch_taken_0x319648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x319648) {
            ctx->pc = 0x31964Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319648u;
            // 0x31964c: 0x8fa201c0  lw          $v0, 0x1C0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31965Cu;
            goto label_31965c;
        }
    }
    ctx->pc = 0x319650u;
    // 0x319650: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x319650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x319654: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x319654u;
    {
        const bool branch_taken_0x319654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319654u;
        // 0x319658: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319654) {
            ctx->pc = 0x319660u;
            goto label_319660;
        }
    }
    ctx->pc = 0x31965Cu;
label_31965c:
    // 0x31965c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x31965cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_319660:
    // 0x319660: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x319660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x319664: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x319664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x319668: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x319668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31966c: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x31966Cu;
    {
        const bool branch_taken_0x31966c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31966c) {
            ctx->pc = 0x3196F0u;
            goto label_3196f0;
        }
    }
    ctx->pc = 0x319674u;
    // 0x319674: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x319674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x319678: 0xc4640034  lwc1        $f4, 0x34($v1)
    ctx->pc = 0x319678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31967c: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x31967cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x319680: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x319680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x319684: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x319684u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x319688: 0xc33823  subu        $a3, $a2, $v1
    ctx->pc = 0x319688u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31968c: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x31968cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x319690: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x319690u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319694: 0x0  nop
    ctx->pc = 0x319694u;
    // NOP
    // 0x319698: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x319698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31969c: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x31969cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3196a0: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x3196a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3196a4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x3196a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3196a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3196a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3196ac: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x3196acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x3196b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3196b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3196b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3196b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3196b8: 0x0  nop
    ctx->pc = 0x3196b8u;
    // NOP
    // 0x3196bc: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x3196bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3196c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3196c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3196c4: 0x0  nop
    ctx->pc = 0x3196c4u;
    // NOP
    // 0x3196c8: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3196c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3196cc: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x3196ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x3196d0: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3196d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3196d4: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x3196d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x3196d8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3196d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3196dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3196dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3196e0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3196e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3196e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3196e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3196e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3196E8u;
    {
        const bool branch_taken_0x3196e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3196e8) {
            ctx->pc = 0x319768u;
            goto label_319768;
        }
    }
    ctx->pc = 0x3196F0u;
label_3196f0:
    // 0x3196f0: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x3196f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3196f4: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x3196f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3196f8: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x3196f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3196fc: 0xc33823  subu        $a3, $a2, $v1
    ctx->pc = 0x3196fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x319700: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x319700u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x319704: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x319704u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319708: 0x0  nop
    ctx->pc = 0x319708u;
    // NOP
    // 0x31970c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x31970cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x319710: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x319710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x319714: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x319714u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x319718: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x319718u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31971c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31971cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319720: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x319720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x319724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x319728: 0xc4640034  lwc1        $f4, 0x34($v1)
    ctx->pc = 0x319728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31972c: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x31972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x319730: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x319730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319734: 0x0  nop
    ctx->pc = 0x319734u;
    // NOP
    // 0x319738: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x319738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31973c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31973cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319740: 0x0  nop
    ctx->pc = 0x319740u;
    // NOP
    // 0x319744: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x319744u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x319748: 0x4602209d  msub.s      $f2, $f4, $f2
    ctx->pc = 0x319748u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x31974c: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x31974cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x319750: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x319750u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x319754: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x319754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x319758: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x319758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31975c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x31975cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x319760: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x319760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x319764: 0x0  nop
    ctx->pc = 0x319764u;
    // NOP
label_319768:
    // 0x319768: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x319768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x31976c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x31976Cu;
    {
        const bool branch_taken_0x31976c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31976c) {
            ctx->pc = 0x3197F8u;
            goto label_3197f8;
        }
    }
    ctx->pc = 0x319774u;
    // 0x319774: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x319774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x319778: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x319778u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31977c: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x31977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x319780: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x319780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x319784: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x319784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x319788: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x319788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31978c: 0xe24023  subu        $t0, $a3, $v0
    ctx->pc = 0x31978cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x319790: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x319790u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x319794: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x319794u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319798: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x319798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31979c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x31979cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3197a0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3197a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3197a4: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x3197a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3197a8: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x3197a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3197ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3197acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3197b0: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x3197b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x3197b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3197b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3197b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3197b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3197bc: 0x0  nop
    ctx->pc = 0x3197bcu;
    // NOP
    // 0x3197c0: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x3197c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3197c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3197c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3197c8: 0x0  nop
    ctx->pc = 0x3197c8u;
    // NOP
    // 0x3197cc: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3197ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3197d0: 0x4602209c  madd.s      $f2, $f4, $f2
    ctx->pc = 0x3197d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x3197d4: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x3197d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x3197d8: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x3197d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x3197dc: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3197dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3197e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3197e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3197e4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x3197e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3197e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3197e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3197ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3197ECu;
    {
        const bool branch_taken_0x3197ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3197ec) {
            ctx->pc = 0x319870u;
            goto label_319870;
        }
    }
    ctx->pc = 0x3197F4u;
    // 0x3197f4: 0x0  nop
    ctx->pc = 0x3197f4u;
    // NOP
label_3197f8:
    // 0x3197f8: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x3197f8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3197fc: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x3197fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x319800: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x319800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x319804: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x319804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x319808: 0xe24023  subu        $t0, $a3, $v0
    ctx->pc = 0x319808u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x31980c: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x31980cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x319810: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x319810u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319814: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x319814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x319818: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x319818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31981c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x31981cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x319820: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x319820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x319824: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x319824u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x319828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31982c: 0x8fa201fc  lw          $v0, 0x1FC($sp)
    ctx->pc = 0x31982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x319830: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x319834: 0xc4440038  lwc1        $f4, 0x38($v0)
    ctx->pc = 0x319834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x319838: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x319838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x31983c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31983cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319840: 0x0  nop
    ctx->pc = 0x319840u;
    // NOP
    // 0x319844: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x319844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x319848: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x319848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31984c: 0x0  nop
    ctx->pc = 0x31984cu;
    // NOP
    // 0x319850: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x319850u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x319854: 0x4602209d  msub.s      $f2, $f4, $f2
    ctx->pc = 0x319854u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x319858: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x319858u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x31985c: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x31985cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x319860: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x319860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x319864: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x319864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x319868: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x319868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31986c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31986cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_319870:
    // 0x319870: 0xafa60278  sw          $a2, 0x278($sp)
    ctx->pc = 0x319870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 6));
    // 0x319874: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x319874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
    // 0x319878: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x319878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31987c: 0xafa3027c  sw          $v1, 0x27C($sp)
    ctx->pc = 0x31987cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 3));
    // 0x319880: 0x27b10270  addiu       $s1, $sp, 0x270
    ctx->pc = 0x319880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x319884: 0xafa30274  sw          $v1, 0x274($sp)
    ctx->pc = 0x319884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
    // 0x319888: 0x27b00260  addiu       $s0, $sp, 0x260
    ctx->pc = 0x319888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x31988c: 0xafa70264  sw          $a3, 0x264($sp)
    ctx->pc = 0x31988cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 7));
    // 0x319890: 0xafa70260  sw          $a3, 0x260($sp)
    ctx->pc = 0x319890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 7));
    // 0x319894: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x319894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
    // 0x319898: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x319898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
    // 0x31989c: 0x0  nop
    ctx->pc = 0x31989cu;
    // NOP
label_3198a0:
    // 0x3198a0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3198a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3198a4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3198a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3198a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3198a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3198ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3198acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3198b0: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x3198b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x3198b4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x3198b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3198b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3198b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3198bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3198bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3198c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3198c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3198c4: 0x0  nop
    ctx->pc = 0x3198c4u;
    // NOP
    // 0x3198c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3198c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3198cc: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x3198ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x3198d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3198d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3198d4: 0x8e370000  lw          $s7, 0x0($s1)
    ctx->pc = 0x3198d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3198d8: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x3198d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x3198dc: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x3198dcu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3198e0: 0x0  nop
    ctx->pc = 0x3198e0u;
    // NOP
    // 0x3198e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3198e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3198e8: 0x4616001a  mula.s      $f0, $f22
    ctx->pc = 0x3198e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x3198ec: 0xc048930  jal         func_1224C0
    ctx->pc = 0x3198ECu;
    SET_GPR_U32(ctx, 31, 0x3198F4u);
    ctx->pc = 0x3198F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3198ECu;
    // 0x3198f0: 0x46170b1d  msub.s      $f12, $f1, $f23 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[23]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x3198ECu, 0x3198F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3198F4u;
label_3198f4:
    // 0x3198f4: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x3198f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x3198f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3198f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198fc: 0xc048a46  jal         func_122918
    ctx->pc = 0x3198FCu;
    SET_GPR_U32(ctx, 31, 0x319904u);
    ctx->pc = 0x319900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3198FCu;
    // 0x319900: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x3198FCu, 0x319904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319904u;
label_319904:
    // 0x319904: 0xc048bde  jal         func_122F78
    ctx->pc = 0x319904u;
    SET_GPR_U32(ctx, 31, 0x31990Cu);
    ctx->pc = 0x319908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319904u;
    // 0x319908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x319904u, 0x31990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31990Cu;
label_31990c:
    // 0x31990c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x31990cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319910: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x319910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x319914: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x319914u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319918: 0x0  nop
    ctx->pc = 0x319918u;
    // NOP
    // 0x31991c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31991cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x319920: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x319920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x319924: 0x4616001a  mula.s      $f0, $f22
    ctx->pc = 0x319924u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[22]));
    // 0x319928: 0xc048930  jal         func_1224C0
    ctx->pc = 0x319928u;
    SET_GPR_U32(ctx, 31, 0x319930u);
    ctx->pc = 0x31992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319928u;
    // 0x31992c: 0x46170b1c  madd.s      $f12, $f1, $f23 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[23]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x319928u, 0x319930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319930u;
label_319930:
    // 0x319930: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x319930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x319934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x319934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319938: 0xc048a46  jal         func_122918
    ctx->pc = 0x319938u;
    SET_GPR_U32(ctx, 31, 0x319940u);
    ctx->pc = 0x31993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319938u;
    // 0x31993c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x319938u, 0x319940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319940u;
label_319940:
    // 0x319940: 0xc048bde  jal         func_122F78
    ctx->pc = 0x319940u;
    SET_GPR_U32(ctx, 31, 0x319948u);
    ctx->pc = 0x319944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319940u;
    // 0x319944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x319940u, 0x319948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319948u;
label_319948:
    // 0x319948: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x319948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31994c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x319950: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x319950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319954: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x319954u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x319958: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x319958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31995c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31995cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x319960: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x319960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x319964: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x319964u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x319968: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x319968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x31996c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31996cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x319970: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x319970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x319974: 0x0  nop
    ctx->pc = 0x319974u;
    // NOP
    // 0x319978: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x319978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31997c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31997cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x319980: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x319980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x319984: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x319984u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x319988: 0x0  nop
    ctx->pc = 0x319988u;
    // NOP
    // 0x31998c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x31998cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x319990: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x319990u;
    {
        const bool branch_taken_0x319990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319990u;
        // 0x319994: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319990) {
            ctx->pc = 0x3198A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3198a0;
        }
    }
    ctx->pc = 0x319998u;
    // 0x319998: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x319998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31999c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3199a0: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x3199a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x3199a4: 0xac440370  sw          $a0, 0x370($v0)
    ctx->pc = 0x3199a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 4));
    // 0x3199a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3199a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3199ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3199acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3199b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3199b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3199b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3199b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3199b8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x3199b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x3199bc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3199bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3199c0: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x3199c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x3199c4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3199c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3199c8: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x3199c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x3199cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3199ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3199d0: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x3199d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x3199d4: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x3199d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3199d8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3199D8u;
    {
        const bool branch_taken_0x3199d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3199d8) {
            ctx->pc = 0x3199F0u;
            goto label_3199f0;
        }
    }
    ctx->pc = 0x3199E0u;
    // 0x3199e0: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x3199e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3199e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3199E4u;
    {
        const bool branch_taken_0x3199e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3199E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199E4u;
        // 0x3199e8: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199e4) {
            ctx->pc = 0x3199F8u;
            goto label_3199f8;
        }
    }
    ctx->pc = 0x3199ECu;
    // 0x3199ec: 0x0  nop
    ctx->pc = 0x3199ecu;
    // NOP
label_3199f0:
    // 0x3199f0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x3199f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3199f4: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x3199f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
label_3199f8:
    // 0x3199f8: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3199f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3199fc: 0x3c03c0aa  lui         $v1, 0xC0AA
    ctx->pc = 0x3199fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49322 << 16));
    // 0x319a00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x319a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x319a04: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x319a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x319a08: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x319a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x319a0c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x319a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319a10: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x319a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x319a14: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x319a14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x319a18: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x319a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x319a1c: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x319a1cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x319a20: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x319a20u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x319a24: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x319a24u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x319a28: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x319a28u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x319a2c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x319a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319a30: 0x8fae0270  lw          $t6, 0x270($sp)
    ctx->pc = 0x319a30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x319a34: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319a38: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x319a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x319a3c: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x319a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x319a40: 0xfc450028  sd          $a1, 0x28($v0)
    ctx->pc = 0x319a40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 5));
    // 0x319a44: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x319a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x319a48: 0xfc400030  sd          $zero, 0x30($v0)
    ctx->pc = 0x319a48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
    // 0x319a4c: 0xfc490038  sd          $t1, 0x38($v0)
    ctx->pc = 0x319a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 9));
    // 0x319a50: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x319a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x319a54: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x319a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x319a58: 0xfc480040  sd          $t0, 0x40($v0)
    ctx->pc = 0x319a58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 8));
    // 0x319a5c: 0xfc470048  sd          $a3, 0x48($v0)
    ctx->pc = 0x319a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 7));
    // 0x319a60: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x319a60u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x319a64: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x319a64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x319a68: 0x24035135  addiu       $v1, $zero, 0x5135
    ctx->pc = 0x319a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20789));
    // 0x319a6c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x319a6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x319a70: 0x3c031351  lui         $v1, 0x1351
    ctx->pc = 0x319a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4945 << 16));
    // 0x319a74: 0x34653513  ori         $a1, $v1, 0x3513
    ctx->pc = 0x319a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x319a78: 0xa73825  or          $a3, $a1, $a3
    ctx->pc = 0x319a78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x319a7c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x319a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x319a80: 0xfc470058  sd          $a3, 0x58($v0)
    ctx->pc = 0x319a80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 7));
    // 0x319a84: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x319a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x319a88: 0x8c690370  lw          $t1, 0x370($v1)
    ctx->pc = 0x319a88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x319a8c: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x319a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x319a90: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319a94: 0x25280060  addiu       $t0, $t1, 0x60
    ctx->pc = 0x319a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x319a98: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x319a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x319a9c: 0xaca80370  sw          $t0, 0x370($a1)
    ctx->pc = 0x319a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 8));
    // 0x319aa0: 0xad270060  sw          $a3, 0x60($t1)
    ctx->pc = 0x319aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 7));
    // 0x319aa4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x319aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x319aa8: 0x8c6f0370  lw          $t7, 0x370($v1)
    ctx->pc = 0x319aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x319aac: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x319aacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x319ab0: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x319ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x319ab4: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x319ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x319ab8: 0xadf00004  sw          $s0, 0x4($t7)
    ctx->pc = 0x319ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 16));
    // 0x319abc: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x319abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x319ac0: 0x8daf0370  lw          $t7, 0x370($t5)
    ctx->pc = 0x319ac0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x319ac4: 0xade00008  sw          $zero, 0x8($t7)
    ctx->pc = 0x319ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 0));
    // 0x319ac8: 0xe6900  sll         $t5, $t6, 4
    ctx->pc = 0x319ac8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x319acc: 0x8d8c0370  lw          $t4, 0x370($t4)
    ctx->pc = 0x319accu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x319ad0: 0x25ad6c00  addiu       $t5, $t5, 0x6C00
    ctx->pc = 0x319ad0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
    // 0x319ad4: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x319ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x319ad8: 0x8d6c0370  lw          $t4, 0x370($t3)
    ctx->pc = 0x319ad8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x319adc: 0x258b0010  addiu       $t3, $t4, 0x10
    ctx->pc = 0x319adcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x319ae0: 0xac4b0370  sw          $t3, 0x370($v0)
    ctx->pc = 0x319ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 11));
    // 0x319ae4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x319ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x319ae8: 0xad820010  sw          $v0, 0x10($t4)
    ctx->pc = 0x319ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 2));
    // 0x319aec: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x319aecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x319af0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x319af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x319af4: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x319af4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x319af8: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x319af8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x319afc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x319afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x319b00: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x319b00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x319b04: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x319b04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x319b08: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x319b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x319b0c: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x319b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x319b10: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x319b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x319b14: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x319b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x319b18: 0xaca20370  sw          $v0, 0x370($a1)
    ctx->pc = 0x319b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 2));
    // 0x319b1c: 0xaced0010  sw          $t5, 0x10($a3)
    ctx->pc = 0x319b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 13));
    // 0x319b20: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x319b20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x319b24: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x319B24u;
    {
        const bool branch_taken_0x319b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319b24) {
            ctx->pc = 0x319B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319B24u;
            // 0x319b28: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319B80u;
            goto label_319b80;
        }
    }
    ctx->pc = 0x319B2Cu;
    // 0x319b2c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x319b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x319b30: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x319b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x319b34: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x319b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x319b38: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x319b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x319b3c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x319b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x319b40: 0x24a57100  addiu       $a1, $a1, 0x7100
    ctx->pc = 0x319b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
    // 0x319b44: 0x24a78000  addiu       $a3, $a1, -0x8000
    ctx->pc = 0x319b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x319b48: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x319b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x319b4c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x319b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x319b50: 0x53980  sll         $a3, $a1, 6
    ctx->pc = 0x319b50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x319b54: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x319b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x319b58: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x319b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x319b5c: 0x0  nop
    ctx->pc = 0x319b5cu;
    // NOP
    // 0x319b60: 0x1810  mfhi        $v1
    ctx->pc = 0x319b60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x319b64: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x319b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x319b68: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x319b68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x319b6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x319b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x319b70: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x319b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x319b74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x319b78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x319B78u;
    {
        const bool branch_taken_0x319b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B78u;
        // 0x319b7c: 0x625024  and         $t2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b78) {
            ctx->pc = 0x319B88u;
            goto label_319b88;
        }
    }
    ctx->pc = 0x319B80u;
label_319b80:
    // 0x319b80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x319b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319b84: 0x244a7100  addiu       $t2, $v0, 0x7100
    ctx->pc = 0x319b84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_319b88:
    // 0x319b88: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x319b88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x319b8c: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x319b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x319b90: 0x2408a833  addiu       $t0, $zero, -0x57CD
    ctx->pc = 0x319b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x319b94: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x319b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x319b98: 0x8fb60274  lw          $s6, 0x274($sp)
    ctx->pc = 0x319b98u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x319b9c: 0x3c1401dc  lui         $s4, 0x1DC
    ctx->pc = 0x319b9cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)476 << 16));
    // 0x319ba0: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x319ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319ba4: 0x3c1101dc  lui         $s1, 0x1DC
    ctx->pc = 0x319ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)476 << 16));
    // 0x319ba8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319bac: 0x3c1001dc  lui         $s0, 0x1DC
    ctx->pc = 0x319bacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)476 << 16));
    // 0x319bb0: 0x8c490370  lw          $t1, 0x370($v0)
    ctx->pc = 0x319bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x319bb4: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x319bb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x319bb8: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x319bb8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x319bbc: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x319bbcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x319bc0: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x319bc0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x319bc4: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x319bc4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x319bc8: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x319bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x319bcc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319bd0: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x319bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x319bd4: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x319bd4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x319bd8: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x319bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x319bdc: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x319bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x319be0: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x319be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x319be4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x319be4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x319be8: 0x3c07009d  lui         $a3, 0x9D
    ctx->pc = 0x319be8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)157 << 16));
    // 0x319bec: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x319becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x319bf0: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x319bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x319bf4: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x319bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x319bf8: 0x24760010  addiu       $s6, $v1, 0x10
    ctx->pc = 0x319bf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x319bfc: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x319bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x319c00: 0xae960370  sw          $s6, 0x370($s4)
    ctx->pc = 0x319c00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 880), GPR_U32(ctx, 22));
    // 0x319c04: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x319c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x319c08: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x319c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x319c0c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x319c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x319c10: 0x8e030370  lw          $v1, 0x370($s0)
    ctx->pc = 0x319c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x319c14: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x319c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x319c18: 0x8de30370  lw          $v1, 0x370($t7)
    ctx->pc = 0x319c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 880)));
    // 0x319c1c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x319c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x319c20: 0x8dc40370  lw          $a0, 0x370($t6)
    ctx->pc = 0x319c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x319c24: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x319c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x319c28: 0xada30370  sw          $v1, 0x370($t5)
    ctx->pc = 0x319c28u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 880), GPR_U32(ctx, 3));
    // 0x319c2c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x319c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x319c30: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x319c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x319c34: 0x8d840370  lw          $a0, 0x370($t4)
    ctx->pc = 0x319c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x319c38: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x319c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x319c3c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x319c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x319c40: 0x8d640370  lw          $a0, 0x370($t3)
    ctx->pc = 0x319c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x319c44: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x319c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x319c48: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x319c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x319c4c: 0x8d440370  lw          $a0, 0x370($t2)
    ctx->pc = 0x319c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x319c50: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x319c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x319c54: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x319c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x319c58: 0x8d240370  lw          $a0, 0x370($t1)
    ctx->pc = 0x319c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x319c5c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x319c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x319c60: 0xad030370  sw          $v1, 0x370($t0)
    ctx->pc = 0x319c60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 880), GPR_U32(ctx, 3));
    // 0x319c64: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x319c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x319c68: 0x90e2b280  lbu         $v0, -0x4D80($a3)
    ctx->pc = 0x319c68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294947456)));
    // 0x319c6c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x319C6Cu;
    {
        const bool branch_taken_0x319c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319c6c) {
            ctx->pc = 0x319C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319C6Cu;
            // 0x319c70: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319CC8u;
            goto label_319cc8;
        }
    }
    ctx->pc = 0x319C74u;
    // 0x319c74: 0x8fa40264  lw          $a0, 0x264($sp)
    ctx->pc = 0x319c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x319c78: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x319c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x319c7c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x319c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x319c80: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x319c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x319c84: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x319c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x319c88: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x319c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x319c8c: 0x24878000  addiu       $a3, $a0, -0x8000
    ctx->pc = 0x319c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x319c90: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x319c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x319c94: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x319c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x319c98: 0x43980  sll         $a3, $a0, 6
    ctx->pc = 0x319c98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x319c9c: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x319c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x319ca0: 0x727c2  srl         $a0, $a3, 31
    ctx->pc = 0x319ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x319ca4: 0x0  nop
    ctx->pc = 0x319ca4u;
    // NOP
    // 0x319ca8: 0x1810  mfhi        $v1
    ctx->pc = 0x319ca8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x319cac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x319cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x319cb0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x319cb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x319cb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x319cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x319cb8: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x319cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x319cbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x319cc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x319CC0u;
    {
        const bool branch_taken_0x319cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CC0u;
        // 0x319cc4: 0x625024  and         $t2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319cc0) {
            ctx->pc = 0x319CD0u;
            goto label_319cd0;
        }
    }
    ctx->pc = 0x319CC8u;
label_319cc8:
    // 0x319cc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x319cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319ccc: 0x244a7100  addiu       $t2, $v0, 0x7100
    ctx->pc = 0x319cccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_319cd0:
    // 0x319cd0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x319cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x319cd4: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x319cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x319cd8: 0x2408a833  addiu       $t0, $zero, -0x57CD
    ctx->pc = 0x319cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x319cdc: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x319cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x319ce0: 0x8fb60278  lw          $s6, 0x278($sp)
    ctx->pc = 0x319ce0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x319ce4: 0x3c1401dc  lui         $s4, 0x1DC
    ctx->pc = 0x319ce4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)476 << 16));
    // 0x319ce8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x319ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319cec: 0x3c1101dc  lui         $s1, 0x1DC
    ctx->pc = 0x319cecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)476 << 16));
    // 0x319cf0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319cf4: 0x3c1001dc  lui         $s0, 0x1DC
    ctx->pc = 0x319cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)476 << 16));
    // 0x319cf8: 0x8c490370  lw          $t1, 0x370($v0)
    ctx->pc = 0x319cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x319cfc: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x319cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x319d00: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x319d00u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x319d04: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x319d04u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x319d08: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x319d08u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x319d0c: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x319d0cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x319d10: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x319d10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x319d14: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319d18: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x319d18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x319d1c: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x319d1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x319d20: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x319d20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x319d24: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x319d24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x319d28: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x319d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x319d2c: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x319d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x319d30: 0x3c07009d  lui         $a3, 0x9D
    ctx->pc = 0x319d30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)157 << 16));
    // 0x319d34: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x319d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x319d38: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x319d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x319d3c: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x319d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x319d40: 0x24960010  addiu       $s6, $a0, 0x10
    ctx->pc = 0x319d40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x319d44: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x319d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x319d48: 0xae960370  sw          $s6, 0x370($s4)
    ctx->pc = 0x319d48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 880), GPR_U32(ctx, 22));
    // 0x319d4c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x319d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x319d50: 0x8e240370  lw          $a0, 0x370($s1)
    ctx->pc = 0x319d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x319d54: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x319d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x319d58: 0x8e040370  lw          $a0, 0x370($s0)
    ctx->pc = 0x319d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x319d5c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x319d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x319d60: 0x8de40370  lw          $a0, 0x370($t7)
    ctx->pc = 0x319d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 880)));
    // 0x319d64: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x319d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x319d68: 0x8dc60370  lw          $a2, 0x370($t6)
    ctx->pc = 0x319d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x319d6c: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x319d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x319d70: 0xada40370  sw          $a0, 0x370($t5)
    ctx->pc = 0x319d70u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 880), GPR_U32(ctx, 4));
    // 0x319d74: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x319d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x319d78: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x319d78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x319d7c: 0x8d860370  lw          $a2, 0x370($t4)
    ctx->pc = 0x319d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x319d80: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x319d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x319d84: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x319d84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x319d88: 0x8d660370  lw          $a2, 0x370($t3)
    ctx->pc = 0x319d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x319d8c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x319d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x319d90: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x319d90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x319d94: 0x8d460370  lw          $a2, 0x370($t2)
    ctx->pc = 0x319d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x319d98: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x319d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x319d9c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x319d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x319da0: 0x8d260370  lw          $a2, 0x370($t1)
    ctx->pc = 0x319da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x319da4: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x319da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x319da8: 0xad040370  sw          $a0, 0x370($t0)
    ctx->pc = 0x319da8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 880), GPR_U32(ctx, 4));
    // 0x319dac: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x319dacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x319db0: 0x90e2b280  lbu         $v0, -0x4D80($a3)
    ctx->pc = 0x319db0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294947456)));
    // 0x319db4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x319DB4u;
    {
        const bool branch_taken_0x319db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319db4) {
            ctx->pc = 0x319DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319DB4u;
            // 0x319db8: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319E10u;
            goto label_319e10;
        }
    }
    ctx->pc = 0x319DBCu;
    // 0x319dbc: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x319dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x319dc0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x319dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x319dc4: 0x34448889  ori         $a0, $v0, 0x8889
    ctx->pc = 0x319dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x319dc8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x319dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x319dcc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x319dccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x319dd0: 0x24c67100  addiu       $a2, $a2, 0x7100
    ctx->pc = 0x319dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28928));
    // 0x319dd4: 0x24c78000  addiu       $a3, $a2, -0x8000
    ctx->pc = 0x319dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x319dd8: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x319dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x319ddc: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x319ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x319de0: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x319de0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x319de4: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x319de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x319de8: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x319de8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x319dec: 0x0  nop
    ctx->pc = 0x319decu;
    // NOP
    // 0x319df0: 0x2010  mfhi        $a0
    ctx->pc = 0x319df0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x319df4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x319df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x319df8: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x319df8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x319dfc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x319dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x319e00: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x319e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x319e04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x319e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x319e08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x319E08u;
    {
        const bool branch_taken_0x319e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E08u;
        // 0x319e0c: 0x824024  and         $t0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e08) {
            ctx->pc = 0x319E18u;
            goto label_319e18;
        }
    }
    ctx->pc = 0x319E10u;
label_319e10:
    // 0x319e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x319e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319e14: 0x24487100  addiu       $t0, $v0, 0x7100
    ctx->pc = 0x319e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_319e18:
    // 0x319e18: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319e1c: 0x2407a833  addiu       $a3, $zero, -0x57CD
    ctx->pc = 0x319e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x319e20: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x319e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x319e24: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x319e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x319e28: 0x3c1001dc  lui         $s0, 0x1DC
    ctx->pc = 0x319e28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)476 << 16));
    // 0x319e2c: 0x8fb1027c  lw          $s1, 0x27C($sp)
    ctx->pc = 0x319e2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x319e30: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x319e30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x319e34: 0x3c0e01dc  lui         $t6, 0x1DC
    ctx->pc = 0x319e34u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
    // 0x319e38: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x319e38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x319e3c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319e40: 0x8c460370  lw          $a2, 0x370($v0)
    ctx->pc = 0x319e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x319e44: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x319e44u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x319e48: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x319e48u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x319e4c: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x319e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x319e50: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x319e50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x319e54: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x319e54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x319e58: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x319e58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x319e5c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319e60: 0x8c940370  lw          $s4, 0x370($a0)
    ctx->pc = 0x319e60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x319e64: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x319e64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x319e68: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x319e68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x319e6c: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x319e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x319e70: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x319e70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
    // 0x319e74: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x319e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x319e78: 0x8e140370  lw          $s4, 0x370($s0)
    ctx->pc = 0x319e78u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x319e7c: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x319e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x319e80: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x319e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x319e84: 0x26106c00  addiu       $s0, $s0, 0x6C00
    ctx->pc = 0x319e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
    // 0x319e88: 0xadf10370  sw          $s1, 0x370($t7)
    ctx->pc = 0x319e88u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 880), GPR_U32(ctx, 17));
    // 0x319e8c: 0xae850010  sw          $a1, 0x10($s4)
    ctx->pc = 0x319e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 5));
    // 0x319e90: 0x8dc50370  lw          $a1, 0x370($t6)
    ctx->pc = 0x319e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 880)));
    // 0x319e94: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x319e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x319e98: 0x8da30370  lw          $v1, 0x370($t5)
    ctx->pc = 0x319e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x319e9c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x319e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x319ea0: 0x8d830370  lw          $v1, 0x370($t4)
    ctx->pc = 0x319ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x319ea4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x319ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x319ea8: 0x8d650370  lw          $a1, 0x370($t3)
    ctx->pc = 0x319ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x319eac: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x319eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319eb0: 0xac430370  sw          $v1, 0x370($v0)
    ctx->pc = 0x319eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 3));
    // 0x319eb4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x319eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x319eb8: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x319eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x319ebc: 0x8d430370  lw          $v1, 0x370($t2)
    ctx->pc = 0x319ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x319ec0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x319ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x319ec4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x319ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x319ec8: 0x8d230370  lw          $v1, 0x370($t1)
    ctx->pc = 0x319ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x319ecc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x319eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x319ed0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x319ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x319ed4: 0x8d030370  lw          $v1, 0x370($t0)
    ctx->pc = 0x319ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x319ed8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x319ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x319edc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x319edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x319ee0: 0x8ce30370  lw          $v1, 0x370($a3)
    ctx->pc = 0x319ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x319ee4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x319ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x319ee8: 0xacc20370  sw          $v0, 0x370($a2)
    ctx->pc = 0x319ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 880), GPR_U32(ctx, 2));
    // 0x319eec: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x319eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
    // 0x319ef0: 0x9082b280  lbu         $v0, -0x4D80($a0)
    ctx->pc = 0x319ef0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x319ef4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x319EF4u;
    {
        const bool branch_taken_0x319ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x319ef4) {
            ctx->pc = 0x319EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319EF4u;
            // 0x319ef8: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319F50u;
            goto label_319f50;
        }
    }
    ctx->pc = 0x319EFCu;
    // 0x319efc: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x319efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x319f00: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x319f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x319f04: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x319f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x319f08: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x319f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x319f0c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x319f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x319f10: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x319f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x319f14: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x319f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x319f18: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x319f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x319f1c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x319f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x319f20: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x319f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x319f24: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x319f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x319f28: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x319f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x319f2c: 0x0  nop
    ctx->pc = 0x319f2cu;
    // NOP
    // 0x319f30: 0x1810  mfhi        $v1
    ctx->pc = 0x319f30u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x319f34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x319f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x319f38: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x319f38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x319f3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x319f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x319f40: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x319f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x319f44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x319f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x319f48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x319F48u;
    {
        const bool branch_taken_0x319f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F48u;
        // 0x319f4c: 0x622024  and         $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f48) {
            ctx->pc = 0x319F58u;
            goto label_319f58;
        }
    }
    ctx->pc = 0x319F50u;
label_319f50:
    // 0x319f50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x319f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x319f54: 0x24447100  addiu       $a0, $v0, 0x7100
    ctx->pc = 0x319f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28928));
label_319f58:
    // 0x319f58: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319f5c: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x319f5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x319f60: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x319f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x319f64: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x319f64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x319f68: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x319f68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x319f6c: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x319f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x319f70: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x319f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x319f74: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x319f74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x319f78: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x319f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x319f7c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x319f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x319f80: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x319f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x319f84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x319f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x319f88: 0x346b0012  ori         $t3, $v1, 0x12
    ctx->pc = 0x319f88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
    // 0x319f8c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x319f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x319f90: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x319f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x319f94: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x319f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x319f98: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x319f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x319f9c: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x319f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x319fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x319fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319fa4: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x319fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x319fa8: 0x7c6001f0  sq          $zero, 0x1F0($v1)
    ctx->pc = 0x319fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 496), GPR_VEC(ctx, 0));
    // 0x319fac: 0xac4a01f0  sw          $t2, 0x1F0($v0)
    ctx->pc = 0x319facu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 496), GPR_U32(ctx, 10)); // MMIO: 0x700001f0
    // 0x319fb0: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x319fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x319fb4: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x319fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x319fb8: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x319fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x319fbc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x319fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x319fc0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x319FC0u;
    SET_GPR_U32(ctx, 31, 0x319FC8u);
    ctx->pc = 0x319FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FC0u;
    // 0x319fc4: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x319FC0u, 0x319FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FC8u;
label_319fc8:
    // 0x319fc8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x319fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x319fcc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x319fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x319fd0: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x319fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x319fd4: 0xc040a04  jal         func_102810
    ctx->pc = 0x319FD4u;
    SET_GPR_U32(ctx, 31, 0x319FDCu);
    ctx->pc = 0x319FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FD4u;
    // 0x319fd8: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x319FD4u, 0x319FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FDCu;
label_319fdc:
    // 0x319fdc: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x319fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_319fe0:
    // 0x319fe0: 0x8c66a000  lw          $a2, -0x6000($v1)
    ctx->pc = 0x319fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x319fe4: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x319fe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x319fe8: 0x0  nop
    ctx->pc = 0x319fe8u;
    // NOP
    // 0x319fec: 0x0  nop
    ctx->pc = 0x319fecu;
    // NOP
    // 0x319ff0: 0x0  nop
    ctx->pc = 0x319ff0u;
    // NOP
    // 0x319ff4: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x319FF4u;
    {
        const bool branch_taken_0x319ff4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x319ff4) {
            ctx->pc = 0x319FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_319fe0;
        }
    }
    ctx->pc = 0x319FFCu;
    // 0x319ffc: 0x0  nop
    ctx->pc = 0x319ffcu;
    // NOP
label_31a000:
    // 0x31a000: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x31a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x31a004: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x31a004u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x31a008: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x31a008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x31a00c: 0x2be182b  sltu        $v1, $s5, $fp
    ctx->pc = 0x31a00cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x31a010: 0x1460fd1f  bnez        $v1, . + 4 + (-0x2E1 << 2)
    ctx->pc = 0x31A010u;
    {
        const bool branch_taken_0x31a010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A010u;
        // 0x31a014: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a010) {
            ctx->pc = 0x319490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_319490;
        }
    }
    ctx->pc = 0x31A018u;
label_31a018:
    // 0x31a018: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x31a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31a01c: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x31a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x31a020: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x31a020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
    // 0x31a024: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x31a024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x31a028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31a028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31a02c: 0xafa30210  sw          $v1, 0x210($sp)
    ctx->pc = 0x31a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 3));
    // 0x31a030: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x31a030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a034: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x31a034u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31a038: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x31a038u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31a03c: 0x1460fd05  bnez        $v1, . + 4 + (-0x2FB << 2)
    ctx->pc = 0x31A03Cu;
    {
        const bool branch_taken_0x31a03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a03c) {
            ctx->pc = 0x319454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_319454;
        }
    }
    ctx->pc = 0x31A044u;
    // 0x31a044: 0x0  nop
    ctx->pc = 0x31a044u;
    // NOP
label_31a048:
    // 0x31a048: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31a048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31a04c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x31a04cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31a050: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x31a050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x31a054: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x31a054u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31a058: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x31a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31a05c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x31a05cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31a060: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31a064: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x31a064u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31a068: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31a06c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31a06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31a070: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31a070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a074: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31a074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a078: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31a078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a07c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31a07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a080: 0x3e00008  jr          $ra
    ctx->pc = 0x31A080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A080u;
        // 0x31a084: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A088u;
    // 0x31a088: 0x0  nop
    ctx->pc = 0x31a088u;
    // NOP
    // 0x31a08c: 0x0  nop
    ctx->pc = 0x31a08cu;
    // NOP
    // 0x31a090: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x31a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x31a094: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31a098: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31a09c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31a0a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31a0a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31a0a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31a0ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31a0b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31a0b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31a0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a0bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31a0c0: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x31a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
    // 0x31a0c4: 0x90700014  lbu         $s0, 0x14($v1)
    ctx->pc = 0x31a0c4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x31a0c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a0cc: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x31a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x31a0d0: 0x90630015  lbu         $v1, 0x15($v1)
    ctx->pc = 0x31a0d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
    // 0x31a0d4: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x31a0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x31a0d8: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x31a0d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31a0dc: 0x847e0010  lh          $fp, 0x10($v1)
    ctx->pc = 0x31a0dcu;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31a0e0: 0x84630012  lh          $v1, 0x12($v1)
    ctx->pc = 0x31a0e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x31a0e4: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x31a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x31a0e8: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x31a0e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31a0ec: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x31a0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31a0f0: 0x90650018  lbu         $a1, 0x18($v1)
    ctx->pc = 0x31a0f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x31a0f4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x31a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x31a0f8: 0x3c33018  mult        $a2, $fp, $v1
    ctx->pc = 0x31a0f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31a0fc: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x31a0fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31a100: 0x6b840  sll         $s7, $a2, 1
    ctx->pc = 0x31a100u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31a104: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31A104u;
    {
        const bool branch_taken_0x31a104 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x31A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A104u;
        // 0x31a108: 0x679821  addu        $s3, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a104) {
            ctx->pc = 0x31A110u;
            goto label_31a110;
        }
    }
    ctx->pc = 0x31A10Cu;
    // 0x31a10c: 0x6b880  sll         $s7, $a2, 2
    ctx->pc = 0x31a10cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_31a110:
    // 0x31a110: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x31a110u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31a114: 0x94630016  lhu         $v1, 0x16($v1)
    ctx->pc = 0x31a114u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x31a118: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A118u;
    {
        const bool branch_taken_0x31a118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a118) {
            ctx->pc = 0x31A12Cu;
            goto label_31a12c;
        }
    }
    ctx->pc = 0x31A120u;
    // 0x31a120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a124: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31a124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31a128: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x31a128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31a12c:
    // 0x31a12c: 0x7c20004  bltzl       $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A12Cu;
    {
        const bool branch_taken_0x31a12c = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x31a12c) {
            ctx->pc = 0x31A130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A12Cu;
            // 0x31a130: 0x1e2042  srl         $a0, $fp, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A140u;
            goto label_31a140;
        }
    }
    ctx->pc = 0x31A134u;
    // 0x31a134: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x31a134u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a138: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31A138u;
    {
        const bool branch_taken_0x31a138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A138u;
        // 0x31a13c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a138) {
            ctx->pc = 0x31A158u;
            goto label_31a158;
        }
    }
    ctx->pc = 0x31A140u;
label_31a140:
    // 0x31a140: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x31a140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x31a144: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31a144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31a148: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a148u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a14c: 0x0  nop
    ctx->pc = 0x31a14cu;
    // NOP
    // 0x31a150: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31a150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31a154: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31a154u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31a158:
    // 0x31a158: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31a15c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x31a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a160: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x31a160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x31a164: 0xafa30220  sw          $v1, 0x220($sp)
    ctx->pc = 0x31a164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 3));
    // 0x31a168: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31a168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31a16c: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31a170: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x31a170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x31a174: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31a178: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x31a178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x31a17c: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31a180: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x31a180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x31a184: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x31a184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x31a188: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x31a188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x31a18c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x31A18Cu;
    {
        const bool branch_taken_0x31a18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a18c) {
            ctx->pc = 0x31A190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A18Cu;
            // 0x31a190: 0x8fa301c0  lw          $v1, 0x1C0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A1B0u;
            goto label_31a1b0;
        }
    }
    ctx->pc = 0x31A194u;
    // 0x31a194: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31a198: 0x14a023  negu        $s4, $s4
    ctx->pc = 0x31a198u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x31a19c: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x31a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x31a1a0: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x31a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x31a1a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a1a8: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x31a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x31a1ac: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x31a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_31a1b0:
    // 0x31a1b0: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A1B0u;
    {
        const bool branch_taken_0x31a1b0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31a1b0) {
            ctx->pc = 0x31A1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A1B0u;
            // 0x31a1b4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A1C4u;
            goto label_31a1c4;
        }
    }
    ctx->pc = 0x31A1B8u;
    // 0x31a1b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a1bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31A1BCu;
    {
        const bool branch_taken_0x31a1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1BCu;
        // 0x31a1c0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1bc) {
            ctx->pc = 0x31A1DCu;
            goto label_31a1dc;
        }
    }
    ctx->pc = 0x31A1C4u;
label_31a1c4:
    // 0x31a1c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31a1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31a1c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31a1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31a1cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a1ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a1d0: 0x0  nop
    ctx->pc = 0x31a1d0u;
    // NOP
    // 0x31a1d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31a1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31a1d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31a1d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31a1dc:
    // 0x31a1dc: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x31a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x31a1e0: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x31a1e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x31a1e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31a1e8: 0xafa30210  sw          $v1, 0x210($sp)
    ctx->pc = 0x31a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 3));
    // 0x31a1ec: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31a1f0: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x31a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a1f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31a1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31a1f8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x31a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x31a1fc: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x31a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
    // 0x31a200: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31a204: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31a204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31a208: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31A208u;
    {
        const bool branch_taken_0x31a208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A208u;
        // 0x31a20c: 0xafa301d0  sw          $v1, 0x1D0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a208) {
            ctx->pc = 0x31A230u;
            goto label_31a230;
        }
    }
    ctx->pc = 0x31A210u;
    // 0x31a210: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31a214: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x31a214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x31a218: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x31a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x31a21c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x31a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x31a220: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x31a220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
    // 0x31a224: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x31a224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31a228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a22c: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x31a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_31a230:
    // 0x31a230: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31a230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31a234: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x31a234u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x31a238: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x31a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31a23c: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x31a23cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31a240: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x31a240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x31a244: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x31a244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x31a248: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x31a248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x31a24c: 0x1232824  and         $a1, $t1, $v1
    ctx->pc = 0x31a24cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x31a250: 0x74602  srl         $t0, $a3, 24
    ctx->pc = 0x31a250u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x31a254: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x31a254u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x31a258: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x31a258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31a25c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31a25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31a260: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x31a260u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x31a264: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x31a264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
    // 0x31a268: 0x72843  sra         $a1, $a3, 1
    ctx->pc = 0x31a268u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
    // 0x31a26c: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x31a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x31a270: 0x3127ff00  andi        $a3, $t1, 0xFF00
    ctx->pc = 0x31a270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x31a274: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x31a274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x31a278: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x31a278u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x31a27c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31a280: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31a280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31a284: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x31a284u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x31a288: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x31a288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x31a28c: 0x72843  sra         $a1, $a3, 1
    ctx->pc = 0x31a28cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
    // 0x31a290: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x31a290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x31a294: 0x62a3c  dsll32      $a1, $a2, 8
    ctx->pc = 0x31a294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 8));
    // 0x31a298: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x31a298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x31a29c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31A29Cu;
    {
        const bool branch_taken_0x31a29c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A29Cu;
        // 0x31a2a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a29c) {
            ctx->pc = 0x31A2C0u;
            goto label_31a2c0;
        }
    }
    ctx->pc = 0x31A2A4u;
    // 0x31a2a4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x31a2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x31a2a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a2ac: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x31a2acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x31a2b0: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x31a2b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x31a2b4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x31a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x31a2b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31a2bc: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x31a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_31a2c0:
    // 0x31a2c0: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x31a2c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31a2c4: 0x106001b4  beqz        $v1, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x31A2C4u;
    {
        const bool branch_taken_0x31a2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2C4u;
        // 0x31a2c8: 0xafa00200  sw          $zero, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2c4) {
            ctx->pc = 0x31A998u;
            goto label_31a998;
        }
    }
    ctx->pc = 0x31A2CCu;
    // 0x31a2cc: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x31a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31a2d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31a2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31a2d4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x31a2d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x31a2d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31a2dc: 0x24637100  addiu       $v1, $v1, 0x7100
    ctx->pc = 0x31a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
    // 0x31a2e0: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x31a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x31a2e4: 0x418fc  dsll32      $v1, $a0, 3
    ctx->pc = 0x31a2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 3));
    // 0x31a2e8: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x31a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x31a2ec: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x31a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x31a2f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31a2f4: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x31a2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x31a2f8: 0x8fb101f0  lw          $s1, 0x1F0($sp)
    ctx->pc = 0x31a2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_31a2fc:
    // 0x31a2fc: 0x12000196  beqz        $s0, . + 4 + (0x196 << 2)
    ctx->pc = 0x31A2FCu;
    {
        const bool branch_taken_0x31a2fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2FCu;
        // 0x31a300: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2fc) {
            ctx->pc = 0x31A958u;
            goto label_31a958;
        }
    }
    ctx->pc = 0x31A304u;
    // 0x31a304: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x31a304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a308: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x31a308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31a30c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31a310: 0x14b100  sll         $s6, $s4, 4
    ctx->pc = 0x31a310u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x31a314: 0x24726c00  addiu       $s2, $v1, 0x6C00
    ctx->pc = 0x31a314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x31a318: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x31a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x31a31c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31a320: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x31a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x31a324: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x31a324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x31a328: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x31a328u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31a32c: 0x24658000  addiu       $a1, $v1, -0x8000
    ctx->pc = 0x31a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x31a330: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x31a330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x31a334: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x31a334u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x31a338: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x31a338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x31a33c: 0x24c67100  addiu       $a2, $a2, 0x7100
    ctx->pc = 0x31a33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28928));
    // 0x31a340: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x31a340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31a344: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x31a344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    // 0x31a348: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x31a348u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31a34c: 0x24c78000  addiu       $a3, $a2, -0x8000
    ctx->pc = 0x31a34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x31a350: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x31a350u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x31a354: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x31a354u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x31a358: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x31a358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31a35c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x31a35cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x31a360: 0x63980  sll         $a3, $a2, 6
    ctx->pc = 0x31a360u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x31a364: 0x54fc2  srl         $t1, $a1, 31
    ctx->pc = 0x31a364u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x31a368: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x31a368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x31a36c: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x31a36cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x31a370: 0x4010  mfhi        $t0
    ctx->pc = 0x31a370u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x31a374: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x31a374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31a378: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x31a378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x31a37c: 0x52203  sra         $a0, $a1, 8
    ctx->pc = 0x31a37cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 8));
    // 0x31a380: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x31a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x31a384: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x31a384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x31a388: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31a38c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x31a38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31a390: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x31a390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x31a394: 0x2010  mfhi        $a0
    ctx->pc = 0x31a394u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x31a398: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x31a398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x31a39c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x31a39cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x31a3a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x31a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x31a3a4: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x31a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x31a3a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31a3ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31a3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31a3b0: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x31a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x31a3b4: 0x0  nop
    ctx->pc = 0x31a3b4u;
    // NOP
label_31a3b8:
    // 0x31a3b8: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31a3bc: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x31a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x31a3c0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x31a3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x31a3c4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31A3C4u;
    {
        const bool branch_taken_0x31a3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3C4u;
        // 0x31a3c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3c4) {
            ctx->pc = 0x31A3F8u;
            goto label_31a3f8;
        }
    }
    ctx->pc = 0x31A3CCu;
    // 0x31a3cc: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x31a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x31a3d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A3D0u;
    {
        const bool branch_taken_0x31a3d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x31A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3D0u;
        // 0x31a3d4: 0xafa30160  sw          $v1, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3d0) {
            ctx->pc = 0x31A3E0u;
            goto label_31a3e0;
        }
    }
    ctx->pc = 0x31A3D8u;
    // 0x31a3d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3dc: 0x0  nop
    ctx->pc = 0x31a3dcu;
    // NOP
label_31a3e0:
    // 0x31a3e0: 0x2a210281  slti        $at, $s1, 0x281
    ctx->pc = 0x31a3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x31a3e4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x31A3E4u;
    {
        const bool branch_taken_0x31a3e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a3e4) {
            ctx->pc = 0x31A420u;
            goto label_31a420;
        }
    }
    ctx->pc = 0x31A3ECu;
    // 0x31a3ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31A3ECu;
    {
        const bool branch_taken_0x31a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3ECu;
        // 0x31a3f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3ec) {
            ctx->pc = 0x31A420u;
            goto label_31a420;
        }
    }
    ctx->pc = 0x31A3F4u;
    // 0x31a3f4: 0x0  nop
    ctx->pc = 0x31a3f4u;
    // NOP
label_31a3f8:
    // 0x31a3f8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A3F8u;
    {
        const bool branch_taken_0x31a3f8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x31a3f8) {
            ctx->pc = 0x31A408u;
            goto label_31a408;
        }
    }
    ctx->pc = 0x31A400u;
    // 0x31a400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a404: 0x0  nop
    ctx->pc = 0x31a404u;
    // NOP
label_31a408:
    // 0x31a408: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x31a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x31a40c: 0x28610281  slti        $at, $v1, 0x281
    ctx->pc = 0x31a40cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x31a410: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A410u;
    {
        const bool branch_taken_0x31a410 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A410u;
        // 0x31a414: 0xafa30160  sw          $v1, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a410) {
            ctx->pc = 0x31A420u;
            goto label_31a420;
        }
    }
    ctx->pc = 0x31A418u;
    // 0x31a418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a41c: 0x0  nop
    ctx->pc = 0x31a41cu;
    // NOP
label_31a420:
    // 0x31a420: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x31a420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x31a424: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31A424u;
    {
        const bool branch_taken_0x31a424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a424) {
            ctx->pc = 0x31A458u;
            goto label_31a458;
        }
    }
    ctx->pc = 0x31A42Cu;
    // 0x31a42c: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x31a42cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31a430: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A430u;
    {
        const bool branch_taken_0x31a430 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31a430) {
            ctx->pc = 0x31A440u;
            goto label_31a440;
        }
    }
    ctx->pc = 0x31A438u;
    // 0x31a438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a43c: 0x0  nop
    ctx->pc = 0x31a43cu;
    // NOP
label_31a440:
    // 0x31a440: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x31a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31a444: 0x286101e1  slti        $at, $v1, 0x1E1
    ctx->pc = 0x31a444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)481) ? 1 : 0);
    // 0x31a448: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x31A448u;
    {
        const bool branch_taken_0x31a448 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a448) {
            ctx->pc = 0x31A480u;
            goto label_31a480;
        }
    }
    ctx->pc = 0x31A450u;
    // 0x31a450: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31A450u;
    {
        const bool branch_taken_0x31a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A450u;
        // 0x31a454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a450) {
            ctx->pc = 0x31A480u;
            goto label_31a480;
        }
    }
    ctx->pc = 0x31A458u;
label_31a458:
    // 0x31a458: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x31a458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31a45c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31A45Cu;
    {
        const bool branch_taken_0x31a45c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31a45c) {
            ctx->pc = 0x31A468u;
            goto label_31a468;
        }
    }
    ctx->pc = 0x31A464u;
    // 0x31a464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a468:
    // 0x31a468: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x31a468u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31a46c: 0x286101e1  slti        $at, $v1, 0x1E1
    ctx->pc = 0x31a46cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)481) ? 1 : 0);
    // 0x31a470: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A470u;
    {
        const bool branch_taken_0x31a470 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a470) {
            ctx->pc = 0x31A480u;
            goto label_31a480;
        }
    }
    ctx->pc = 0x31A478u;
    // 0x31a478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a47c: 0x0  nop
    ctx->pc = 0x31a47cu;
    // NOP
label_31a480:
    // 0x31a480: 0x10a0012f  beqz        $a1, . + 4 + (0x12F << 2)
    ctx->pc = 0x31A480u;
    {
        const bool branch_taken_0x31a480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a480) {
            ctx->pc = 0x31A940u;
            goto label_31a940;
        }
    }
    ctx->pc = 0x31A488u;
    // 0x31a488: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31a48c: 0x8c424790  lw          $v0, 0x4790($v0)
    ctx->pc = 0x31a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18320)));
    // 0x31a490: 0x12620035  beq         $s3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31A490u;
    {
        const bool branch_taken_0x31a490 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31a490) {
            ctx->pc = 0x31A568u;
            goto label_31a568;
        }
    }
    ctx->pc = 0x31A498u;
    // 0x31a498: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x31a498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31a49c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31a49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a4a0: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x31a4a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x31a4a4: 0x10470018  beq         $v0, $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x31A4A4u;
    {
        const bool branch_taken_0x31a4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x31a4a4) {
            ctx->pc = 0x31A508u;
            goto label_31a508;
        }
    }
    ctx->pc = 0x31A4ACu;
    // 0x31a4ac: 0x87a201c0  lh          $v0, 0x1C0($sp)
    ctx->pc = 0x31a4acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x31a4b0: 0x1e543c  dsll32      $t2, $fp, 16
    ctx->pc = 0x31a4b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) << (32 + 16));
    // 0x31a4b4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31a4b8: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x31a4b8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x31a4bc: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x31a4c0: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x31a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x31a4c4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x31a4c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31a4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31a4cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31a4ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4d0: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31A4D0u;
    SET_GPR_U32(ctx, 31, 0x31A4D8u);
    ctx->pc = 0x31A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4D0u;
    // 0x31a4d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x31A4D0u, 0x31A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4D8u;
label_31a4d8:
    // 0x31a4d8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31A4D8u;
    SET_GPR_U32(ctx, 31, 0x31A4E0u);
    ctx->pc = 0x31A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4D8u;
    // 0x31a4dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31A4D8u, 0x31A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4E0u;
label_31a4e0:
    // 0x31a4e0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31a4e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31a4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4e8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31A4E8u;
    SET_GPR_U32(ctx, 31, 0x31A4F0u);
    ctx->pc = 0x31A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4E8u;
    // 0x31a4ec: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x31A4E8u, 0x31A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4F0u;
label_31a4f0:
    // 0x31a4f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a4f4: 0xc040454  jal         func_101150
    ctx->pc = 0x31A4F4u;
    SET_GPR_U32(ctx, 31, 0x31A4FCu);
    ctx->pc = 0x31A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A4F4u;
    // 0x31a4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x31A4F4u, 0x31A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A4FCu;
label_31a4fc:
    // 0x31a4fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31A4FCu;
    {
        const bool branch_taken_0x31a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a4fc) {
            ctx->pc = 0x31A560u;
            goto label_31a560;
        }
    }
    ctx->pc = 0x31A504u;
    // 0x31a504: 0x0  nop
    ctx->pc = 0x31a504u;
    // NOP
label_31a508:
    // 0x31a508: 0x87a201c0  lh          $v0, 0x1C0($sp)
    ctx->pc = 0x31a508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x31a50c: 0x1e543c  dsll32      $t2, $fp, 16
    ctx->pc = 0x31a50cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) << (32 + 16));
    // 0x31a510: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31a510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31a514: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x31a514u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x31a518: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x31a518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x31a51c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x31a51cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a520: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x31a520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x31a524: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31a524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31a528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31a528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a52c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31a52cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a530: 0xc040532  jal         func_1014C8
    ctx->pc = 0x31A530u;
    SET_GPR_U32(ctx, 31, 0x31A538u);
    ctx->pc = 0x31A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A530u;
    // 0x31a534: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x31A530u, 0x31A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A538u;
label_31a538:
    // 0x31a538: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31A538u;
    SET_GPR_U32(ctx, 31, 0x31A540u);
    ctx->pc = 0x31A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A538u;
    // 0x31a53c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31A538u, 0x31A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A540u;
label_31a540:
    // 0x31a540: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31a540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31a544: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31a544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a548: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x31A548u;
    SET_GPR_U32(ctx, 31, 0x31A550u);
    ctx->pc = 0x31A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A548u;
    // 0x31a54c: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x31A548u, 0x31A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A550u;
label_31a550:
    // 0x31a550: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a554: 0xc040454  jal         func_101150
    ctx->pc = 0x31A554u;
    SET_GPR_U32(ctx, 31, 0x31A55Cu);
    ctx->pc = 0x31A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A554u;
    // 0x31a558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x31A554u, 0x31A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A55Cu;
label_31a55c:
    // 0x31a55c: 0x0  nop
    ctx->pc = 0x31a55cu;
    // NOP
label_31a560:
    // 0x31a560: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x31a560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x31a564: 0xac534790  sw          $s3, 0x4790($v0)
    ctx->pc = 0x31a564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18320), GPR_U32(ctx, 19));
label_31a568:
    // 0x31a568: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x31a568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31a56c: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x31a56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x31a570: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31a570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31a574: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31a574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31a578: 0xac460370  sw          $a2, 0x370($v0)
    ctx->pc = 0x31a578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 6));
    // 0x31a57c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31a57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31a580: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31a584: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31a584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31a588: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x31a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31a58c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x31a58cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x31a590: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x31a590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31a594: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x31a594u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x31a598: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31a598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31a59c: 0xfcc00010  sd          $zero, 0x10($a2)
    ctx->pc = 0x31a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 0));
    // 0x31a5a0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31a5a4: 0xfcc50018  sd          $a1, 0x18($a2)
    ctx->pc = 0x31a5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 5));
    // 0x31a5a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a5ac: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x31a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31a5b0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x31a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x31a5b4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x31a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x31a5b8: 0xac620370  sw          $v0, 0x370($v1)
    ctx->pc = 0x31a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 2));
    // 0x31a5bc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x31a5bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31a5c0: 0x90420018  lbu         $v0, 0x18($v0)
    ctx->pc = 0x31a5c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x31a5c4: 0x1044001c  beq         $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31A5C4u;
    {
        const bool branch_taken_0x31a5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x31a5c4) {
            ctx->pc = 0x31A638u;
            goto label_31a638;
        }
    }
    ctx->pc = 0x31A5CCu;
    // 0x31a5cc: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31A5CCu;
    SET_GPR_U32(ctx, 31, 0x31A5D4u);
    ctx->pc = 0x31A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5CCu;
    // 0x31a5d0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x31A5CCu, 0x31A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5D4u;
label_31a5d4:
    // 0x31a5d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a5d8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x31a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x31a5dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31a5dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31a5e0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x31a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x31a5e4: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x31a5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x31a5e8: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x31a5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x31a5ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31a5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31a5f0: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31A5F0u;
    SET_GPR_U32(ctx, 31, 0x31A5F8u);
    ctx->pc = 0x31A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5F0u;
    // 0x31a5f4: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x31A5F0u, 0x31A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A5F8u;
label_31a5f8:
    // 0x31a5f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a5fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31a5fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31a600: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31a604: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x31a604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x31a608: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a60c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x31a60cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31a610: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x31a610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31a614: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x31a614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x31a618: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31a618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31a61c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a620: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x31a620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31a624: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31a624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31a628: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31a628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31a62c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x31a62cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31a630: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31A630u;
    {
        const bool branch_taken_0x31a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A630u;
        // 0x31a634: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a630) {
            ctx->pc = 0x31A6A0u;
            goto label_31a6a0;
        }
    }
    ctx->pc = 0x31A638u;
label_31a638:
    // 0x31a638: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31A638u;
    SET_GPR_U32(ctx, 31, 0x31A640u);
    ctx->pc = 0x31A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A638u;
    // 0x31a63c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x31A638u, 0x31A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A640u;
label_31a640:
    // 0x31a640: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a644: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x31a644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x31a648: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31a648u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31a64c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x31a650: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x31a650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x31a654: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x31a654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x31a658: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31a658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31a65c: 0xc0c4b08  jal         func_312C20
    ctx->pc = 0x31A65Cu;
    SET_GPR_U32(ctx, 31, 0x31A664u);
    ctx->pc = 0x31A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A65Cu;
    // 0x31a660: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C20u, 0x31A65Cu, 0x31A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A664u;
label_31a664:
    // 0x31a664: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a668: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31a668u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31a66c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31a670: 0x327b8  dsll        $a0, $v1, 30
    ctx->pc = 0x31a670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 30);
    // 0x31a674: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a678: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x31a678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31a67c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x31a67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31a680: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x31a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x31a684: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31a684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31a688: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31a688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a68c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x31a68cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31a690: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31a694: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31a694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31a698: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x31a698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31a69c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x31a69cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_31a6a0:
    // 0x31a6a0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31a6a4: 0x8c470370  lw          $a3, 0x370($v0)
    ctx->pc = 0x31a6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31a6a8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x31a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31a6ac: 0x3c0360ab  lui         $v1, 0x60AB
    ctx->pc = 0x31a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24747 << 16));
    // 0x31a6b0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x31a6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31a6b4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31a6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31a6b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x31a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31a6bc: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x31a6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x31a6c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x31a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31a6c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31a6c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31a6c8: 0xfce00010  sd          $zero, 0x10($a3)
    ctx->pc = 0x31a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 0));
    // 0x31a6cc: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x31a6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
    // 0x31a6d0: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x31a6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31a6d4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31a6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31a6d8: 0xfce50020  sd          $a1, 0x20($a3)
    ctx->pc = 0x31a6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 5));
    // 0x31a6dc: 0xfce20028  sd          $v0, 0x28($a3)
    ctx->pc = 0x31a6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 2));
    // 0x31a6e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31a6e4: 0xfce40030  sd          $a0, 0x30($a3)
    ctx->pc = 0x31a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 4));
    // 0x31a6e8: 0x34633513  ori         $v1, $v1, 0x3513
    ctx->pc = 0x31a6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13587);
    // 0x31a6ec: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x31a6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x31a6f0: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31a6f4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31a6f8: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31a6f8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31a6fc: 0x8c660370  lw          $a2, 0x370($v1)
    ctx->pc = 0x31a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31a700: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31a700u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31a704: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31a704u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31a708: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31a708u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31a70c: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31a70cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31a710: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31a710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31a714: 0x24c50040  addiu       $a1, $a2, 0x40
    ctx->pc = 0x31a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x31a718: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31a718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31a71c: 0xac850370  sw          $a1, 0x370($a0)
    ctx->pc = 0x31a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 5));
    // 0x31a720: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x31a720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
    // 0x31a724: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31a724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31a728: 0x8c6d0370  lw          $t5, 0x370($v1)
    ctx->pc = 0x31a728u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31a72c: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31a72cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31a730: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31a730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31a734: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x31a734u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x31a738: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x31a738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x31a73c: 0x8d820370  lw          $v0, 0x370($t4)
    ctx->pc = 0x31a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 880)));
    // 0x31a740: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x31a740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x31a744: 0x8d620370  lw          $v0, 0x370($t3)
    ctx->pc = 0x31a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31a748: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31a748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31a74c: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x31a74cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x31a750: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x31a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x31a754: 0xad220370  sw          $v0, 0x370($t1)
    ctx->pc = 0x31a754u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 880), GPR_U32(ctx, 2));
    // 0x31a758: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x31a758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31a75c: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x31a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x31a760: 0x8d080370  lw          $t0, 0x370($t0)
    ctx->pc = 0x31a760u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31a764: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x31a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x31a768: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x31a768u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x31a76c: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31a76cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31a770: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x31a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31a774: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x31a774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x31a778: 0x8cc60370  lw          $a2, 0x370($a2)
    ctx->pc = 0x31a778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31a77c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x31a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x31a780: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x31a780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x31a784: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x31a784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31a788: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x31a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x31a78c: 0xac820370  sw          $v0, 0x370($a0)
    ctx->pc = 0x31a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 2));
    // 0x31a790: 0xacb20010  sw          $s2, 0x10($a1)
    ctx->pc = 0x31a790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 18));
    // 0x31a794: 0x9062b280  lbu         $v0, -0x4D80($v1)
    ctx->pc = 0x31a794u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x31a798: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31A798u;
    {
        const bool branch_taken_0x31a798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a798) {
            ctx->pc = 0x31A79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A798u;
            // 0x31a79c: 0x8fa601a0  lw          $a2, 0x1A0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A7A4u;
            goto label_31a7a4;
        }
    }
    ctx->pc = 0x31A7A0u;
    // 0x31a7a0: 0x8fa60190  lw          $a2, 0x190($sp)
    ctx->pc = 0x31a7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_31a7a4:
    // 0x31a7a4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x31a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x31a7a8: 0x2404a833  addiu       $a0, $zero, -0x57CD
    ctx->pc = 0x31a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31a7ac: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31a7acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31a7b0: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31a7b0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31a7b4: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31a7b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31a7b8: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31a7b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31a7bc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x31a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31a7c0: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31a7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31a7c4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31a7c8: 0x246e6c00  addiu       $t6, $v1, 0x6C00
    ctx->pc = 0x31a7c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x31a7cc: 0x8c450370  lw          $a1, 0x370($v0)
    ctx->pc = 0x31a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31a7d0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31a7d4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31a7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31a7d8: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31a7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31a7dc: 0x3c18009d  lui         $t8, 0x9D
    ctx->pc = 0x31a7dcu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)157 << 16));
    // 0x31a7e0: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x31a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x31a7e4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31a7e8: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x31a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31a7ec: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x31a7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x31a7f0: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31a7f4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x31a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x31a7f8: 0x8c4f0370  lw          $t7, 0x370($v0)
    ctx->pc = 0x31a7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31a7fc: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31a800: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31a800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31a804: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x31a804u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x31a808: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31a808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31a80c: 0x8daf0370  lw          $t7, 0x370($t5)
    ctx->pc = 0x31a80cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31a810: 0x25ed0010  addiu       $t5, $t7, 0x10
    ctx->pc = 0x31a810u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x31a814: 0xad8d0370  sw          $t5, 0x370($t4)
    ctx->pc = 0x31a814u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 880), GPR_U32(ctx, 13));
    // 0x31a818: 0x8fac0220  lw          $t4, 0x220($sp)
    ctx->pc = 0x31a818u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x31a81c: 0xadec0010  sw          $t4, 0x10($t7)
    ctx->pc = 0x31a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 12));
    // 0x31a820: 0x8d6c0370  lw          $t4, 0x370($t3)
    ctx->pc = 0x31a820u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31a824: 0x8fab0210  lw          $t3, 0x210($sp)
    ctx->pc = 0x31a824u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x31a828: 0xad8b0004  sw          $t3, 0x4($t4)
    ctx->pc = 0x31a828u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 11));
    // 0x31a82c: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x31a82cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x31a830: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x31a830u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x31a834: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x31a834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31a838: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x31a838u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x31a83c: 0x8d090370  lw          $t1, 0x370($t0)
    ctx->pc = 0x31a83cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31a840: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x31a840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x31a844: 0xace80370  sw          $t0, 0x370($a3)
    ctx->pc = 0x31a844u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 8));
    // 0x31a848: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x31a848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31a84c: 0xad270010  sw          $a3, 0x10($t1)
    ctx->pc = 0x31a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 7));
    // 0x31a850: 0x8cc70370  lw          $a3, 0x370($a2)
    ctx->pc = 0x31a850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x31a854: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x31a854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x31a858: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x31a858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x31a85c: 0x8ca60370  lw          $a2, 0x370($a1)
    ctx->pc = 0x31a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31a860: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x31a860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31a864: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x31a864u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x31a868: 0x8c850370  lw          $a1, 0x370($a0)
    ctx->pc = 0x31a868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31a86c: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x31a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x31a870: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x31a870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x31a874: 0x8c640370  lw          $a0, 0x370($v1)
    ctx->pc = 0x31a874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31a878: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x31a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31a87c: 0xac430370  sw          $v1, 0x370($v0)
    ctx->pc = 0x31a87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 3));
    // 0x31a880: 0xac8e0010  sw          $t6, 0x10($a0)
    ctx->pc = 0x31a880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
    // 0x31a884: 0x9302b280  lbu         $v0, -0x4D80($t8)
    ctx->pc = 0x31a884u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4294947456)));
    // 0x31a888: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31A888u;
    {
        const bool branch_taken_0x31a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a888) {
            ctx->pc = 0x31A88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A888u;
            // 0x31a88c: 0x8fa40170  lw          $a0, 0x170($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A894u;
            goto label_31a894;
        }
    }
    ctx->pc = 0x31A890u;
    // 0x31a890: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x31a890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_31a894:
    // 0x31a894: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31a894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31a898: 0x240ca833  addiu       $t4, $zero, -0x57CD
    ctx->pc = 0x31a898u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31a89c: 0x8c430370  lw          $v1, 0x370($v0)
    ctx->pc = 0x31a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31a8a0: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31a8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31a8a4: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x31a8a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x31a8a8: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31a8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31a8ac: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x31a8acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x31a8b0: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31a8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31a8b4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x31a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x31a8b8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31a8bc: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x31a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x31a8c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31a8c4: 0x346b000c  ori         $t3, $v1, 0xC
    ctx->pc = 0x31a8c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x31a8c8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31a8cc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31a8d0: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x31a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x31a8d4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31a8d8: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x31a8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31a8dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8e0: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x31a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x31a8e4: 0x7c600190  sq          $zero, 0x190($v1)
    ctx->pc = 0x31a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 0));
    // 0x31a8e8: 0xac4a0190  sw          $t2, 0x190($v0)
    ctx->pc = 0x31a8e8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 10)); // MMIO: 0x70000190
    // 0x31a8ec: 0x8d020370  lw          $v0, 0x370($t0)
    ctx->pc = 0x31a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31a8f0: 0x7cc000c0  sq          $zero, 0xC0($a2)
    ctx->pc = 0x31a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), GPR_VEC(ctx, 0));
    // 0x31a8f4: 0xacab00c0  sw          $t3, 0xC0($a1)
    ctx->pc = 0x31a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 11));
    // 0x31a8f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31a8fc: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31A8FCu;
    SET_GPR_U32(ctx, 31, 0x31A904u);
    ctx->pc = 0x31A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8FCu;
    // 0x31a900: 0xace20370  sw          $v0, 0x370($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31A8FCu, 0x31A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A904u;
label_31a904:
    // 0x31a904: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31a904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31a908: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31a908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31a90c: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31a910: 0xc040a04  jal         func_102810
    ctx->pc = 0x31A910u;
    SET_GPR_U32(ctx, 31, 0x31A918u);
    ctx->pc = 0x31A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A910u;
    // 0x31a914: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31A910u, 0x31A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A918u;
label_31a918:
    // 0x31a918: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31a918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
    // 0x31a91c: 0x0  nop
    ctx->pc = 0x31a91cu;
    // NOP
label_31a920:
    // 0x31a920: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31a920u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31a924: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31a924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31a928: 0x0  nop
    ctx->pc = 0x31a928u;
    // NOP
    // 0x31a92c: 0x0  nop
    ctx->pc = 0x31a92cu;
    // NOP
    // 0x31a930: 0x0  nop
    ctx->pc = 0x31a930u;
    // NOP
    // 0x31a934: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31A934u;
    {
        const bool branch_taken_0x31a934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a934) {
            ctx->pc = 0x31A920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31a920;
        }
    }
    ctx->pc = 0x31A93Cu;
    // 0x31a93c: 0x0  nop
    ctx->pc = 0x31a93cu;
    // NOP
label_31a940:
    // 0x31a940: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x31a940u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x31a944: 0x2b0182b  sltu        $v1, $s5, $s0
    ctx->pc = 0x31a944u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31a948: 0x2779821  addu        $s3, $s3, $s7
    ctx->pc = 0x31a948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x31a94c: 0x2569021  addu        $s2, $s2, $s6
    ctx->pc = 0x31a94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x31a950: 0x1460fe99  bnez        $v1, . + 4 + (-0x167 << 2)
    ctx->pc = 0x31A950u;
    {
        const bool branch_taken_0x31a950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A950u;
        // 0x31a954: 0x2348821  addu        $s1, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a950) {
            ctx->pc = 0x31A3B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31a3b8;
        }
    }
    ctx->pc = 0x31A958u;
label_31a958:
    // 0x31a958: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x31a958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x31a95c: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x31a95cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31a960: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31a960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31a964: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x31a964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x31a968: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x31a968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x31a96c: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x31a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x31a970: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31a970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31a974: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x31a974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x31a978: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x31a978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x31a97c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31a980: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x31a980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
    // 0x31a984: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31a984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a988: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x31a988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31a98c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x31a98cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31a990: 0x5460fe5a  bnel        $v1, $zero, . + 4 + (-0x1A6 << 2)
    ctx->pc = 0x31A990u;
    {
        const bool branch_taken_0x31a990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a990) {
            ctx->pc = 0x31A994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A990u;
            // 0x31a994: 0x8fb101f0  lw          $s1, 0x1F0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A2FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31a2fc;
        }
    }
    ctx->pc = 0x31A998u;
label_31a998:
    // 0x31a998: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31a998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31a99c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x31a99cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31a9a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x31a9a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31a9a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x31a9a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31a9a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31a9a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31a9ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31a9acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a9b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31a9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a9b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31a9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a9b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x31A9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9C0u;
        // 0x31a9c4: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A9C8u;
    // 0x31a9c8: 0x0  nop
    ctx->pc = 0x31a9c8u;
    // NOP
    // 0x31a9cc: 0x0  nop
    ctx->pc = 0x31a9ccu;
    // NOP
}
