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

// Function: sub_00241248
// Address: 0x241248 - 0x2413a8
void sub_00241248_0x241248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241248_0x241248");
#endif

    switch (ctx->pc) {
        case 0x241278u: goto label_241278;
        case 0x2412b0u: goto label_2412b0;
        case 0x2412dcu: goto label_2412dc;
        case 0x241340u: goto label_241340;
        case 0x241360u: goto label_241360;
        case 0x241374u: goto label_241374;
        default: break;
    }

    ctx->pc = 0x241248u;

    // 0x241248: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x241248u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24124c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x24124cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241250: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x241250u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x241254: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x241254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x241258: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x241258u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24125c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241260: 0xe94023  subu        $t0, $a3, $t1
    ctx->pc = 0x241260u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x241264: 0x29220001  slti        $v0, $t1, 0x1
    ctx->pc = 0x241264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x241268: 0xe2400b  movn        $t0, $a3, $v0
    ctx->pc = 0x241268u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
    // 0x24126c: 0xa8182b  sltu        $v1, $a1, $t0
    ctx->pc = 0x24126cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x241270: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x241270u;
    {
        const bool branch_taken_0x241270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241270u;
        // 0x241274: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241270) {
            ctx->pc = 0x2412C0u;
            goto label_2412c0;
        }
    }
    ctx->pc = 0x241278u;
label_241278:
    // 0x241278: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x241278u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24127c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x24127cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x241280: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x241280u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x241284: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x241284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x241288: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x241288u;
    {
        const bool branch_taken_0x241288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241288u;
        // 0x24128c: 0x661026  xor         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241288) {
            ctx->pc = 0x2412B8u;
            goto label_2412b8;
        }
    }
    ctx->pc = 0x241290u;
    // 0x241290: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x241290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241294: 0x2500b  movn        $t2, $zero, $v0
    ctx->pc = 0x241294u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
    // 0x241298: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x241298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x24129c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24129Cu;
    {
        const bool branch_taken_0x24129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2412A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24129Cu;
        // 0x2412a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24129c) {
            ctx->pc = 0x241278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241278;
        }
    }
    ctx->pc = 0x2412A4u;
    // 0x2412a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2412A4u;
    {
        const bool branch_taken_0x2412a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412A4u;
        // 0x2412a8: 0xa7102b  sltu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412a4) {
            ctx->pc = 0x2412C4u;
            goto label_2412c4;
        }
    }
    ctx->pc = 0x2412ACu;
    // 0x2412ac: 0x0  nop
    ctx->pc = 0x2412acu;
    // NOP
label_2412b0:
    // 0x2412b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2412B0u;
    {
        const bool branch_taken_0x2412b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412B0u;
        // 0x2412b4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412b0) {
            ctx->pc = 0x2412C0u;
            goto label_2412c0;
        }
    }
    ctx->pc = 0x2412B8u;
label_2412b8:
    // 0x2412b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2412B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2412BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412B8u;
        // 0x2412bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2412C0u;
label_2412c0:
    // 0x2412c0: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2412c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2412c4:
    // 0x2412c4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2412C4u;
    {
        const bool branch_taken_0x2412c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2412c4) {
            ctx->pc = 0x2412C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2412C4u;
            // 0x2412c8: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2412B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2412b0;
        }
    }
    ctx->pc = 0x2412CCu;
    // 0x2412cc: 0x1140000c  beqz        $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x2412CCu;
    {
        const bool branch_taken_0x2412cc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412cc) {
            ctx->pc = 0x241300u;
            goto label_241300;
        }
    }
    ctx->pc = 0x2412D4u;
    // 0x2412d4: 0x521000a  bgez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x2412D4u;
    {
        const bool branch_taken_0x2412d4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x2412D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412D4u;
        // 0x2412d8: 0x893823  subu        $a3, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412d4) {
            ctx->pc = 0x241300u;
            goto label_241300;
        }
    }
    ctx->pc = 0x2412DCu;
label_2412dc:
    // 0x2412dc: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2412dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2412e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2412E0u;
    {
        const bool branch_taken_0x2412e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412e0) {
            ctx->pc = 0x241300u;
            goto label_241300;
        }
    }
    ctx->pc = 0x2412E8u;
    // 0x2412e8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2412e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2412ec: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2412ECu;
    {
        const bool branch_taken_0x2412ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412ECu;
        // 0x2412f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412ec) {
            ctx->pc = 0x2412DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2412dc;
        }
    }
    ctx->pc = 0x2412F4u;
    // 0x2412f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2412F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2412F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412F4u;
        // 0x2412f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2412FCu;
    // 0x2412fc: 0x0  nop
    ctx->pc = 0x2412fcu;
    // NOP
label_241300:
    // 0x241300: 0x3e00008  jr          $ra
    ctx->pc = 0x241300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241300u;
        // 0x241304: 0x2d420001  sltiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241308u;
    // 0x241308: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x241308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24130c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x241310: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x241310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x241314: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x241314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24131c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24131cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241320: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x241320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x241324: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x241324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241328: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x241328u;
    {
        const bool branch_taken_0x241328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241328u;
        // 0x24132c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241328) {
            ctx->pc = 0x241354u;
            goto label_241354;
        }
    }
    ctx->pc = 0x241330u;
    // 0x241330: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x241330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x241334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241338: 0xc090624  jal         func_241890
    ctx->pc = 0x241338u;
    SET_GPR_U32(ctx, 31, 0x241340u);
    ctx->pc = 0x24133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241338u;
    // 0x24133c: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241890u, 0x241338u, 0x241340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241340u;
label_241340:
    // 0x241340: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x241340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241344: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x241344u;
    {
        const bool branch_taken_0x241344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x241344) {
            ctx->pc = 0x241348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241344u;
            // 0x241348: 0x8c70000c  lw          $s0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241354u;
            goto label_241354;
        }
    }
    ctx->pc = 0x24134Cu;
    // 0x24134c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x24134Cu;
    {
        const bool branch_taken_0x24134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24134Cu;
        // 0x241350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24134c) {
            ctx->pc = 0x241390u;
            goto label_241390;
        }
    }
    ctx->pc = 0x241354u;
label_241354:
    // 0x241354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241358: 0xc09050e  jal         func_241438
    ctx->pc = 0x241358u;
    SET_GPR_U32(ctx, 31, 0x241360u);
    ctx->pc = 0x24135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241358u;
    // 0x24135c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241438u, 0x241358u, 0x241360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241360u;
label_241360:
    // 0x241360: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x241360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241364: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x241364u;
    {
        const bool branch_taken_0x241364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241364u;
        // 0x241368: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241364) {
            ctx->pc = 0x241390u;
            goto label_241390;
        }
    }
    ctx->pc = 0x24136Cu;
    // 0x24136c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24136Cu;
    {
        const bool branch_taken_0x24136c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x241370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24136Cu;
        // 0x241370: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24136c) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x241374u;
label_241374:
    // 0x241374: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x241374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x241378: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241378u;
    {
        const bool branch_taken_0x241378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x24137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241378u;
        // 0x24137c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241378) {
            ctx->pc = 0x241390u;
            goto label_241390;
        }
    }
    ctx->pc = 0x241380u;
    // 0x241380: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x241380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x241384: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x241384u;
    {
        const bool branch_taken_0x241384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x241388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241384u;
        // 0x241388: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241384) {
            ctx->pc = 0x241374u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241374;
        }
    }
    ctx->pc = 0x24138Cu;
    // 0x24138c: 0x0  nop
    ctx->pc = 0x24138cu;
    // NOP
label_241390:
    // 0x241390: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x241390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_241394:
    // 0x241394: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x241394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241398: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x241398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24139c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24139cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2413a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2413A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2413A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413A0u;
        // 0x2413a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2413A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2413A8u;
}
