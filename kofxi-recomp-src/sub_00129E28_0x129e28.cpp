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

// Function: sub_00129E28
// Address: 0x129e28 - 0x129f70
void sub_00129E28_0x129e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129E28_0x129e28");
#endif

    switch (ctx->pc) {
        case 0x129ea0u: goto label_129ea0;
        case 0x129f00u: goto label_129f00;
        case 0x129f38u: goto label_129f38;
        default: break;
    }

    ctx->pc = 0x129e28u;

    // 0x129e28: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x129e28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x129e2c: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x129e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x129e30: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x129E30u;
    {
        const bool branch_taken_0x129e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129e30) {
            ctx->pc = 0x129E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129E30u;
            // 0x129e34: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129E38u;
    // 0x129e38: 0x3109000f  andi        $t1, $t0, 0xF
    ctx->pc = 0x129e38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x129e3c: 0x3c070101  lui         $a3, 0x101
    ctx->pc = 0x129e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)257 << 16));
    // 0x129e40: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x129e40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x129e44: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x129e44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x129e48: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x129e48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x129e4c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x129e4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x129e50: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x129e50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x129e54: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x129e54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x129e58: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x129e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x129e5c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x129e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x129e60: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x129e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x129e64: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x129e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x129e68: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x129e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x129e6c: 0x1520001f  bnez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x129E6Cu;
    {
        const bool branch_taken_0x129e6c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E6Cu;
        // 0x129e70: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e6c) {
            ctx->pc = 0x129EECu;
            goto label_129eec;
        }
    }
    ctx->pc = 0x129E74u;
    // 0x129e74: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x129e74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129e78: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x129e78u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x129e7c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x129e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129e80: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x129e80u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x129e84: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x129e84u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129e88: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x129e88u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x129e8c: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x129e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x129e90: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x129E90u;
    {
        const bool branch_taken_0x129e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129e90) {
            ctx->pc = 0x129E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129E90u;
            // 0x129e94: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129E98u;
    // 0x129e98: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x129e98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129e9c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x129e9cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_129ea0:
    // 0x129ea0: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x129ea0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x129ea4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x129ea4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129ea8: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x129ea8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x129eac: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x129eacu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x129eb0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x129eb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x129eb4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x129EB4u;
    {
        const bool branch_taken_0x129eb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EB4u;
        // 0x129eb8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129eb4) {
            ctx->pc = 0x129EC4u;
            goto label_129ec4;
        }
    }
    ctx->pc = 0x129EBCu;
    // 0x129ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x129EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EBCu;
        // 0x129ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129EC4u;
label_129ec4:
    // 0x129ec4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x129ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x129ec8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x129ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129ecc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x129eccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129ed0: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x129ed0u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129ed4: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x129ed4u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x129ed8: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x129ed8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x129edc: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x129EDCu;
    {
        const bool branch_taken_0x129edc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x129edc) {
            ctx->pc = 0x129EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129EDCu;
            // 0x129ee0: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129ea0;
        }
    }
    ctx->pc = 0x129EE4u;
    // 0x129ee4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x129EE4u;
    {
        const bool branch_taken_0x129ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EE4u;
        // 0x129ee8: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ee4) {
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129EECu;
label_129eec:
    // 0x129eec: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x129eecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129ef0: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x129EF0u;
    {
        const bool branch_taken_0x129ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x129ef0) {
            ctx->pc = 0x129EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129EF0u;
            // 0x129ef4: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129EF8u;
    // 0x129ef8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x129ef8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129efc: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x129efcu;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_129f00:
    // 0x129f00: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x129f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x129f04: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x129f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x129f08: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x129f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x129f0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129F0Cu;
    {
        const bool branch_taken_0x129f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F0Cu;
        // 0x129f10: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f0c) {
            ctx->pc = 0x129F1Cu;
            goto label_129f1c;
        }
    }
    ctx->pc = 0x129F14u;
    // 0x129f14: 0x3e00008  jr          $ra
    ctx->pc = 0x129F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F14u;
        // 0x129f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129F1Cu;
label_129f1c:
    // 0x129f1c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x129f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x129f20: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x129f20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x129f24: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x129f24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129f28: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x129F28u;
    {
        const bool branch_taken_0x129f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x129f28) {
            ctx->pc = 0x129F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129F28u;
            // 0x129f2c: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129f00;
        }
    }
    ctx->pc = 0x129F30u;
    // 0x129f30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x129F30u;
    {
        const bool branch_taken_0x129f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F30u;
        // 0x129f34: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f30) {
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129F38u;
label_129f38:
    // 0x129f38: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x129f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x129f3c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x129f3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129f40: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x129f40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x129f44: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x129F44u;
    {
        const bool branch_taken_0x129f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x129f44) {
            ctx->pc = 0x129F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129F44u;
            // 0x129f48: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F60u;
            goto label_129f60;
        }
    }
    ctx->pc = 0x129F4Cu;
    // 0x129f4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x129f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x129f50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x129f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x129f54: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x129f54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_129f58:
    // 0x129f58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x129F58u;
    {
        const bool branch_taken_0x129f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F58u;
        // 0x129f5c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f58) {
            ctx->pc = 0x129F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129f38;
        }
    }
    ctx->pc = 0x129F60u;
label_129f60:
    // 0x129f60: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x129f60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129f64: 0x3e00008  jr          $ra
    ctx->pc = 0x129F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F64u;
        // 0x129f68: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129F6Cu;
    // 0x129f6c: 0x0  nop
    ctx->pc = 0x129f6cu;
    // NOP
    if (ctx->pc == 0x129f6cu) { ctx->pc = 0x129f70u; }
}
