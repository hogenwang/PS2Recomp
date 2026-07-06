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

// Function: sub_0026D8A0
// Address: 0x26d8a0 - 0x26d980
void sub_0026D8A0_0x26d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D8A0_0x26d8a0");
#endif

    switch (ctx->pc) {
        case 0x26d958u: goto label_26d958;
        case 0x26d970u: goto label_26d970;
        default: break;
    }

    ctx->pc = 0x26d8a0u;

    // 0x26d8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26d8a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26d8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26d8ac: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x26d8acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d8b4: 0x80e40001  lb          $a0, 0x1($a3)
    ctx->pc = 0x26d8b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x26d8b8: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26D8B8u;
    {
        const bool branch_taken_0x26d8b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8B8u;
        // 0x26d8bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8b8) {
            ctx->pc = 0x26D900u;
            goto label_26d900;
        }
    }
    ctx->pc = 0x26D8C0u;
    // 0x26d8c0: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x26d8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26d8c4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x26D8C4u;
    {
        const bool branch_taken_0x26d8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d8c4) {
            ctx->pc = 0x26D8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D8C4u;
            // 0x26d8c8: 0x80e40000  lb          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D904u;
            goto label_26d904;
        }
    }
    ctx->pc = 0x26D8CCu;
    // 0x26d8cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26d8d0: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26D8D0u;
    {
        const bool branch_taken_0x26d8d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d8d0) {
            ctx->pc = 0x26D8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D8D0u;
            // 0x26d8d4: 0x80e40000  lb          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D904u;
            goto label_26d904;
        }
    }
    ctx->pc = 0x26D8D8u;
    // 0x26d8d8: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x26d8d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x26d8dc: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x26d8dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x26d8e0: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x26d8e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x26d8e4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x26d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x26d8e8: 0x90e50005  lbu         $a1, 0x5($a3)
    ctx->pc = 0x26d8e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x26d8ec: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x26d8f0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x26d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x26d8f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26d8f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26d8fc: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x26d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26d900:
    // 0x26d900: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x26d900u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_26d904:
    // 0x26d904: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x26d904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x26d908: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26D908u;
    {
        const bool branch_taken_0x26d908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D908u;
        // 0x26d90c: 0x28820033  slti        $v0, $a0, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d908) {
            ctx->pc = 0x26D934u;
            goto label_26d934;
        }
    }
    ctx->pc = 0x26D910u;
    // 0x26d910: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26D910u;
    {
        const bool branch_taken_0x26d910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D910u;
        // 0x26d914: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d910) {
            ctx->pc = 0x26D974u;
            goto label_26d974;
        }
    }
    ctx->pc = 0x26D918u;
    // 0x26d918: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x26d918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x26d91c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26D91Cu;
    {
        const bool branch_taken_0x26d91c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D91Cu;
        // 0x26d920: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d91c) {
            ctx->pc = 0x26D944u;
            goto label_26d944;
        }
    }
    ctx->pc = 0x26D924u;
    // 0x26d924: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26D924u;
    {
        const bool branch_taken_0x26d924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D924u;
        // 0x26d928: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d924) {
            ctx->pc = 0x26D960u;
            goto label_26d960;
        }
    }
    ctx->pc = 0x26D92Cu;
    // 0x26d92c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26D92Cu;
    {
        const bool branch_taken_0x26d92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D92Cu;
        // 0x26d930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d92c) {
            ctx->pc = 0x26D978u;
            goto label_26d978;
        }
    }
    ctx->pc = 0x26D934u;
label_26d934:
    // 0x26d934: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d938: 0xad0603dc  sw          $a2, 0x3DC($t0)
    ctx->pc = 0x26d938u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 988), GPR_U32(ctx, 6));
    // 0x26d93c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26D93Cu;
    {
        const bool branch_taken_0x26d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D93Cu;
        // 0x26d940: 0x24a59480  addiu       $a1, $a1, -0x6B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d93c) {
            ctx->pc = 0x26D950u;
            goto label_26d950;
        }
    }
    ctx->pc = 0x26D944u;
label_26d944:
    // 0x26d944: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d948: 0xad0603e0  sw          $a2, 0x3E0($t0)
    ctx->pc = 0x26d948u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 992), GPR_U32(ctx, 6));
    // 0x26d94c: 0x24a594a8  addiu       $a1, $a1, -0x6B58
    ctx->pc = 0x26d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939816));
label_26d950:
    // 0x26d950: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D950u;
    SET_GPR_U32(ctx, 31, 0x26D958u);
    ctx->pc = 0x26D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D950u;
    // 0x26d954: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26D950u, 0x26D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D958u;
label_26d958:
    // 0x26d958: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26D958u;
    {
        const bool branch_taken_0x26d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D958u;
        // 0x26d95c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d958) {
            ctx->pc = 0x26D974u;
            goto label_26d974;
        }
    }
    ctx->pc = 0x26D960u;
label_26d960:
    // 0x26d960: 0xad0603e4  sw          $a2, 0x3E4($t0)
    ctx->pc = 0x26d960u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 996), GPR_U32(ctx, 6));
    // 0x26d964: 0x24a594d0  addiu       $a1, $a1, -0x6B30
    ctx->pc = 0x26d964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939856));
    // 0x26d968: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D968u;
    SET_GPR_U32(ctx, 31, 0x26D970u);
    ctx->pc = 0x26D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D968u;
    // 0x26d96c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26D968u, 0x26D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D970u;
label_26d970:
    // 0x26d970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26d974:
    // 0x26d974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26d974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d978:
    // 0x26d978: 0x3e00008  jr          $ra
    ctx->pc = 0x26D978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D978u;
        // 0x26d97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D980u;
}
