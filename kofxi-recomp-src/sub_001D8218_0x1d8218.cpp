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

// Function: sub_001D8218
// Address: 0x1d8218 - 0x1d82e8
void sub_001D8218_0x1d8218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8218_0x1d8218");
#endif

    switch (ctx->pc) {
        case 0x1d82a8u: goto label_1d82a8;
        default: break;
    }

    ctx->pc = 0x1d8218u;

    // 0x1d8218: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1d8218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d821c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D821Cu;
    {
        const bool branch_taken_0x1d821c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D821Cu;
        // 0x1d8220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d821c) {
            ctx->pc = 0x1D8280u;
            goto label_1d8280;
        }
    }
    ctx->pc = 0x1D8224u;
    // 0x1d8224: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1d8224u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1d8228: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8228u;
    {
        const bool branch_taken_0x1d8228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8228u;
        // 0x1d822c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8228) {
            ctx->pc = 0x1D8280u;
            goto label_1d8280;
        }
    }
    ctx->pc = 0x1D8230u;
    // 0x1d8230: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d8230u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d8234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8238: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8238u;
    {
        const bool branch_taken_0x1d8238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8238u;
        // 0x1d823c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8238) {
            ctx->pc = 0x1D8280u;
            goto label_1d8280;
        }
    }
    ctx->pc = 0x1D8240u;
    // 0x1d8240: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x1d8240u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1d8244: 0x240300ba  addiu       $v1, $zero, 0xBA
    ctx->pc = 0x1d8244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1d8248: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8248u;
    {
        const bool branch_taken_0x1d8248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8248u;
        // 0x1d824c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8248) {
            ctx->pc = 0x1D8280u;
            goto label_1d8280;
        }
    }
    ctx->pc = 0x1D8250u;
    // 0x1d8250: 0x288200bb  slti        $v0, $a0, 0xBB
    ctx->pc = 0x1d8250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)187) ? 1 : 0);
    // 0x1d8254: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8254u;
    {
        const bool branch_taken_0x1d8254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8254) {
            ctx->pc = 0x1D8258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8254u;
            // 0x1d8258: 0x240300bb  addiu       $v1, $zero, 0xBB (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8268u;
            goto label_1d8268;
        }
    }
    ctx->pc = 0x1D825Cu;
    // 0x1d825c: 0x240300b9  addiu       $v1, $zero, 0xB9
    ctx->pc = 0x1d825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1d8260: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8260u;
    {
        const bool branch_taken_0x1d8260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8260u;
        // 0x1d8264: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8260) {
            ctx->pc = 0x1D826Cu;
            goto label_1d826c;
        }
    }
    ctx->pc = 0x1D8268u;
label_1d8268:
    // 0x1d8268: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1d8268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1d826c:
    // 0x1d826c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D826Cu;
    {
        const bool branch_taken_0x1d826c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D826Cu;
        // 0x1d8270: 0x2c8300bc  sltiu       $v1, $a0, 0xBC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)188) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d826c) {
            ctx->pc = 0x1D8280u;
            goto label_1d8280;
        }
    }
    ctx->pc = 0x1D8274u;
    // 0x1d8274: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8274u;
    {
        const bool branch_taken_0x1d8274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8274u;
        // 0x1d8278: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8274) {
            ctx->pc = 0x1D8280u;
            goto label_1d8280;
        }
    }
    ctx->pc = 0x1D827Cu;
    // 0x1d827c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d827cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8280:
    // 0x1d8280: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8288u;
    // 0x1d8288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d828c: 0x240600ba  addiu       $a2, $zero, 0xBA
    ctx->pc = 0x1d828cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1d8290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8294: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d8294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d829c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d82a0: 0xc0760ba  jal         func_1D82E8
    ctx->pc = 0x1D82A0u;
    SET_GPR_U32(ctx, 31, 0x1D82A8u);
    ctx->pc = 0x1D82A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D82A0u;
    // 0x1d82a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D82E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D82E8u, 0x1D82A0u, 0x1D82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D82A8u;
label_1d82a8:
    // 0x1d82a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d82a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d82ac: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D82ACu;
    {
        const bool branch_taken_0x1d82ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82ACu;
        // 0x1d82b0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82ac) {
            ctx->pc = 0x1D82D0u;
            goto label_1d82d0;
        }
    }
    ctx->pc = 0x1D82B4u;
    // 0x1d82b4: 0xb11823  subu        $v1, $a1, $s1
    ctx->pc = 0x1d82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1d82b8: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1d82b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d82bc: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D82BCu;
    {
        const bool branch_taken_0x1d82bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82BCu;
        // 0x1d82c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82bc) {
            ctx->pc = 0x1D82D0u;
            goto label_1d82d0;
        }
    }
    ctx->pc = 0x1D82C4u;
    // 0x1d82c4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d82c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d82c8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1d82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1d82cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d82ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d82d0:
    // 0x1d82d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d82d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d82d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d82d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d82d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d82d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d82dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D82DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D82DCu;
        // 0x1d82e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D82DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D82E4u;
    // 0x1d82e4: 0x0  nop
    ctx->pc = 0x1d82e4u;
    // NOP
}
