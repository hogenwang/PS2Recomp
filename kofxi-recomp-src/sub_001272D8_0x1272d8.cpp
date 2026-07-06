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

// Function: sub_001272D8
// Address: 0x1272d8 - 0x127398
void sub_001272D8_0x1272d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001272D8_0x1272d8");
#endif

    switch (ctx->pc) {
        case 0x127314u: goto label_127314;
        case 0x127338u: goto label_127338;
        case 0x127374u: goto label_127374;
        default: break;
    }

    ctx->pc = 0x1272d8u;

    // 0x1272d8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1272d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1272dc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1272DCu;
    {
        const bool branch_taken_0x1272dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1272E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272DCu;
        // 0x1272e0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272dc) {
            ctx->pc = 0x127358u;
            goto label_127358;
        }
    }
    ctx->pc = 0x1272E4u;
    // 0x1272e4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1272e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1272e8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1272E8u;
    {
        const bool branch_taken_0x1272e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1272ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272E8u;
        // 0x1272ec: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272e8) {
            ctx->pc = 0x127358u;
            goto label_127358;
        }
    }
    ctx->pc = 0x1272F0u;
    // 0x1272f0: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x1272f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1272f4: 0x2cca0020  sltiu       $t2, $a2, 0x20
    ctx->pc = 0x1272f4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1272f8: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1272f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272fc: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x1272fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
    // 0x127300: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x127300u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x127304: 0x70081ee9  pcpyh       $v1, $t0
    ctx->pc = 0x127304u;
    { __m128i src = GPR_VEC(ctx, 0); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x127308: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x127308u;
    {
        const bool branch_taken_0x127308 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127308u;
        // 0x12730c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127308) {
            ctx->pc = 0x127344u;
            goto label_127344;
        }
    }
    ctx->pc = 0x127310u;
    // 0x127310: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x127310u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_127314:
    // 0x127314: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x127314u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x127318: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x127318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x12731c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x12731cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x127320: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x127320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x127324: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x127324u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x127328: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127328u;
    {
        const bool branch_taken_0x127328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127328u;
        // 0x12732c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127328) {
            ctx->pc = 0x127314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127314;
        }
    }
    ctx->pc = 0x127330u;
    // 0x127330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x127330u;
    {
        const bool branch_taken_0x127330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127330u;
        // 0x127334: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127330) {
            ctx->pc = 0x127344u;
            goto label_127344;
        }
    }
    ctx->pc = 0x127338u;
label_127338:
    // 0x127338: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x127338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x12733c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x12733cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x127340: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x127340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_127344:
    // 0x127344: 0x0  nop
    ctx->pc = 0x127344u;
    // NOP
    // 0x127348: 0x0  nop
    ctx->pc = 0x127348u;
    // NOP
    // 0x12734c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12734Cu;
    {
        const bool branch_taken_0x12734c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12734c) {
            ctx->pc = 0x127350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12734Cu;
            // 0x127350: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127338;
        }
    }
    ctx->pc = 0x127354u;
    // 0x127354: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x127354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_127358:
    // 0x127358: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x127358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12735c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12735cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x127360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x127360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x127364: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x127364u;
    {
        const bool branch_taken_0x127364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x127364) {
            ctx->pc = 0x127390u;
            goto label_127390;
        }
    }
    ctx->pc = 0x12736Cu;
    // 0x12736c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x127370: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x127370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_127374:
    // 0x127374: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x127374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x127378: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x127378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12737c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x127380: 0x0  nop
    ctx->pc = 0x127380u;
    // NOP
    // 0x127384: 0x0  nop
    ctx->pc = 0x127384u;
    // NOP
    // 0x127388: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127388u;
    {
        const bool branch_taken_0x127388 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x127388) {
            ctx->pc = 0x127374u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127374;
        }
    }
    ctx->pc = 0x127390u;
label_127390:
    // 0x127390: 0x3e00008  jr          $ra
    ctx->pc = 0x127390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127390u;
        // 0x127394: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127398u;
}
