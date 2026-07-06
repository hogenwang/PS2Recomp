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

// Function: sub_0018DB40
// Address: 0x18db40 - 0x18dc20
void sub_0018DB40_0x18db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DB40_0x18db40");
#endif

    ctx->pc = 0x18db40u;

    // 0x18db40: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18db40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18db44: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18db44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18db48: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18db4c: 0x30828300  andi        $v0, $a0, 0x8300
    ctx->pc = 0x18db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)33536);
    // 0x18db50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18db50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18db54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18DB54u;
    {
        const bool branch_taken_0x18db54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB54u;
        // 0x18db58: 0x90670000  lbu         $a3, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db54) {
            ctx->pc = 0x18DB84u;
            goto label_18db84;
        }
    }
    ctx->pc = 0x18DB5Cu;
    // 0x18db5c: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x18db5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18db60: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18db60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18db64: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18db64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18db68: 0x2442bdb0  addiu       $v0, $v0, -0x4250
    ctx->pc = 0x18db68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950320));
    // 0x18db6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18db70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18db70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18db74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18db74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18db78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18db78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18db7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18db80: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x18db80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18db84:
    // 0x18db84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18db84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18db88: 0x34420c00  ori         $v0, $v0, 0xC00
    ctx->pc = 0x18db88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3072);
    // 0x18db8c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x18db8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x18db90: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x18DB90u;
    {
        const bool branch_taken_0x18db90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db90) {
            ctx->pc = 0x18DB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DB90u;
            // 0x18db94: 0x3c020180  lui         $v0, 0x180 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DBC4u;
            goto label_18dbc4;
        }
    }
    ctx->pc = 0x18DB98u;
    // 0x18db98: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x18db98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18db9c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18dba0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18dba4: 0x2442bdb4  addiu       $v0, $v0, -0x424C
    ctx->pc = 0x18dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950324));
    // 0x18dba8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18dbac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18dbb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18dbb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18dbb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dbbc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x18dbbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18dbc0: 0x3c020180  lui         $v0, 0x180
    ctx->pc = 0x18dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)384 << 16));
label_18dbc4:
    // 0x18dbc4: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x18dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x18dbc8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x18dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x18dbcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DBCCu;
    {
        const bool branch_taken_0x18dbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbcc) {
            ctx->pc = 0x18DBDCu;
            goto label_18dbdc;
        }
    }
    ctx->pc = 0x18DBD4u;
    // 0x18dbd4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18DBD4u;
    {
        const bool branch_taken_0x18dbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBD4u;
        // 0x18dbd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbd4) {
            ctx->pc = 0x18DC0Cu;
            goto label_18dc0c;
        }
    }
    ctx->pc = 0x18DBDCu;
label_18dbdc:
    // 0x18dbdc: 0x5100000b  beql        $t0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18DBDCu;
    {
        const bool branch_taken_0x18dbdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbdc) {
            ctx->pc = 0x18DBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DBDCu;
            // 0x18dbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DC0Cu;
            goto label_18dc0c;
        }
    }
    ctx->pc = 0x18DBE4u;
    // 0x18dbe4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x18dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18dbe8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18dbec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18dbf0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x18dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x18dbf4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x18dbf4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18dbf8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DBF8u;
    {
        const bool branch_taken_0x18dbf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dbf8) {
            ctx->pc = 0x18DBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DBF8u;
            // 0x18dbfc: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DC08u;
            goto label_18dc08;
        }
    }
    ctx->pc = 0x18DC00u;
    // 0x18dc00: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x18dc00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18dc04: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x18dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_18dc08:
    // 0x18dc08: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x18dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_18dc0c:
    // 0x18dc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DC14u;
    // 0x18dc14: 0x0  nop
    ctx->pc = 0x18dc14u;
    // NOP
    // 0x18dc18: 0x0  nop
    ctx->pc = 0x18dc18u;
    // NOP
    // 0x18dc1c: 0x0  nop
    ctx->pc = 0x18dc1cu;
    // NOP
}
