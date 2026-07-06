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

// Function: sub_00281230
// Address: 0x281230 - 0x281438
void sub_00281230_0x281230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281230_0x281230");
#endif

    switch (ctx->pc) {
        case 0x281250u: goto label_281250;
        case 0x281288u: goto label_281288;
        case 0x2813a8u: goto label_2813a8;
        default: break;
    }

    ctx->pc = 0x281230u;

    // 0x281230: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x281230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x281234: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x281234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x281238: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281238u;
    {
        const bool branch_taken_0x281238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x281238) {
            ctx->pc = 0x28123Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281238u;
            // 0x28123c: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281248u;
            goto label_281248;
        }
    }
    ctx->pc = 0x281240u;
    // 0x281240: 0x3e00008  jr          $ra
    ctx->pc = 0x281240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281240u;
        // 0x281244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281248u;
label_281248:
    // 0x281248: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28124c: 0x2942000b  slti        $v0, $t2, 0xB
    ctx->pc = 0x28124cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)11) ? 1 : 0);
label_281250:
    // 0x281250: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x281250u;
    {
        const bool branch_taken_0x281250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281250u;
        // 0x281254: 0x8c870008  lw          $a3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281250) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x281258u;
    // 0x281258: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x281258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28125c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x28125cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x281260: 0x24593678  addiu       $t9, $v0, 0x3678
    ctx->pc = 0x281260u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 13944));
    // 0x281264: 0x24783698  addiu       $t8, $v1, 0x3698
    ctx->pc = 0x281264u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 13976));
    // 0x281268: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28126c: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x28126cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x281270: 0x240e005a  addiu       $t6, $zero, 0x5A
    ctx->pc = 0x281270u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x281274: 0x240d002b  addiu       $t5, $zero, 0x2B
    ctx->pc = 0x281274u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x281278: 0x240c002d  addiu       $t4, $zero, 0x2D
    ctx->pc = 0x281278u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28127c: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x28127cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x281280: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x281280u;
    {
        const bool branch_taken_0x281280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281280u;
        // 0x281284: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281280) {
            ctx->pc = 0x28130Cu;
            goto label_28130c;
        }
    }
    ctx->pc = 0x281288u;
label_281288:
    // 0x281288: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x281288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x28128c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28128cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x281290: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x281290u;
    {
        const bool branch_taken_0x281290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281290u;
        // 0x281294: 0x31e00  sll         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281290) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x281298u;
    // 0x281298: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x281298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x28129c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x28129cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2812a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2812a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2812a4: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x2812a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2812a8: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2812A8u;
    {
        const bool branch_taken_0x2812a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2812ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812A8u;
        // 0x2812ac: 0x2465ffd0  addiu       $a1, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812a8) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x2812B0u;
    // 0x2812b0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x2812b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2812b4: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2812b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2812b8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2812b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2812bc: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2812BCu;
    {
        const bool branch_taken_0x2812bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2812C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812BCu;
        // 0x2812c0: 0xab1818  mult        $v1, $a1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812bc) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x2812C4u;
    // 0x2812c4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2812c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2812c8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2812c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2812cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2812ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2812d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2812d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2812d4: 0x148202a  slt         $a0, $t2, $t0
    ctx->pc = 0x2812d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2812d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2812d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2812dc: 0x14800054  bnez        $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2812DCu;
    {
        const bool branch_taken_0x2812dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2812E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812DCu;
        // 0x2812e0: 0x2465ffd0  addiu       $a1, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812dc) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x2812E4u;
    // 0x2812e4: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x2812e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2812e8: 0x991821  addu        $v1, $a0, $t9
    ctx->pc = 0x2812e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x2812ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2812ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2812f0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2812f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2812f4: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2812F4u;
    {
        const bool branch_taken_0x2812f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2812F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2812F4u;
        // 0x2812f8: 0x981821  addu        $v1, $a0, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812f4) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x2812FCu;
    // 0x2812fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2812fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281300: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x281300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x281304: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x281304u;
    {
        const bool branch_taken_0x281304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281304u;
        // 0x281308: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281304) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x28130Cu;
label_28130c:
    // 0x28130c: 0x29220006  slti        $v0, $t1, 0x6
    ctx->pc = 0x28130cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x281310: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x281310u;
    {
        const bool branch_taken_0x281310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281310u;
        // 0x281314: 0xe81021  addu        $v0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281310) {
            ctx->pc = 0x281348u;
            goto label_281348;
        }
    }
    ctx->pc = 0x281318u;
    // 0x281318: 0x552fffdb  bnel        $t1, $t7, . + 4 + (-0x25 << 2)
    ctx->pc = 0x281318u;
    {
        const bool branch_taken_0x281318 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 15));
        if (branch_taken_0x281318) {
            ctx->pc = 0x28131Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281318u;
            // 0x28131c: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281288;
        }
    }
    ctx->pc = 0x281320u;
    // 0x281320: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x281320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281324: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x281324u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281328: 0x508e0008  beql        $a0, $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x281328u;
    {
        const bool branch_taken_0x281328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        if (branch_taken_0x281328) {
            ctx->pc = 0x28132Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281328u;
            // 0x28132c: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28134Cu;
            goto label_28134c;
        }
    }
    ctx->pc = 0x281330u;
    // 0x281330: 0x508d0006  beql        $a0, $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x281330u;
    {
        const bool branch_taken_0x281330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 13));
        if (branch_taken_0x281330) {
            ctx->pc = 0x281334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281330u;
            // 0x281334: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28134Cu;
            goto label_28134c;
        }
    }
    ctx->pc = 0x281338u;
    // 0x281338: 0x548cffd3  bnel        $a0, $t4, . + 4 + (-0x2D << 2)
    ctx->pc = 0x281338u;
    {
        const bool branch_taken_0x281338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x281338) {
            ctx->pc = 0x28133Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281338u;
            // 0x28133c: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281288;
        }
    }
    ctx->pc = 0x281340u;
    // 0x281340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281340u;
    {
        const bool branch_taken_0x281340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281340u;
        // 0x281344: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281340) {
            ctx->pc = 0x28134Cu;
            goto label_28134c;
        }
    }
    ctx->pc = 0x281348u;
label_281348:
    // 0x281348: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x281348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_28134c:
    // 0x28134c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x28134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x281350: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281350u;
    {
        const bool branch_taken_0x281350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281350) {
            ctx->pc = 0x281354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281350u;
            // 0x281354: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281360u;
            goto label_281360;
        }
    }
    ctx->pc = 0x281358u;
    // 0x281358: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x281358u;
    {
        const bool branch_taken_0x281358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281358u;
        // 0x28135c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281358) {
            ctx->pc = 0x281424u;
            goto label_281424;
        }
    }
    ctx->pc = 0x281360u;
label_281360:
    // 0x281360: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281360u;
    {
        const bool branch_taken_0x281360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x281364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281360u;
        // 0x281364: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281360) {
            ctx->pc = 0x281370u;
            goto label_281370;
        }
    }
    ctx->pc = 0x281368u;
    // 0x281368: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x281368u;
    {
        const bool branch_taken_0x281368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281368u;
        // 0x28136c: 0x10a1026  xor         $v0, $t0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281368) {
            ctx->pc = 0x281428u;
            goto label_281428;
        }
    }
    ctx->pc = 0x281370u;
label_281370:
    // 0x281370: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x281370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x281374: 0x25020004  addiu       $v0, $t0, 0x4
    ctx->pc = 0x281374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x281378: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x281378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28137c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x28137Cu;
    {
        const bool branch_taken_0x28137c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28137Cu;
        // 0x281380: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28137c) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x281384u;
    // 0x281384: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x281384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x281388: 0x24423678  addiu       $v0, $v0, 0x3678
    ctx->pc = 0x281388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13944));
    // 0x28138c: 0x24633698  addiu       $v1, $v1, 0x3698
    ctx->pc = 0x28138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13976));
    // 0x281390: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x281390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x281394: 0x246c0018  addiu       $t4, $v1, 0x18
    ctx->pc = 0x281394u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x281398: 0x244b0018  addiu       $t3, $v0, 0x18
    ctx->pc = 0x281398u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x28139c: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x28139cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2813a0: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2813a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2813a4: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x2813a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2813a8:
    // 0x2813a8: 0x90e3ffff  lbu         $v1, -0x1($a3)
    ctx->pc = 0x2813a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x2813ac: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x2813acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2813b0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2813b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2813b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2813B4u;
    {
        const bool branch_taken_0x2813b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2813B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813B4u;
        // 0x2813b8: 0x31e00  sll         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813b4) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x2813BCu;
    // 0x2813bc: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x2813bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2813c0: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2813c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2813c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2813c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2813c8: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x2813c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x2813cc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2813ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2813d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2813D0u;
    {
        const bool branch_taken_0x2813d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2813D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813D0u;
        // 0x2813d4: 0x2465ffd0  addiu       $a1, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813d0) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x2813D8u;
    // 0x2813d8: 0xad2018  mult        $a0, $a1, $t5
    ctx->pc = 0x2813d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2813dc: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x2813dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2813e0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2813e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2813e4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2813e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2813e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2813e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2813ec: 0x2485ffd0  addiu       $a1, $a0, -0x30
    ctx->pc = 0x2813ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2813f0: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2813f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2813f4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2813F4u;
    {
        const bool branch_taken_0x2813f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2813f4) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x2813FCu;
    // 0x2813fc: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x2813fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x281400: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x281400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x281404: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x281404u;
    {
        const bool branch_taken_0x281404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281404u;
        // 0x281408: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281404) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x28140Cu;
    // 0x28140c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x28140cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x281410: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x281410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x281414: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x281414u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x281418: 0x29220008  slti        $v0, $t1, 0x8
    ctx->pc = 0x281418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x28141c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x28141Cu;
    {
        const bool branch_taken_0x28141c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28141Cu;
        // 0x281420: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28141c) {
            ctx->pc = 0x2813A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2813a8;
        }
    }
    ctx->pc = 0x281424u;
label_281424:
    // 0x281424: 0x10a1026  xor         $v0, $t0, $t2
    ctx->pc = 0x281424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 10));
label_281428:
    // 0x281428: 0x3e00008  jr          $ra
    ctx->pc = 0x281428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281428u;
        // 0x28142c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281430u;
label_281430:
    // 0x281430: 0x3e00008  jr          $ra
    ctx->pc = 0x281430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281430u;
        // 0x281434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281438u;
}
