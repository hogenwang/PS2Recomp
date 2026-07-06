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

// Function: sub_00311090
// Address: 0x311090 - 0x311250
void sub_00311090_0x311090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311090_0x311090");
#endif

    switch (ctx->pc) {
        case 0x3110b0u: goto label_3110b0;
        case 0x3110ecu: goto label_3110ec;
        case 0x311138u: goto label_311138;
        case 0x311160u: goto label_311160;
        case 0x31119cu: goto label_31119c;
        case 0x3111f0u: goto label_3111f0;
        case 0x3111fcu: goto label_3111fc;
        case 0x311220u: goto label_311220;
        case 0x31122cu: goto label_31122c;
        default: break;
    }

    ctx->pc = 0x311090u;

    // 0x311090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x311090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x311094: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x311094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x311098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31109c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3110a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3110a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3110a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3110a8: 0xc05332c  jal         func_14CCB0
    ctx->pc = 0x3110A8u;
    SET_GPR_U32(ctx, 31, 0x3110B0u);
    ctx->pc = 0x3110ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3110A8u;
    // 0x3110ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CCB0u, 0x3110A8u, 0x3110B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3110B0u;
label_3110b0:
    // 0x3110b0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x3110b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3110b4: 0x16200045  bnez        $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3110B4u;
    {
        const bool branch_taken_0x3110b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3110b4) {
            ctx->pc = 0x3111CCu;
            goto label_3111cc;
        }
    }
    ctx->pc = 0x3110BCu;
    // 0x3110bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3110bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3110c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3110c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3110c4: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x3110c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x3110c8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3110c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3110cc: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3110CCu;
    {
        const bool branch_taken_0x3110cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3110cc) {
            ctx->pc = 0x311128u;
            goto label_311128;
        }
    }
    ctx->pc = 0x3110D4u;
    // 0x3110d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3110d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3110d8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x3110d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x3110dc: 0x9044daf8  lbu         $a0, -0x2508($v0)
    ctx->pc = 0x3110dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957816)));
    // 0x3110e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3110e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3110e4: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x3110e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x3110e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3110e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3110ec:
    // 0x3110ec: 0x90a2000a  lbu         $v0, 0xA($a1)
    ctx->pc = 0x3110ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x3110f0: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3110F0u;
    {
        const bool branch_taken_0x3110f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3110f0) {
            ctx->pc = 0x3110F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3110F0u;
            // 0x3110f4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311114u;
            goto label_311114;
        }
    }
    ctx->pc = 0x3110F8u;
    // 0x3110f8: 0xc31004  sllv        $v0, $v1, $a2
    ctx->pc = 0x3110f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x3110fc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3110fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x311100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311100u;
    {
        const bool branch_taken_0x311100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x311100) {
            ctx->pc = 0x311110u;
            goto label_311110;
        }
    }
    ctx->pc = 0x311108u;
    // 0x311108: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x311108u;
    {
        const bool branch_taken_0x311108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311108u;
        // 0x31110c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311108) {
            ctx->pc = 0x311158u;
            goto label_311158;
        }
    }
    ctx->pc = 0x311110u;
label_311110:
    // 0x311110: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x311110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_311114:
    // 0x311114: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x311114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x311118: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x311118u;
    {
        const bool branch_taken_0x311118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311118u;
        // 0x31111c: 0x24a50248  addiu       $a1, $a1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311118) {
            ctx->pc = 0x3110ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3110ec;
        }
    }
    ctx->pc = 0x311120u;
    // 0x311120: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x311120u;
    {
        const bool branch_taken_0x311120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311120) {
            ctx->pc = 0x311158u;
            goto label_311158;
        }
    }
    ctx->pc = 0x311128u;
label_311128:
    // 0x311128: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x311128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x31112c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311130: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x311130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x311134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x311134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_311138:
    // 0x311138: 0x90a2000a  lbu         $v0, 0xA($a1)
    ctx->pc = 0x311138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x31113c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31113Cu;
    {
        const bool branch_taken_0x31113c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31113c) {
            ctx->pc = 0x311140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31113Cu;
            // 0x311140: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31114Cu;
            goto label_31114c;
        }
    }
    ctx->pc = 0x311144u;
    // 0x311144: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x311144u;
    {
        const bool branch_taken_0x311144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311144u;
        // 0x311148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311144) {
            ctx->pc = 0x311158u;
            goto label_311158;
        }
    }
    ctx->pc = 0x31114Cu;
label_31114c:
    // 0x31114c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x31114cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x311150: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x311150u;
    {
        const bool branch_taken_0x311150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311150u;
        // 0x311154: 0x24a50248  addiu       $a1, $a1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311150) {
            ctx->pc = 0x311138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311138;
        }
    }
    ctx->pc = 0x311158u;
label_311158:
    // 0x311158: 0xc06284c  jal         func_18A130
    ctx->pc = 0x311158u;
    SET_GPR_U32(ctx, 31, 0x311160u);
    ctx->pc = 0x31115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311158u;
    // 0x31115c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A130u, 0x311158u, 0x311160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311160u;
label_311160:
    // 0x311160: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x311160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x311164: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x311164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x311168: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x311168u;
    {
        const bool branch_taken_0x311168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x311168) {
            ctx->pc = 0x31116Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311168u;
            // 0x31116c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311194u;
            goto label_311194;
        }
    }
    ctx->pc = 0x311170u;
    // 0x311170: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x311170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x311174: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x311174u;
    {
        const bool branch_taken_0x311174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x311174) {
            ctx->pc = 0x311190u;
            goto label_311190;
        }
    }
    ctx->pc = 0x31117Cu;
    // 0x31117c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x31117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x311180: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x311180u;
    {
        const bool branch_taken_0x311180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x311180) {
            ctx->pc = 0x311190u;
            goto label_311190;
        }
    }
    ctx->pc = 0x311188u;
    // 0x311188: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x311188u;
    {
        const bool branch_taken_0x311188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311188u;
        // 0x31118c: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311188) {
            ctx->pc = 0x3111A4u;
            goto label_3111a4;
        }
    }
    ctx->pc = 0x311190u;
label_311190:
    // 0x311190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311194:
    // 0x311194: 0xc062d7c  jal         func_18B5F0
    ctx->pc = 0x311194u;
    SET_GPR_U32(ctx, 31, 0x31119Cu);
    ctx->pc = 0x18B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B5F0u, 0x311194u, 0x31119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31119Cu;
label_31119c:
    // 0x31119c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x31119cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3111a0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3111a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3111a4:
    // 0x3111a4: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x3111a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x3111a8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3111A8u;
    {
        const bool branch_taken_0x3111a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3111a8) {
            ctx->pc = 0x3111ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3111A8u;
            // 0x3111ac: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3111B8u;
            goto label_3111b8;
        }
    }
    ctx->pc = 0x3111B0u;
    // 0x3111b0: 0x64040012  daddiu      $a0, $zero, 0x12
    ctx->pc = 0x3111b0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
    // 0x3111b4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3111b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3111b8:
    // 0x3111b8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3111b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x3111bc: 0x246307b0  addiu       $v1, $v1, 0x7B0
    ctx->pc = 0x3111bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1968));
    // 0x3111c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3111c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3111c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3111c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3111c8: 0x94710000  lhu         $s1, 0x0($v1)
    ctx->pc = 0x3111c8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3111cc:
    // 0x3111cc: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x3111CCu;
    {
        const bool branch_taken_0x3111cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3111cc) {
            ctx->pc = 0x311204u;
            goto label_311204;
        }
    }
    ctx->pc = 0x3111D4u;
    // 0x3111d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3111d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3111d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3111d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3111dc: 0x8063da08  lb          $v1, -0x25F8($v1)
    ctx->pc = 0x3111dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957576)));
    // 0x3111e0: 0x54640013  bnel        $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3111E0u;
    {
        const bool branch_taken_0x3111e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3111e0) {
            ctx->pc = 0x3111E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3111E0u;
            // 0x3111e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311230u;
            goto label_311230;
        }
    }
    ctx->pc = 0x3111E8u;
    // 0x3111e8: 0xc053318  jal         func_14CC60
    ctx->pc = 0x3111E8u;
    SET_GPR_U32(ctx, 31, 0x3111F0u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x3111E8u, 0x3111F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111F0u;
label_3111f0:
    // 0x3111f0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3111f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3111f4: 0xc0532e0  jal         func_14CB80
    ctx->pc = 0x3111F4u;
    SET_GPR_U32(ctx, 31, 0x3111FCu);
    ctx->pc = 0x3111F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3111F4u;
    // 0x3111f8: 0x34440400  ori         $a0, $v0, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CB80u, 0x3111F4u, 0x3111FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3111FCu;
label_3111fc:
    // 0x3111fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3111FCu;
    {
        const bool branch_taken_0x3111fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3111fc) {
            ctx->pc = 0x31122Cu;
            goto label_31122c;
        }
    }
    ctx->pc = 0x311204u;
label_311204:
    // 0x311204: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x311204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x311208: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x311208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31120c: 0x8063da08  lb          $v1, -0x25F8($v1)
    ctx->pc = 0x31120cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957576)));
    // 0x311210: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x311210u;
    {
        const bool branch_taken_0x311210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x311210) {
            ctx->pc = 0x31122Cu;
            goto label_31122c;
        }
    }
    ctx->pc = 0x311218u;
    // 0x311218: 0xc053318  jal         func_14CC60
    ctx->pc = 0x311218u;
    SET_GPR_U32(ctx, 31, 0x311220u);
    ctx->pc = 0x14CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CC60u, 0x311218u, 0x311220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311220u;
label_311220:
    // 0x311220: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x311220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x311224: 0xc0532e0  jal         func_14CB80
    ctx->pc = 0x311224u;
    SET_GPR_U32(ctx, 31, 0x31122Cu);
    ctx->pc = 0x311228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311224u;
    // 0x311228: 0x34440400  ori         $a0, $v0, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CB80u, 0x311224u, 0x31122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31122Cu;
label_31122c:
    // 0x31122c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31122cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_311230:
    // 0x311230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31123c: 0x3e00008  jr          $ra
    ctx->pc = 0x31123Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31123Cu;
        // 0x311240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31123Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311244u;
    // 0x311244: 0x0  nop
    ctx->pc = 0x311244u;
    // NOP
    // 0x311248: 0x0  nop
    ctx->pc = 0x311248u;
    // NOP
    // 0x31124c: 0x0  nop
    ctx->pc = 0x31124cu;
    // NOP
    if (ctx->pc == 0x31124cu) { ctx->pc = 0x311250u; }
}
