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

// Function: sub_0022B220
// Address: 0x22b220 - 0x22b3a8
void sub_0022B220_0x22b220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B220_0x22b220");
#endif

    switch (ctx->pc) {
        case 0x22b240u: goto label_22b240;
        case 0x22b2b8u: goto label_22b2b8;
        case 0x22b350u: goto label_22b350;
        case 0x22b380u: goto label_22b380;
        default: break;
    }

    ctx->pc = 0x22b220u;

    // 0x22b220: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22b220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b224: 0x10e0005d  beqz        $a3, . + 4 + (0x5D << 2)
    ctx->pc = 0x22B224u;
    {
        const bool branch_taken_0x22b224 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B224u;
        // 0x22b228: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b224) {
            ctx->pc = 0x22B39Cu;
            goto label_22b39c;
        }
    }
    ctx->pc = 0x22B22Cu;
    // 0x22b22c: 0x4a2001d  bltzl       $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x22B22Cu;
    {
        const bool branch_taken_0x22b22c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x22b22c) {
            ctx->pc = 0x22B230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B22Cu;
            // 0x22b230: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B2A4u;
            goto label_22b2a4;
        }
    }
    ctx->pc = 0x22B234u;
    // 0x22b234: 0x58a00014  blezl       $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22B234u;
    {
        const bool branch_taken_0x22b234 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x22b234) {
            ctx->pc = 0x22B238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B234u;
            // 0x22b238: 0x94e20012  lhu         $v0, 0x12($a3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B288u;
            goto label_22b288;
        }
    }
    ctx->pc = 0x22B23Cu;
    // 0x22b23c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x22b23cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_22b240:
    // 0x22b240: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x22b240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x22b244: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B244u;
    {
        const bool branch_taken_0x22b244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b244) {
            ctx->pc = 0x22B248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B244u;
            // 0x22b248: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B25Cu;
            goto label_22b25c;
        }
    }
    ctx->pc = 0x22B24Cu;
    // 0x22b24c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x22b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x22b250: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x22b250u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22b254: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22B254u;
    {
        const bool branch_taken_0x22b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B254u;
        // 0x22b258: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b254) {
            ctx->pc = 0x22B270u;
            goto label_22b270;
        }
    }
    ctx->pc = 0x22B25Cu;
label_22b25c:
    // 0x22b25c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x22b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x22b260: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x22b260u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x22b264: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22b268: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x22b268u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x22b26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b270:
    // 0x22b270: 0x50e00004  beql        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B270u;
    {
        const bool branch_taken_0x22b270 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b270) {
            ctx->pc = 0x22B274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B270u;
            // 0x22b274: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B284u;
            goto label_22b284;
        }
    }
    ctx->pc = 0x22B278u;
    // 0x22b278: 0x5ca0fff1  bgtzl       $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x22B278u;
    {
        const bool branch_taken_0x22b278 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x22b278) {
            ctx->pc = 0x22B27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B278u;
            // 0x22b27c: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b240;
        }
    }
    ctx->pc = 0x22B280u;
    // 0x22b280: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22b280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b284:
    // 0x22b284: 0x94e20012  lhu         $v0, 0x12($a3)
    ctx->pc = 0x22b284u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
label_22b288:
    // 0x22b288: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22b288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22b28c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x22B28Cu;
    {
        const bool branch_taken_0x22b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B28Cu;
        // 0x22b290: 0x1051823  subu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b28c) {
            ctx->pc = 0x22B39Cu;
            goto label_22b39c;
        }
    }
    ctx->pc = 0x22B294u;
    // 0x22b294: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x22b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x22b298: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22b298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b29c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B29Cu;
        // 0x22b2a0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B2A4u;
label_22b2a4:
    // 0x22b2a4: 0x52823  negu        $a1, $a1
    ctx->pc = 0x22b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x22b2a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x22b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22b2ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22B2ACu;
    {
        const bool branch_taken_0x22b2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2ACu;
        // 0x22b2b0: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2ac) {
            ctx->pc = 0x22B2DCu;
            goto label_22b2dc;
        }
    }
    ctx->pc = 0x22B2B4u;
    // 0x22b2b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22b2b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b2b8:
    // 0x22b2b8: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x22b2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22b2bc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x22b2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b2c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b2c4: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x22b2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x22b2c8: 0x0  nop
    ctx->pc = 0x22b2c8u;
    // NOP
    // 0x22b2cc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22B2CCu;
    {
        const bool branch_taken_0x22b2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b2cc) {
            ctx->pc = 0x22B2B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b2b8;
        }
    }
    ctx->pc = 0x22B2D4u;
    // 0x22b2d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22B2D4u;
    {
        const bool branch_taken_0x22b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2D4u;
        // 0x22b2d8: 0xc5102a  slt         $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2d4) {
            ctx->pc = 0x22B2E4u;
            goto label_22b2e4;
        }
    }
    ctx->pc = 0x22B2DCu;
label_22b2dc:
    // 0x22b2dc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x22b2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b2e0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x22b2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_22b2e4:
    // 0x22b2e4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22B2E4u;
    {
        const bool branch_taken_0x22b2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b2e4) {
            ctx->pc = 0x22B2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B2E4u;
            // 0x22b2e8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B314u;
            goto label_22b314;
        }
    }
    ctx->pc = 0x22B2ECu;
    // 0x22b2ec: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x22b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x22b2f0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x22b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x22b2f4: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x22b2f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x22b2f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22b2fc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x22B2FCu;
    {
        const bool branch_taken_0x22b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b2fc) {
            ctx->pc = 0x22B39Cu;
            goto label_22b39c;
        }
    }
    ctx->pc = 0x22B304u;
    // 0x22b304: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x22b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x22b308: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x22b308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22b30c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B30Cu;
        // 0x22b310: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B314u;
label_22b314:
    // 0x22b314: 0x1054023  subu        $t0, $t0, $a1
    ctx->pc = 0x22b314u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x22b318: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b31c: 0x94e30012  lhu         $v1, 0x12($a3)
    ctx->pc = 0x22b31cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x22b320: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x22b320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x22b324: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x22b324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x22b328: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B328u;
    {
        const bool branch_taken_0x22b328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B328u;
        // 0x22b32c: 0x2400a  movz        $t0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b328) {
            ctx->pc = 0x22B334u;
            goto label_22b334;
        }
    }
    ctx->pc = 0x22B330u;
    // 0x22b330: 0xace80018  sw          $t0, 0x18($a3)
    ctx->pc = 0x22b330u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 8));
label_22b334:
    // 0x22b334: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x22B334u;
    {
        const bool branch_taken_0x22b334 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B334u;
        // 0x22b338: 0x128102a  slt         $v0, $t1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b334) {
            ctx->pc = 0x22B370u;
            goto label_22b370;
        }
    }
    ctx->pc = 0x22B33Cu;
    // 0x22b33c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22B33Cu;
    {
        const bool branch_taken_0x22b33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b33c) {
            ctx->pc = 0x22B340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B33Cu;
            // 0x22b340: 0xace8000c  sw          $t0, 0xC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B370u;
            goto label_22b370;
        }
    }
    ctx->pc = 0x22B344u;
    // 0x22b344: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x22b344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x22b348: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x22b348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22b34c: 0x0  nop
    ctx->pc = 0x22b34cu;
    // NOP
label_22b350:
    // 0x22b350: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B350u;
    {
        const bool branch_taken_0x22b350 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B350u;
        // 0x22b354: 0x1064023  subu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b350) {
            ctx->pc = 0x22B370u;
            goto label_22b370;
        }
    }
    ctx->pc = 0x22B358u;
    // 0x22b358: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x22b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x22b35c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b360: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x22b360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x22b364: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22B364u;
    {
        const bool branch_taken_0x22b364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b364) {
            ctx->pc = 0x22B368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B364u;
            // 0x22b368: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b350;
        }
    }
    ctx->pc = 0x22B36Cu;
    // 0x22b36c: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x22b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
label_22b370:
    // 0x22b370: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x22b370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22b374: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22B374u;
    {
        const bool branch_taken_0x22b374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b374) {
            ctx->pc = 0x22B39Cu;
            goto label_22b39c;
        }
    }
    ctx->pc = 0x22B37Cu;
    // 0x22b37c: 0x0  nop
    ctx->pc = 0x22b37cu;
    // NOP
label_22b380:
    // 0x22b380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b384: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x22b384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x22b388: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22b388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b38c: 0x0  nop
    ctx->pc = 0x22b38cu;
    // NOP
    // 0x22b390: 0x0  nop
    ctx->pc = 0x22b390u;
    // NOP
    // 0x22b394: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22B394u;
    {
        const bool branch_taken_0x22b394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b394) {
            ctx->pc = 0x22B380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b380;
        }
    }
    ctx->pc = 0x22B39Cu;
label_22b39c:
    // 0x22b39c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B3A4u;
    // 0x22b3a4: 0x0  nop
    ctx->pc = 0x22b3a4u;
    // NOP
}
