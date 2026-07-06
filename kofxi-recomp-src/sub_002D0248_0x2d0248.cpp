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

// Function: sub_002D0248
// Address: 0x2d0248 - 0x2d0480
void sub_002D0248_0x2d0248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0248_0x2d0248");
#endif

    switch (ctx->pc) {
        case 0x2d0278u: goto label_2d0278;
        case 0x2d0374u: goto label_2d0374;
        case 0x2d0410u: goto label_2d0410;
        case 0x2d043cu: goto label_2d043c;
        case 0x2d0460u: goto label_2d0460;
        default: break;
    }

    ctx->pc = 0x2d0248u;

    // 0x2d0248: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2d0248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d024c: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D024Cu;
    {
        const bool branch_taken_0x2d024c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d024c) {
            ctx->pc = 0x2D02A0u;
            goto label_2d02a0;
        }
    }
    ctx->pc = 0x2D0254u;
    // 0x2d0254: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d0254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d0258: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2d0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d025c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2d025cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d0260: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d0260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d0264: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d0264u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d0268: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2d0268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2d026c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D026Cu;
    {
        const bool branch_taken_0x2d026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D026Cu;
        // 0x2d0270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d026c) {
            ctx->pc = 0x2D0294u;
            goto label_2d0294;
        }
    }
    ctx->pc = 0x2D0274u;
    // 0x2d0274: 0x0  nop
    ctx->pc = 0x2d0274u;
    // NOP
label_2d0278:
    // 0x2d0278: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x2d0278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x2d027c: 0x0  nop
    ctx->pc = 0x2d027cu;
    // NOP
    // 0x2d0280: 0x0  nop
    ctx->pc = 0x2d0280u;
    // NOP
    // 0x2d0284: 0x0  nop
    ctx->pc = 0x2d0284u;
    // NOP
    // 0x2d0288: 0x0  nop
    ctx->pc = 0x2d0288u;
    // NOP
    // 0x2d028c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D028Cu;
    {
        const bool branch_taken_0x2d028c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D028Cu;
        // 0x2d0290: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d028c) {
            ctx->pc = 0x2D0278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0278;
        }
    }
    ctx->pc = 0x2D0294u;
label_2d0294:
    // 0x2d0294: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x2d0294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d0298: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0298u;
        // 0x2d029c: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D02A0u;
label_2d02a0:
    // 0x2d02a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D02A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02A0u;
        // 0x2d02a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D02A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D02A8u;
    // 0x2d02a8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2d02a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02ac: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x2d02acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d02b0: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x2d02b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2d02b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d02b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02b8: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x2d02b8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x2d02bc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2d02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d02c0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d02c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d02c4: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x2d02c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d02c8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2d02c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d02cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d02ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d02d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D02D0u;
    {
        const bool branch_taken_0x2d02d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02D0u;
        // 0x2d02d4: 0x822823  subu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02d0) {
            ctx->pc = 0x2D0300u;
            goto label_2d0300;
        }
    }
    ctx->pc = 0x2D02D8u;
    // 0x2d02d8: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x2d02d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2d02dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d02dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02e0: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2d02e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2d02e4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2d02e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d02e8: 0xa31816  dsrlv       $v1, $v1, $a1
    ctx->pc = 0x2d02e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x2d02ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d02ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d02f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d02f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d02f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2d02f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2d02f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D02F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02F8u;
        // 0x2d02fc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D02F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0300u;
label_2d0300:
    // 0x2d0300: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2d0300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2d0304: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0304u;
        // 0x2d0308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D030Cu;
    // 0x2d030c: 0x0  nop
    ctx->pc = 0x2d030cu;
    // NOP
    // 0x2d0310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0314: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x2d0314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2d0318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d031c: 0x28860000  slti        $a2, $a0, 0x0
    ctx->pc = 0x2d031cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d0320: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2d0320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0324: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d0324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0328: 0xe6100b  movn        $v0, $a3, $a2
    ctx->pc = 0x2d0328u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x2d032c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2d032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d0330: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2d0330u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d0334: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x2d0334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0338: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2d0338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d033c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d033cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0340: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D0340u;
    {
        const bool branch_taken_0x2d0340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0340u;
        // 0x2d0344: 0x823023  subu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0340) {
            ctx->pc = 0x2D0374u;
            goto label_2d0374;
        }
    }
    ctx->pc = 0x2D0348u;
    // 0x2d0348: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x2d0348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2d034c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0350: 0xc21014  dsllv       $v0, $v0, $a2
    ctx->pc = 0x2d0350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x2d0354: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2d0354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2d0358: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d0358u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2d035c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2d035cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0360: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d0360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d0364: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2d0364u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2d0368: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x2d0368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2d036c: 0xc0b51ce  jal         func_2D4738
    ctx->pc = 0x2D036Cu;
    SET_GPR_U32(ctx, 31, 0x2D0374u);
    ctx->pc = 0x2D0370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D036Cu;
    // 0x2d0370: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4738u, 0x2D036Cu, 0x2D0374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0374u;
label_2d0374:
    // 0x2d0374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d037c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D037Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D037Cu;
        // 0x2d0380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D037Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0384u;
    // 0x2d0384: 0x0  nop
    ctx->pc = 0x2d0384u;
    // NOP
    // 0x2d0388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d038c: 0x2486003f  addiu       $a2, $a0, 0x3F
    ctx->pc = 0x2d038cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2d0390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0394: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x2d0394u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d0398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d0398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d039c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d039cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d03a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d03a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d03a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d03a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d03ac: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x2d03acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2d03b0: 0x28183  sra         $s0, $v0, 6
    ctx->pc = 0x2d03b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d03b4: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2d03b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d03b8: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x2d03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2d03bc: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x2d03bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d03c0: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x2d03c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d03c4: 0x207182a  slt         $v1, $s0, $a3
    ctx->pc = 0x2d03c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d03c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D03C8u;
    {
        const bool branch_taken_0x2d03c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D03CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03C8u;
        // 0x2d03cc: 0x829023  subu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d03c8) {
            ctx->pc = 0x2D03F8u;
            goto label_2d03f8;
        }
    }
    ctx->pc = 0x2D03D0u;
    // 0x2d03d0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2d03d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d03d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d03d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d03d8: 0x2442014  dsllv       $a0, $a0, $s2
    ctx->pc = 0x2d03d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x2d03dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d03dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03e0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2d03e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2d03e4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2d03e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d03e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d03e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d03ec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2D03ECu;
    {
        const bool branch_taken_0x2d03ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D03F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03ECu;
        // 0x2d03f0: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d03ec) {
            ctx->pc = 0x2D0464u;
            goto label_2d0464;
        }
    }
    ctx->pc = 0x2D03F4u;
    // 0x2d03f4: 0x0  nop
    ctx->pc = 0x2d03f4u;
    // NOP
label_2d03f8:
    // 0x2d03f8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2d03f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d03fc: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x2d03fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d0400: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0400u;
    {
        const bool branch_taken_0x2d0400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0400) {
            ctx->pc = 0x2D0404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0400u;
            // 0x2d0404: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0424u;
            goto label_2d0424;
        }
    }
    ctx->pc = 0x2D0408u;
    // 0x2d0408: 0xc0b462c  jal         func_2D18B0
    ctx->pc = 0x2D0408u;
    SET_GPR_U32(ctx, 31, 0x2D0410u);
    ctx->pc = 0x2D040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0408u;
    // 0x2d040c: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18B0u, 0x2D0408u, 0x2D0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0410u;
label_2d0410:
    // 0x2d0410: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D0410u;
    {
        const bool branch_taken_0x2d0410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0410) {
            ctx->pc = 0x2D0414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0410u;
            // 0x2d0414: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0468u;
            goto label_2d0468;
        }
    }
    ctx->pc = 0x2D0418u;
    // 0x2d0418: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2d0418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d041c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2d041cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d0420: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2d0420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d0424:
    // 0x2d0424: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x2d0424u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d0428: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2d0428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2d042c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2d042cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d0430: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2d0430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d0434: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D0434u;
    SET_GPR_U32(ctx, 31, 0x2D043Cu);
    ctx->pc = 0x2D0438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0434u;
    // 0x2d0438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D0434u, 0x2D043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D043Cu;
label_2d043c:
    // 0x2d043c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2d043cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d0440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0444: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2d0444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d0448: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d0448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d044c: 0x2431814  dsllv       $v1, $v1, $s2
    ctx->pc = 0x2d044cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 18) & 0x3F));
    // 0x2d0450: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2d0450u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2d0454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0458: 0xc0b51ce  jal         func_2D4738
    ctx->pc = 0x2D0458u;
    SET_GPR_U32(ctx, 31, 0x2D0460u);
    ctx->pc = 0x2D045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0458u;
    // 0x2d045c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4738u, 0x2D0458u, 0x2D0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0460u;
label_2d0460:
    // 0x2d0460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0464:
    // 0x2d0464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0468:
    // 0x2d0468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d0468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d046c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d046cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0470: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d0470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d0474: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0474u;
        // 0x2d0478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D047Cu;
    // 0x2d047c: 0x0  nop
    ctx->pc = 0x2d047cu;
    // NOP
}
