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

// Function: sub_00204FA0
// Address: 0x204fa0 - 0x205130
void sub_00204FA0_0x204fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204FA0_0x204fa0");
#endif

    switch (ctx->pc) {
        case 0x204fd4u: goto label_204fd4;
        case 0x205004u: goto label_205004;
        case 0x20502cu: goto label_20502c;
        case 0x205054u: goto label_205054;
        case 0x2050b8u: goto label_2050b8;
        case 0x2050e8u: goto label_2050e8;
        case 0x205118u: goto label_205118;
        default: break;
    }

    ctx->pc = 0x204fa0u;

    // 0x204fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x204fa4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x204fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x204fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x204fac: 0x27a5002e  addiu       $a1, $sp, 0x2E
    ctx->pc = 0x204facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    // 0x204fb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x204fb4: 0x27a6002d  addiu       $a2, $sp, 0x2D
    ctx->pc = 0x204fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 45));
    // 0x204fb8: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x204fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x204fbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204fc0: 0x27a4002f  addiu       $a0, $sp, 0x2F
    ctx->pc = 0x204fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 47));
    // 0x204fc4: 0x90470065  lbu         $a3, 0x65($v0)
    ctx->pc = 0x204fc4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 101)));
    // 0x204fc8: 0x90420064  lbu         $v0, 0x64($v0)
    ctx->pc = 0x204fc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x204fcc: 0xc080e58  jal         func_203960
    ctx->pc = 0x204FCCu;
    SET_GPR_U32(ctx, 31, 0x204FD4u);
    ctx->pc = 0x204FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FCCu;
    // 0x204fd0: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203960u, 0x204FCCu, 0x204FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FD4u;
label_204fd4:
    // 0x204fd4: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x204FD4u;
    {
        const bool branch_taken_0x204fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x204fd4) {
            ctx->pc = 0x205054u;
            goto label_205054;
        }
    }
    ctx->pc = 0x204FDCu;
    // 0x204fdc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x204fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x204fe0: 0x93a2002f  lbu         $v0, 0x2F($sp)
    ctx->pc = 0x204fe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 47)));
    // 0x204fe4: 0x2484a1a0  addiu       $a0, $a0, -0x5E60
    ctx->pc = 0x204fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943136));
    // 0x204fe8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x204fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x204fec: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x204fecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204ff0: 0x24c69f80  addiu       $a2, $a2, -0x6080
    ctx->pc = 0x204ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942592));
    // 0x204ff4: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x204ff4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x204ff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x204ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x204ffc: 0xc081120  jal         func_204480
    ctx->pc = 0x204FFCu;
    SET_GPR_U32(ctx, 31, 0x205004u);
    ctx->pc = 0x205000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204FFCu;
    // 0x205000: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x204FFCu, 0x205004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205004u;
label_205004:
    // 0x205004: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x205004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x205008: 0x93a2002e  lbu         $v0, 0x2E($sp)
    ctx->pc = 0x205008u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x20500c: 0x2484a1a4  addiu       $a0, $a0, -0x5E5C
    ctx->pc = 0x20500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943140));
    // 0x205010: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x205010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x205014: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x205014u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205018: 0x24c69f80  addiu       $a2, $a2, -0x6080
    ctx->pc = 0x205018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942592));
    // 0x20501c: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x20501cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x205020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x205020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x205024: 0xc081120  jal         func_204480
    ctx->pc = 0x205024u;
    SET_GPR_U32(ctx, 31, 0x20502Cu);
    ctx->pc = 0x205028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205024u;
    // 0x205028: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x205024u, 0x20502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20502Cu;
label_20502c:
    // 0x20502c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x20502cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x205030: 0x93a2002d  lbu         $v0, 0x2D($sp)
    ctx->pc = 0x205030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 45)));
    // 0x205034: 0x2484a1a8  addiu       $a0, $a0, -0x5E58
    ctx->pc = 0x205034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943144));
    // 0x205038: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x205038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x20503c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x20503cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205040: 0x24c69f80  addiu       $a2, $a2, -0x6080
    ctx->pc = 0x205040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942592));
    // 0x205044: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x205044u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x205048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x205048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20504c: 0xc081120  jal         func_204480
    ctx->pc = 0x20504Cu;
    SET_GPR_U32(ctx, 31, 0x205054u);
    ctx->pc = 0x205050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20504Cu;
    // 0x205050: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x20504Cu, 0x205054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205054u;
label_205054:
    // 0x205054: 0x56000031  bnel        $s0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x205054u;
    {
        const bool branch_taken_0x205054 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x205054) {
            ctx->pc = 0x205058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205054u;
            // 0x205058: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20511Cu;
            goto label_20511c;
        }
    }
    ctx->pc = 0x20505Cu;
    // 0x20505c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20505cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205060: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x205060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205064: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x205064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205068: 0x90650068  lbu         $a1, 0x68($v1)
    ctx->pc = 0x205068u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x20506c: 0x10a40020  beq         $a1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20506Cu;
    {
        const bool branch_taken_0x20506c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x20506c) {
            ctx->pc = 0x2050F0u;
            goto label_2050f0;
        }
    }
    ctx->pc = 0x205074u;
    // 0x205074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205078: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x205078u;
    {
        const bool branch_taken_0x205078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x205078) {
            ctx->pc = 0x2050C0u;
            goto label_2050c0;
        }
    }
    ctx->pc = 0x205080u;
    // 0x205080: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x205080u;
    {
        const bool branch_taken_0x205080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x205080) {
            ctx->pc = 0x205090u;
            goto label_205090;
        }
    }
    ctx->pc = 0x205088u;
    // 0x205088: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x205088u;
    {
        const bool branch_taken_0x205088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205088) {
            ctx->pc = 0x205118u;
            goto label_205118;
        }
    }
    ctx->pc = 0x205090u;
label_205090:
    // 0x205090: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x205090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x205094: 0x93a2002f  lbu         $v0, 0x2F($sp)
    ctx->pc = 0x205094u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 47)));
    // 0x205098: 0x2484a1a0  addiu       $a0, $a0, -0x5E60
    ctx->pc = 0x205098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943136));
    // 0x20509c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x20509cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2050a0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2050a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2050a4: 0x24c69f80  addiu       $a2, $a2, -0x6080
    ctx->pc = 0x2050a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942592));
    // 0x2050a8: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x2050a8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2050ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2050acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2050b0: 0xc081120  jal         func_204480
    ctx->pc = 0x2050B0u;
    SET_GPR_U32(ctx, 31, 0x2050B8u);
    ctx->pc = 0x2050B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050B0u;
    // 0x2050b4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x2050B0u, 0x2050B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050B8u;
label_2050b8:
    // 0x2050b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2050B8u;
    {
        const bool branch_taken_0x2050b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2050b8) {
            ctx->pc = 0x205118u;
            goto label_205118;
        }
    }
    ctx->pc = 0x2050C0u;
label_2050c0:
    // 0x2050c0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2050c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2050c4: 0x93a2002e  lbu         $v0, 0x2E($sp)
    ctx->pc = 0x2050c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x2050c8: 0x2484a1a4  addiu       $a0, $a0, -0x5E5C
    ctx->pc = 0x2050c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943140));
    // 0x2050cc: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2050ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2050d0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2050d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2050d4: 0x24c69f80  addiu       $a2, $a2, -0x6080
    ctx->pc = 0x2050d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942592));
    // 0x2050d8: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x2050d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2050dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2050dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2050e0: 0xc081120  jal         func_204480
    ctx->pc = 0x2050E0u;
    SET_GPR_U32(ctx, 31, 0x2050E8u);
    ctx->pc = 0x2050E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050E0u;
    // 0x2050e4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x2050E0u, 0x2050E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050E8u;
label_2050e8:
    // 0x2050e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2050E8u;
    {
        const bool branch_taken_0x2050e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2050e8) {
            ctx->pc = 0x205118u;
            goto label_205118;
        }
    }
    ctx->pc = 0x2050F0u;
label_2050f0:
    // 0x2050f0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2050f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2050f4: 0x93a2002d  lbu         $v0, 0x2D($sp)
    ctx->pc = 0x2050f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 45)));
    // 0x2050f8: 0x2484a1a8  addiu       $a0, $a0, -0x5E58
    ctx->pc = 0x2050f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943144));
    // 0x2050fc: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2050fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x205100: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x205100u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x205104: 0x24c69f80  addiu       $a2, $a2, -0x6080
    ctx->pc = 0x205104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942592));
    // 0x205108: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x205108u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20510c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20510cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x205110: 0xc081120  jal         func_204480
    ctx->pc = 0x205110u;
    SET_GPR_U32(ctx, 31, 0x205118u);
    ctx->pc = 0x205114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205110u;
    // 0x205114: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x205110u, 0x205118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205118u;
label_205118:
    // 0x205118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20511c:
    // 0x20511c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20511cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205120: 0x3e00008  jr          $ra
    ctx->pc = 0x205120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205120u;
        // 0x205124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205128u;
    // 0x205128: 0x0  nop
    ctx->pc = 0x205128u;
    // NOP
    // 0x20512c: 0x0  nop
    ctx->pc = 0x20512cu;
    // NOP
    if (ctx->pc == 0x20512cu) { ctx->pc = 0x205130u; }
}
