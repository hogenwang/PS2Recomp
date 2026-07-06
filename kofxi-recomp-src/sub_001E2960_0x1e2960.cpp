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

// Function: sub_001E2960
// Address: 0x1e2960 - 0x1e2a78
void sub_001E2960_0x1e2960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2960_0x1e2960");
#endif

    switch (ctx->pc) {
        case 0x1e2980u: goto label_1e2980;
        case 0x1e29acu: goto label_1e29ac;
        case 0x1e2a1cu: goto label_1e2a1c;
        case 0x1e2a3cu: goto label_1e2a3c;
        case 0x1e2a50u: goto label_1e2a50;
        default: break;
    }

    ctx->pc = 0x1e2960u;

label_1e2960:
    // 0x1e2960: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2960u;
    {
        const bool branch_taken_0x1e2960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2960u;
        // 0x1e2964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2960) {
            ctx->pc = 0x1E296Cu;
            goto label_1e296c;
        }
    }
    ctx->pc = 0x1E2968u;
    // 0x1e2968: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e2968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e296c:
    // 0x1e296c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E296Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E296Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2974u;
    // 0x1e2974: 0x0  nop
    ctx->pc = 0x1e2974u;
    // NOP
    // 0x1e2978: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2978u;
        // 0x1e297c: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2980u;
label_1e2980:
    // 0x1e2980: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2980u;
        // 0x1e2984: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2988u;
    // 0x1e2988: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2988u;
        // 0x1e298c: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2990u;
    // 0x1e2990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e2994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e2998: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e2998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e299c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e29a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e29a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e29a4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E29A4u;
    SET_GPR_U32(ctx, 31, 0x1E29ACu);
    ctx->pc = 0x1E29A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E29A4u;
    // 0x1e29a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    goto label_1e2960;
    ctx->pc = 0x1E29ACu;
label_1e29ac:
    // 0x1e29ac: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1e29acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1e29b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e29b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e29b4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e29b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e29b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e29bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e29c0: 0x2484d6c0  addiu       $a0, $a0, -0x2940
    ctx->pc = 0x1e29c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
    // 0x1e29c4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1e29c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1e29c8: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E29C8u;
    {
        const bool branch_taken_0x1e29c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1E29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E29C8u;
        // 0x1e29cc: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29c8) {
            ctx->pc = 0x1E29E8u;
            goto label_1e29e8;
        }
    }
    ctx->pc = 0x1E29D0u;
    // 0x1e29d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e29d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e29d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e29d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e29d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e29d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e29dc: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E29DCu;
    ctx->pc = 0x1E29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E29DCu;
    // 0x1e29e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E29E4u;
    // 0x1e29e4: 0x0  nop
    ctx->pc = 0x1e29e4u;
    // NOP
label_1e29e8:
    // 0x1e29e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e29e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e29ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e29ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e29f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e29f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e29f4: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1e29f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e29f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e29f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e29fc: 0x8078a16  j           func_1E2858
    ctx->pc = 0x1E29FCu;
    ctx->pc = 0x1E2A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E29FCu;
    // 0x1e2a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2858u;
    sub_001E2858_0x1e2858(rdram, ctx, runtime); return;
    ctx->pc = 0x1E2A04u;
    // 0x1e2a04: 0x0  nop
    ctx->pc = 0x1e2a04u;
    // NOP
    // 0x1e2a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2a0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e2a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e2a10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e2a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e2a14: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E2A14u;
    SET_GPR_U32(ctx, 31, 0x1E2A1Cu);
    ctx->pc = 0x1E2A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A14u;
    // 0x1e2a18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    goto label_1e2960;
    ctx->pc = 0x1E2A1Cu;
label_1e2a1c:
    // 0x1e2a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2a20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e2a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a28: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2A28u;
    {
        const bool branch_taken_0x1e2a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A28u;
        // 0x1e2a2c: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a28) {
            ctx->pc = 0x1E2A48u;
            goto label_1e2a48;
        }
    }
    ctx->pc = 0x1E2A30u;
    // 0x1e2a30: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e2a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e2a34: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E2A34u;
    SET_GPR_U32(ctx, 31, 0x1E2A3Cu);
    ctx->pc = 0x1E2A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2A34u;
    // 0x1e2a38: 0x2484d6f0  addiu       $a0, $a0, -0x2910 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E2A34u, 0x1E2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A3Cu;
label_1e2a3c:
    // 0x1e2a3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2A3Cu;
    {
        const bool branch_taken_0x1e2a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A3Cu;
        // 0x1e2a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a3c) {
            ctx->pc = 0x1E2A68u;
            goto label_1e2a68;
        }
    }
    ctx->pc = 0x1E2A44u;
    // 0x1e2a44: 0x0  nop
    ctx->pc = 0x1e2a44u;
    // NOP
label_1e2a48:
    // 0x1e2a48: 0xc078a20  jal         func_1E2880
    ctx->pc = 0x1E2A48u;
    SET_GPR_U32(ctx, 31, 0x1E2A50u);
    ctx->pc = 0x1E2880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2880u, 0x1E2A48u, 0x1E2A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A50u;
label_1e2a50:
    // 0x1e2a50: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1e2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1e2a54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2a58: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E2A58u;
    {
        const bool branch_taken_0x1e2a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2a58) {
            ctx->pc = 0x1E2A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2A58u;
            // 0x1e2a5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2A60u;
            goto label_1e2a60;
        }
    }
    ctx->pc = 0x1E2A60u;
label_1e2a60:
    // 0x1e2a60: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1e2a60u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e2a64: 0x1012  mflo        $v0
    ctx->pc = 0x1e2a64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1e2a68:
    // 0x1e2a68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e2a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2a6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e2a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e2a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A70u;
        // 0x1e2a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2A78u;
}
