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

// Function: sub_00287148
// Address: 0x287148 - 0x287260
void sub_00287148_0x287148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287148_0x287148");
#endif

    switch (ctx->pc) {
        case 0x2871b4u: goto label_2871b4;
        case 0x2871e8u: goto label_2871e8;
        default: break;
    }

    ctx->pc = 0x287148u;

    // 0x287148: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28714c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28714cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x287150: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x287150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x287154: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x287154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x287158: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x287158u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x28715c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x287160: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x287160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x287164: 0x39983  sra         $s3, $v1, 6
    ctx->pc = 0x287164u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 6));
    // 0x287168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28716c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28716cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287170: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x287170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x287174: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x287174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287178: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x287178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28717c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x28717cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x287180: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x287180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x287184: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x287184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x287188: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x287188u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28718c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x28718Cu;
    {
        const bool branch_taken_0x28718c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28718Cu;
        // 0x287190: 0xa29823  subu        $s3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28718c) {
            ctx->pc = 0x287218u;
            goto label_287218;
        }
    }
    ctx->pc = 0x287194u;
    // 0x287194: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x287194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x287198: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x287198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28719c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x28719cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2871a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2871A0u;
    {
        const bool branch_taken_0x2871a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871A0u;
        // 0x2871a4: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871a0) {
            ctx->pc = 0x2871C4u;
            goto label_2871c4;
        }
    }
    ctx->pc = 0x2871A8u;
    // 0x2871a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2871a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871ac: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x2871ACu;
    SET_GPR_U32(ctx, 31, 0x2871B4u);
    ctx->pc = 0x2871B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871ACu;
    // 0x2871b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x2871ACu, 0x2871B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871B4u;
label_2871b4:
    // 0x2871b4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2871B4u;
    {
        const bool branch_taken_0x2871b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2871b4) {
            ctx->pc = 0x2871B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2871B4u;
            // 0x2871b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2871D4u;
            goto label_2871d4;
        }
    }
    ctx->pc = 0x2871BCu;
    // 0x2871bc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2871BCu;
    {
        const bool branch_taken_0x2871bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871BCu;
        // 0x2871c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871bc) {
            ctx->pc = 0x28723Cu;
            goto label_28723c;
        }
    }
    ctx->pc = 0x2871C4u;
label_2871c4:
    // 0x2871c4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2871C4u;
    {
        const bool branch_taken_0x2871c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2871C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871C4u;
        // 0x2871c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871c4) {
            ctx->pc = 0x2871D8u;
            goto label_2871d8;
        }
    }
    ctx->pc = 0x2871CCu;
    // 0x2871cc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2871CCu;
    {
        const bool branch_taken_0x2871cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871CCu;
        // 0x2871d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871cc) {
            ctx->pc = 0x28723Cu;
            goto label_28723c;
        }
    }
    ctx->pc = 0x2871D4u;
label_2871d4:
    // 0x2871d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2871d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2871d8:
    // 0x2871d8: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x2871d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2871dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2871DCu;
    {
        const bool branch_taken_0x2871dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871DCu;
        // 0x2871e0: 0x1030c0  sll         $a2, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871dc) {
            ctx->pc = 0x287210u;
            goto label_287210;
        }
    }
    ctx->pc = 0x2871E4u;
    // 0x2871e4: 0x0  nop
    ctx->pc = 0x2871e4u;
    // NOP
label_2871e8:
    // 0x2871e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2871e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2871ec: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2871ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2871f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2871f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2871f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2871f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2871f8: 0xb4202a  slt         $a0, $a1, $s4
    ctx->pc = 0x2871f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2871fc: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2871fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x287200: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x287200u;
    {
        const bool branch_taken_0x287200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x287200) {
            ctx->pc = 0x2871E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2871e8;
        }
    }
    ctx->pc = 0x287208u;
    // 0x287208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x287208u;
    {
        const bool branch_taken_0x287208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287208u;
        // 0x28720c: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287208) {
            ctx->pc = 0x28721Cu;
            goto label_28721c;
        }
    }
    ctx->pc = 0x287210u;
label_287210:
    // 0x287210: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287210u;
    {
        const bool branch_taken_0x287210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287210u;
        // 0x287214: 0xae320004  sw          $s2, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287210) {
            ctx->pc = 0x28721Cu;
            goto label_28721c;
        }
    }
    ctx->pc = 0x287218u;
label_287218:
    // 0x287218: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x287218u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28721c:
    // 0x28721c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28721cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x287220: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x287220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287224: 0x2642014  dsllv       $a0, $a0, $s3
    ctx->pc = 0x287224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x287228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28722c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x287230: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x287230u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x287234: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x287234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x287238: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x287238u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_28723c:
    // 0x28723c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28723cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287240: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x287240u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287244: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x287244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287248: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x287248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28724c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28724cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287254: 0x3e00008  jr          $ra
    ctx->pc = 0x287254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287254u;
        // 0x287258: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28725Cu;
    // 0x28725c: 0x0  nop
    ctx->pc = 0x28725cu;
    // NOP
}
