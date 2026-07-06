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

// Function: sub_00129F70
// Address: 0x129f70 - 0x12a088
void sub_00129F70_0x129f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129F70_0x129f70");
#endif

    switch (ctx->pc) {
        case 0x129fecu: goto label_129fec;
        case 0x12a038u: goto label_12a038;
        case 0x12a060u: goto label_12a060;
        default: break;
    }

    ctx->pc = 0x129f70u;

    // 0x129f70: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x129f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f74: 0xa74025  or          $t0, $a1, $a3
    ctx->pc = 0x129f74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x129f78: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x129f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x129f7c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x129F7Cu;
    {
        const bool branch_taken_0x129f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F7Cu;
        // 0x129f80: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f7c) {
            ctx->pc = 0x12A060u;
            goto label_12a060;
        }
    }
    ctx->pc = 0x129F84u;
    // 0x129f84: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x129f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x129f88: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x129f88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x129f8c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x129f8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x129f90: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x129f90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x129f94: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x129f94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x129f98: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x129f98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x129f9c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x129f9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x129fa0: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x129fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x129fa4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x129fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x129fa8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x129fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x129fac: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x129facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x129fb0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x129fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x129fb4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x129fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x129fb8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x129FB8u;
    {
        const bool branch_taken_0x129fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129fb8) {
            ctx->pc = 0x129FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129FB8u;
            // 0x129fbc: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A020u;
            goto label_12a020;
        }
    }
    ctx->pc = 0x129FC0u;
    // 0x129fc0: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x129fc0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x129fc4: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x129fc4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129fc8: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x129fc8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x129fcc: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x129fccu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x129fd0: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x129fd0u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x129fd4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x129fd4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129fd8: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x129fd8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x129fdc: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x129fdcu;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x129fe0: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x129fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x129fe4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x129FE4u;
    {
        const bool branch_taken_0x129fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FE4u;
        // 0x129fe8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fe4) {
            ctx->pc = 0x12A05Cu;
            goto label_12a05c;
        }
    }
    ctx->pc = 0x129FECu;
label_129fec:
    // 0x129fec: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x129fecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x129ff0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x129ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x129ff4: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x129ff4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129ff8: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x129ff8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x129ffc: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x129ffcu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x12a000: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x12a000u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a004: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x12a004u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x12a008: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x12a008u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x12a00c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x12a00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12a010: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x12A010u;
    {
        const bool branch_taken_0x12a010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A010u;
        // 0x12a014: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a010) {
            ctx->pc = 0x129FECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129fec;
        }
    }
    ctx->pc = 0x12A018u;
    // 0x12a018: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12A018u;
    {
        const bool branch_taken_0x12a018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A018u;
        // 0x12a01c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a018) {
            ctx->pc = 0x12A060u;
            goto label_12a060;
        }
    }
    ctx->pc = 0x12A020u;
label_12a020:
    // 0x12a020: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x12a020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x12a024: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x12a024u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x12a028: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a02c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x12a02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x12a030: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12A030u;
    {
        const bool branch_taken_0x12a030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A030u;
        // 0x12a034: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a030) {
            ctx->pc = 0x12A05Cu;
            goto label_12a05c;
        }
    }
    ctx->pc = 0x12A038u;
label_12a038:
    // 0x12a038: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x12a038u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x12a03c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12a040: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x12a040u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a044: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x12a044u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x12a048: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x12a048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x12a04c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12a04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12a050: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12a050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x12a054: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12A054u;
    {
        const bool branch_taken_0x12a054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A054u;
        // 0x12a058: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a054) {
            ctx->pc = 0x12A038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a038;
        }
    }
    ctx->pc = 0x12A05Cu;
label_12a05c:
    // 0x12a05c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x12a05cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12a060:
    // 0x12a060: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x12a060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a064: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12a064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12a068: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x12a068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12a06c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x12a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x12a070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12a074: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A074u;
    {
        const bool branch_taken_0x12a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a074) {
            ctx->pc = 0x12A060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a060;
        }
    }
    ctx->pc = 0x12A07Cu;
    // 0x12a07c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A07Cu;
        // 0x12a080: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A084u;
    // 0x12a084: 0x0  nop
    ctx->pc = 0x12a084u;
    // NOP
    if (ctx->pc == 0x12a084u) { ctx->pc = 0x12a088u; }
}
