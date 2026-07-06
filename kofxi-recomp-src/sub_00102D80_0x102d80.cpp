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

// Function: sub_00102D80
// Address: 0x102d80 - 0x103068
void sub_00102D80_0x102d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102D80_0x102d80");
#endif

    switch (ctx->pc) {
        case 0x102dacu: goto label_102dac;
        case 0x102f1cu: goto label_102f1c;
        default: break;
    }

    ctx->pc = 0x102d80u;

    // 0x102d80: 0x4842d000  cfc2.ni     $v0, $vi26
    ctx->pc = 0x102d80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_p, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x102d84: 0x3e00008  jr          $ra
    ctx->pc = 0x102D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D84u;
        // 0x102d88: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D8Cu;
    // 0x102d8c: 0x0  nop
    ctx->pc = 0x102d8cu;
    // NOP
    // 0x102d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102d98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102da0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x102da4: 0xc040af4  jal         func_102BD0
    ctx->pc = 0x102DA4u;
    SET_GPR_U32(ctx, 31, 0x102DACu);
    ctx->pc = 0x102DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102DA4u;
    // 0x102da8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102BD0u, 0x102DA4u, 0x102DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102DACu;
label_102dac:
    // 0x102dac: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x102DACu;
    {
        const bool branch_taken_0x102dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DACu;
        // 0x102db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dac) {
            ctx->pc = 0x102EE8u;
            goto label_102ee8;
        }
    }
    ctx->pc = 0x102DB4u;
    // 0x102db4: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x102db4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x102db8: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x102db8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102dbc: 0xfa220020  sqc2        $vf2, 0x20($s1)
    ctx->pc = 0x102dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102dc0: 0xfa230030  sqc2        $vf3, 0x30($s1)
    ctx->pc = 0x102dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x102dc4: 0xfa240040  sqc2        $vf4, 0x40($s1)
    ctx->pc = 0x102dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x102dc8: 0xfa250050  sqc2        $vf5, 0x50($s1)
    ctx->pc = 0x102dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x102dcc: 0xfa260060  sqc2        $vf6, 0x60($s1)
    ctx->pc = 0x102dccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x102dd0: 0xfa270070  sqc2        $vf7, 0x70($s1)
    ctx->pc = 0x102dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x102dd4: 0xfa280080  sqc2        $vf8, 0x80($s1)
    ctx->pc = 0x102dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x102dd8: 0xfa290090  sqc2        $vf9, 0x90($s1)
    ctx->pc = 0x102dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x102ddc: 0xfa2a00a0  sqc2        $vf10, 0xA0($s1)
    ctx->pc = 0x102ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x102de0: 0xfa2b00b0  sqc2        $vf11, 0xB0($s1)
    ctx->pc = 0x102de0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x102de4: 0xfa2c00c0  sqc2        $vf12, 0xC0($s1)
    ctx->pc = 0x102de4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x102de8: 0xfa2d00d0  sqc2        $vf13, 0xD0($s1)
    ctx->pc = 0x102de8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x102dec: 0xfa2e00e0  sqc2        $vf14, 0xE0($s1)
    ctx->pc = 0x102decu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 224), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x102df0: 0xfa2f00f0  sqc2        $vf15, 0xF0($s1)
    ctx->pc = 0x102df0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 240), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x102df4: 0xfa300100  sqc2        $vf16, 0x100($s1)
    ctx->pc = 0x102df4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x102df8: 0xfa310110  sqc2        $vf17, 0x110($s1)
    ctx->pc = 0x102df8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 272), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x102dfc: 0xfa320120  sqc2        $vf18, 0x120($s1)
    ctx->pc = 0x102dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 288), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x102e00: 0xfa330130  sqc2        $vf19, 0x130($s1)
    ctx->pc = 0x102e00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 304), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x102e04: 0xfa340140  sqc2        $vf20, 0x140($s1)
    ctx->pc = 0x102e04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 320), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x102e08: 0xfa350150  sqc2        $vf21, 0x150($s1)
    ctx->pc = 0x102e08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 336), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x102e0c: 0xfa360160  sqc2        $vf22, 0x160($s1)
    ctx->pc = 0x102e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 352), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x102e10: 0xfa370170  sqc2        $vf23, 0x170($s1)
    ctx->pc = 0x102e10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 368), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x102e14: 0xfa380180  sqc2        $vf24, 0x180($s1)
    ctx->pc = 0x102e14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 384), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x102e18: 0xfa390190  sqc2        $vf25, 0x190($s1)
    ctx->pc = 0x102e18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 400), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x102e1c: 0xfa3a01a0  sqc2        $vf26, 0x1A0($s1)
    ctx->pc = 0x102e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 416), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x102e20: 0xfa3b01b0  sqc2        $vf27, 0x1B0($s1)
    ctx->pc = 0x102e20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 432), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x102e24: 0xfa3c01c0  sqc2        $vf28, 0x1C0($s1)
    ctx->pc = 0x102e24u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 448), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x102e28: 0xfa3d01d0  sqc2        $vf29, 0x1D0($s1)
    ctx->pc = 0x102e28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 464), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x102e2c: 0xfa3e01e0  sqc2        $vf30, 0x1E0($s1)
    ctx->pc = 0x102e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 480), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x102e30: 0xfa3f01f0  sqc2        $vf31, 0x1F0($s1)
    ctx->pc = 0x102e30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 496), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x102e34: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x102e34u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat4);
    // 0x102e38: 0xae020200  sw          $v0, 0x200($s0)
    ctx->pc = 0x102e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 2));
    // 0x102e3c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x102e3cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar3);
    // 0x102e40: 0xae020204  sw          $v0, 0x204($s0)
    ctx->pc = 0x102e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 2));
    // 0x102e44: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x102e44u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst4);
    // 0x102e48: 0xae020208  sw          $v0, 0x208($s0)
    ctx->pc = 0x102e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
    // 0x102e4c: 0x4842a000  cfc2.ni     $v0, $vi20
    ctx->pc = 0x102e4cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_acc));
    // 0x102e50: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x102e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x102e54: 0x4842a800  cfc2.ni     $v0, $vi21
    ctx->pc = 0x102e54u;
    SET_GPR_U32(ctx, 2, ctx->vu0_info);
    // 0x102e58: 0xae020210  sw          $v0, 0x210($s0)
    ctx->pc = 0x102e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    // 0x102e5c: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x102e5cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags2);
    // 0x102e60: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x102e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x102e64: 0x48420000  cfc2.ni     $v0, $vi0
    ctx->pc = 0x102e64u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x102e68: 0xa6020218  sh          $v0, 0x218($s0)
    ctx->pc = 0x102e68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 2));
    // 0x102e6c: 0x48420800  cfc2.ni     $v0, $vi1
    ctx->pc = 0x102e6cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x102e70: 0xa602021a  sh          $v0, 0x21A($s0)
    ctx->pc = 0x102e70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 538), (uint16_t)GPR_U32(ctx, 2));
    // 0x102e74: 0x48421000  cfc2.ni     $v0, $vi2
    ctx->pc = 0x102e74u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat);
    // 0x102e78: 0xa602021c  sh          $v0, 0x21C($s0)
    ctx->pc = 0x102e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 540), (uint16_t)GPR_U32(ctx, 2));
    // 0x102e7c: 0x48421800  cfc2.ni     $v0, $vi3
    ctx->pc = 0x102e7cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_r));
    // 0x102e80: 0xa602021e  sh          $v0, 0x21E($s0)
    ctx->pc = 0x102e80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 542), (uint16_t)GPR_U32(ctx, 2));
    // 0x102e84: 0x48422000  cfc2.ni     $v0, $vi4
    ctx->pc = 0x102e84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_i, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x102e88: 0xa6020220  sh          $v0, 0x220($s0)
    ctx->pc = 0x102e88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 2));
    // 0x102e8c: 0x48422800  cfc2.ni     $v0, $vi5
    ctx->pc = 0x102e8cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags);
    // 0x102e90: 0xa6020222  sh          $v0, 0x222($s0)
    ctx->pc = 0x102e90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x102e94: 0x48423000  cfc2.ni     $v0, $vi6
    ctx->pc = 0x102e94u;
    SET_GPR_U32(ctx, 2, ctx->vu0_tpc);
    // 0x102e98: 0xa6020224  sh          $v0, 0x224($s0)
    ctx->pc = 0x102e98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 2));
    // 0x102e9c: 0x48423800  cfc2.ni     $v0, $vi7
    ctx->pc = 0x102e9cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar0);
    // 0x102ea0: 0xa6020226  sh          $v0, 0x226($s0)
    ctx->pc = 0x102ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 2));
    // 0x102ea4: 0x48424000  cfc2.ni     $v0, $vi8
    ctx->pc = 0x102ea4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst);
    // 0x102ea8: 0xa6020228  sh          $v0, 0x228($s0)
    ctx->pc = 0x102ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 2));
    // 0x102eac: 0x48424800  cfc2.ni     $v0, $vi9
    ctx->pc = 0x102eacu;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat2);
    // 0x102eb0: 0xa602022a  sh          $v0, 0x22A($s0)
    ctx->pc = 0x102eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 2));
    // 0x102eb4: 0x48425000  cfc2.ni     $v0, $vi10
    ctx->pc = 0x102eb4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_tpc2);
    // 0x102eb8: 0xa602022c  sh          $v0, 0x22C($s0)
    ctx->pc = 0x102eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 2));
    // 0x102ebc: 0x48425800  cfc2.ni     $v0, $vi11
    ctx->pc = 0x102ebcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar1);
    // 0x102ec0: 0xa602022e  sh          $v0, 0x22E($s0)
    ctx->pc = 0x102ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 2));
    // 0x102ec4: 0x48426000  cfc2.ni     $v0, $vi12
    ctx->pc = 0x102ec4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst2);
    // 0x102ec8: 0xa6020230  sh          $v0, 0x230($s0)
    ctx->pc = 0x102ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 2));
    // 0x102ecc: 0x48426800  cfc2.ni     $v0, $vi13
    ctx->pc = 0x102eccu;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat3);
    // 0x102ed0: 0xa6020232  sh          $v0, 0x232($s0)
    ctx->pc = 0x102ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 562), (uint16_t)GPR_U32(ctx, 2));
    // 0x102ed4: 0x48427000  cfc2.ni     $v0, $vi14
    ctx->pc = 0x102ed4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar2);
    // 0x102ed8: 0xa6020234  sh          $v0, 0x234($s0)
    ctx->pc = 0x102ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 564), (uint16_t)GPR_U32(ctx, 2));
    // 0x102edc: 0x48427800  cfc2.ni     $v0, $vi15
    ctx->pc = 0x102edcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_fbrst3);
    // 0x102ee0: 0xa6020236  sh          $v0, 0x236($s0)
    ctx->pc = 0x102ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 566), (uint16_t)GPR_U32(ctx, 2));
    // 0x102ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102ee8:
    // 0x102ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x102ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102eec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x102EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EF4u;
        // 0x102ef8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102EFCu;
    // 0x102efc: 0x0  nop
    ctx->pc = 0x102efcu;
    // NOP
    // 0x102f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102f08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x102f14: 0xc040af4  jal         func_102BD0
    ctx->pc = 0x102F14u;
    SET_GPR_U32(ctx, 31, 0x102F1Cu);
    ctx->pc = 0x102F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F14u;
    // 0x102f18: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102BD0u, 0x102F14u, 0x102F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F1Cu;
label_102f1c:
    // 0x102f1c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x102F1Cu;
    {
        const bool branch_taken_0x102f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F1Cu;
        // 0x102f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f1c) {
            ctx->pc = 0x103050u;
            goto label_103050;
        }
    }
    ctx->pc = 0x102F24u;
    // 0x102f24: 0xda200000  lqc2        $vf0, 0x0($s1)
    ctx->pc = 0x102f24u;
    ctx->vu0_vf[0] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102f28: 0xda210010  lqc2        $vf1, 0x10($s1)
    ctx->pc = 0x102f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x102f2c: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x102f2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x102f30: 0xda230030  lqc2        $vf3, 0x30($s1)
    ctx->pc = 0x102f30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x102f34: 0xda240040  lqc2        $vf4, 0x40($s1)
    ctx->pc = 0x102f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x102f38: 0xda250050  lqc2        $vf5, 0x50($s1)
    ctx->pc = 0x102f38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x102f3c: 0xda260060  lqc2        $vf6, 0x60($s1)
    ctx->pc = 0x102f3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x102f40: 0xda270070  lqc2        $vf7, 0x70($s1)
    ctx->pc = 0x102f40u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x102f44: 0xda280080  lqc2        $vf8, 0x80($s1)
    ctx->pc = 0x102f44u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x102f48: 0xda290090  lqc2        $vf9, 0x90($s1)
    ctx->pc = 0x102f48u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x102f4c: 0xda2a00a0  lqc2        $vf10, 0xA0($s1)
    ctx->pc = 0x102f4cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x102f50: 0xda2b00b0  lqc2        $vf11, 0xB0($s1)
    ctx->pc = 0x102f50u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x102f54: 0xda2c00c0  lqc2        $vf12, 0xC0($s1)
    ctx->pc = 0x102f54u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x102f58: 0xda2d00d0  lqc2        $vf13, 0xD0($s1)
    ctx->pc = 0x102f58u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x102f5c: 0xda2e00e0  lqc2        $vf14, 0xE0($s1)
    ctx->pc = 0x102f5cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x102f60: 0xda2f00f0  lqc2        $vf15, 0xF0($s1)
    ctx->pc = 0x102f60u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x102f64: 0xda300100  lqc2        $vf16, 0x100($s1)
    ctx->pc = 0x102f64u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x102f68: 0xda310110  lqc2        $vf17, 0x110($s1)
    ctx->pc = 0x102f68u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x102f6c: 0xda320120  lqc2        $vf18, 0x120($s1)
    ctx->pc = 0x102f6cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x102f70: 0xda330130  lqc2        $vf19, 0x130($s1)
    ctx->pc = 0x102f70u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x102f74: 0xda340140  lqc2        $vf20, 0x140($s1)
    ctx->pc = 0x102f74u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x102f78: 0xda350150  lqc2        $vf21, 0x150($s1)
    ctx->pc = 0x102f78u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x102f7c: 0xda360160  lqc2        $vf22, 0x160($s1)
    ctx->pc = 0x102f7cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x102f80: 0xda370170  lqc2        $vf23, 0x170($s1)
    ctx->pc = 0x102f80u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x102f84: 0xda380180  lqc2        $vf24, 0x180($s1)
    ctx->pc = 0x102f84u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x102f88: 0xda390190  lqc2        $vf25, 0x190($s1)
    ctx->pc = 0x102f88u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x102f8c: 0xda3a01a0  lqc2        $vf26, 0x1A0($s1)
    ctx->pc = 0x102f8cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x102f90: 0xda3b01b0  lqc2        $vf27, 0x1B0($s1)
    ctx->pc = 0x102f90u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x102f94: 0xda3c01c0  lqc2        $vf28, 0x1C0($s1)
    ctx->pc = 0x102f94u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x102f98: 0xda3d01d0  lqc2        $vf29, 0x1D0($s1)
    ctx->pc = 0x102f98u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x102f9c: 0xda3e01e0  lqc2        $vf30, 0x1E0($s1)
    ctx->pc = 0x102f9cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x102fa0: 0xda3f01f0  lqc2        $vf31, 0x1F0($s1)
    ctx->pc = 0x102fa0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x102fa4: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x102fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x102fa8: 0x48c28000  ctc2.ni     $v0, $vi16
    ctx->pc = 0x102fa8u;
    ctx->vu0_vpu_stat4 = GPR_U32(ctx, 2);
    // 0x102fac: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x102facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x102fb0: 0x48c29000  ctc2.ni     $v0, $vi18
    ctx->pc = 0x102fb0u;
    ctx->vu0_fbrst4 = GPR_U32(ctx, 2);
    // 0x102fb4: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x102fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x102fb8: 0x48c2a000  ctc2.ni     $v0, $vi20
    ctx->pc = 0x102fb8u;
    ctx->vu0_acc = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x102fbc: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x102fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x102fc0: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x102fc0u;
    ctx->vu0_info = GPR_U32(ctx, 2);
    // 0x102fc4: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x102fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x102fc8: 0x48c2b000  ctc2.ni     $v0, $vi22
    ctx->pc = 0x102fc8u;
    ctx->vu0_clip_flags2 = GPR_U32(ctx, 2);
    // 0x102fcc: 0x96020218  lhu         $v0, 0x218($s0)
    ctx->pc = 0x102fccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x102fd0: 0x48c20000  ctc2.ni     $v0, $vi0
    ctx->pc = 0x102fd0u;
    ctx->vu0_status = GPR_U32(ctx, 2) & 0xFFFF;
    // 0x102fd4: 0x9602021a  lhu         $v0, 0x21A($s0)
    ctx->pc = 0x102fd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 538)));
    // 0x102fd8: 0x48c20800  ctc2.ni     $v0, $vi1
    ctx->pc = 0x102fd8u;
    ctx->vu0_mac_flags = GPR_U32(ctx, 2);
    // 0x102fdc: 0x9602021c  lhu         $v0, 0x21C($s0)
    ctx->pc = 0x102fdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x102fe0: 0x48c21000  ctc2.ni     $v0, $vi2
    ctx->pc = 0x102fe0u;
    ctx->vu0_vpu_stat = GPR_U32(ctx, 2);
    // 0x102fe4: 0x9602021e  lhu         $v0, 0x21E($s0)
    ctx->pc = 0x102fe4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 542)));
    // 0x102fe8: 0x48c21800  ctc2.ni     $v0, $vi3
    ctx->pc = 0x102fe8u;
    ctx->vu0_r = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x102fec: 0x96020220  lhu         $v0, 0x220($s0)
    ctx->pc = 0x102fecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x102ff0: 0x48c22000  ctc2.ni     $v0, $vi4
    ctx->pc = 0x102ff0u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x102ff4: 0x96020222  lhu         $v0, 0x222($s0)
    ctx->pc = 0x102ff4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x102ff8: 0x48c22800  ctc2.ni     $v0, $vi5
    ctx->pc = 0x102ff8u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 2);
    // 0x102ffc: 0x96020224  lhu         $v0, 0x224($s0)
    ctx->pc = 0x102ffcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x103000: 0x48c23000  ctc2.ni     $v0, $vi6
    ctx->pc = 0x103000u;
    ctx->vu0_tpc = GPR_U32(ctx, 2);
    // 0x103004: 0x96020226  lhu         $v0, 0x226($s0)
    ctx->pc = 0x103004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x103008: 0x48c23800  ctc2.ni     $v0, $vi7
    ctx->pc = 0x103008u;
    ctx->vu0_cmsar0 = GPR_U32(ctx, 2);
    // 0x10300c: 0x96020228  lhu         $v0, 0x228($s0)
    ctx->pc = 0x10300cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x103010: 0x48c24000  ctc2.ni     $v0, $vi8
    ctx->pc = 0x103010u;
    ctx->vu0_fbrst = GPR_U32(ctx, 2);
    // 0x103014: 0x9602022a  lhu         $v0, 0x22A($s0)
    ctx->pc = 0x103014u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x103018: 0x48c24800  ctc2.ni     $v0, $vi9
    ctx->pc = 0x103018u;
    ctx->vu0_vpu_stat2 = GPR_U32(ctx, 2);
    // 0x10301c: 0x9602022c  lhu         $v0, 0x22C($s0)
    ctx->pc = 0x10301cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x103020: 0x48c25000  ctc2.ni     $v0, $vi10
    ctx->pc = 0x103020u;
    ctx->vu0_tpc2 = GPR_U32(ctx, 2);
    // 0x103024: 0x9602022e  lhu         $v0, 0x22E($s0)
    ctx->pc = 0x103024u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
    // 0x103028: 0x48c25800  ctc2.ni     $v0, $vi11
    ctx->pc = 0x103028u;
    ctx->vu0_cmsar1 = GPR_U32(ctx, 2);
    // 0x10302c: 0x96020230  lhu         $v0, 0x230($s0)
    ctx->pc = 0x10302cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x103030: 0x48c26000  ctc2.ni     $v0, $vi12
    ctx->pc = 0x103030u;
    ctx->vu0_fbrst2 = GPR_U32(ctx, 2);
    // 0x103034: 0x96020232  lhu         $v0, 0x232($s0)
    ctx->pc = 0x103034u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x103038: 0x48c26800  ctc2.ni     $v0, $vi13
    ctx->pc = 0x103038u;
    ctx->vu0_vpu_stat3 = GPR_U32(ctx, 2);
    // 0x10303c: 0x96020234  lhu         $v0, 0x234($s0)
    ctx->pc = 0x10303cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x103040: 0x48c27000  ctc2.ni     $v0, $vi14
    ctx->pc = 0x103040u;
    ctx->vu0_cmsar2 = GPR_U32(ctx, 2);
    // 0x103044: 0x96020236  lhu         $v0, 0x236($s0)
    ctx->pc = 0x103044u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 566)));
    // 0x103048: 0x48c27800  ctc2.ni     $v0, $vi15
    ctx->pc = 0x103048u;
    ctx->vu0_fbrst3 = GPR_U32(ctx, 2);
    // 0x10304c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103050:
    // 0x103050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x103050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103054: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10305c: 0x3e00008  jr          $ra
    ctx->pc = 0x10305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10305Cu;
        // 0x103060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10305Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103064u;
    // 0x103064: 0x0  nop
    ctx->pc = 0x103064u;
    // NOP
    if (ctx->pc == 0x103064u) { ctx->pc = 0x103068u; }
}
