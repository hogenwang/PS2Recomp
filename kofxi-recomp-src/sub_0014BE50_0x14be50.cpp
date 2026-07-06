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

// Function: sub_0014BE50
// Address: 0x14be50 - 0x14c0c0
void sub_0014BE50_0x14be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BE50_0x14be50");
#endif

    switch (ctx->pc) {
        case 0x14bef0u: goto label_14bef0;
        case 0x14bf1cu: goto label_14bf1c;
        case 0x14bf58u: goto label_14bf58;
        case 0x14bf94u: goto label_14bf94;
        case 0x14bfd0u: goto label_14bfd0;
        case 0x14c00cu: goto label_14c00c;
        case 0x14c048u: goto label_14c048;
        case 0x14c074u: goto label_14c074;
        default: break;
    }

    ctx->pc = 0x14be50u;

    // 0x14be50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14be54: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14be54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14be58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14be5c: 0x90645d28  lbu         $a0, 0x5D28($v1)
    ctx->pc = 0x14be5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23848)));
    // 0x14be60: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14be60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14be64: 0x1083008d  beq         $a0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x14BE64u;
    {
        const bool branch_taken_0x14be64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14be64) {
            ctx->pc = 0x14C09Cu;
            goto label_14c09c;
        }
    }
    ctx->pc = 0x14BE6Cu;
    // 0x14be6c: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x14be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x14be70: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x14BE70u;
    {
        const bool branch_taken_0x14be70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14be70) {
            ctx->pc = 0x14C068u;
            goto label_14c068;
        }
    }
    ctx->pc = 0x14BE78u;
    // 0x14be78: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x14be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14be7c: 0x1083007a  beq         $a0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x14BE7Cu;
    {
        const bool branch_taken_0x14be7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14be7c) {
            ctx->pc = 0x14C068u;
            goto label_14c068;
        }
    }
    ctx->pc = 0x14BE84u;
    // 0x14be84: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x14be84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14be88: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x14BE88u;
    {
        const bool branch_taken_0x14be88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14be88) {
            ctx->pc = 0x14C034u;
            goto label_14c034;
        }
    }
    ctx->pc = 0x14BE90u;
    // 0x14be90: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14be90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14be94: 0x10830058  beq         $a0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x14BE94u;
    {
        const bool branch_taken_0x14be94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14be94) {
            ctx->pc = 0x14BFF8u;
            goto label_14bff8;
        }
    }
    ctx->pc = 0x14BE9Cu;
    // 0x14be9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14bea0: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x14BEA0u;
    {
        const bool branch_taken_0x14bea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14bea0) {
            ctx->pc = 0x14BFBCu;
            goto label_14bfbc;
        }
    }
    ctx->pc = 0x14BEA8u;
    // 0x14bea8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14beac: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x14BEACu;
    {
        const bool branch_taken_0x14beac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14beac) {
            ctx->pc = 0x14BF80u;
            goto label_14bf80;
        }
    }
    ctx->pc = 0x14BEB4u;
    // 0x14beb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14beb8: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x14BEB8u;
    {
        const bool branch_taken_0x14beb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14beb8) {
            ctx->pc = 0x14BF44u;
            goto label_14bf44;
        }
    }
    ctx->pc = 0x14BEC0u;
    // 0x14bec0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14bec4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14BEC4u;
    {
        const bool branch_taken_0x14bec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14bec4) {
            ctx->pc = 0x14BF08u;
            goto label_14bf08;
        }
    }
    ctx->pc = 0x14BECCu;
    // 0x14becc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bed0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BED0u;
    {
        const bool branch_taken_0x14bed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14bed0) {
            ctx->pc = 0x14BEE8u;
            goto label_14bee8;
        }
    }
    ctx->pc = 0x14BED8u;
    // 0x14bed8: 0x50800074  beql        $a0, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x14BED8u;
    {
        const bool branch_taken_0x14bed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bed8) {
            ctx->pc = 0x14BEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BED8u;
            // 0x14bedc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C0ACu;
            goto label_14c0ac;
        }
    }
    ctx->pc = 0x14BEE0u;
    // 0x14bee0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x14BEE0u;
    {
        const bool branch_taken_0x14bee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bee0) {
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BEE8u;
label_14bee8:
    // 0x14bee8: 0xc052bd4  jal         func_14AF50
    ctx->pc = 0x14BEE8u;
    SET_GPR_U32(ctx, 31, 0x14BEF0u);
    ctx->pc = 0x14AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF50u, 0x14BEE8u, 0x14BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEF0u;
label_14bef0:
    // 0x14bef0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14bef4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14bef8: 0x90845d28  lbu         $a0, 0x5D28($a0)
    ctx->pc = 0x14bef8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23848)));
    // 0x14befc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14befcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14bf00: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x14BF00u;
    {
        const bool branch_taken_0x14bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF00u;
        // 0x14bf04: 0xa0645d28  sb          $a0, 0x5D28($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23848), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf00) {
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BF08u;
label_14bf08:
    // 0x14bf08: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14bf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf10: 0x9044dca0  lbu         $a0, -0x2360($v0)
    ctx->pc = 0x14bf10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958240)));
    // 0x14bf14: 0xc052d54  jal         func_14B550
    ctx->pc = 0x14BF14u;
    SET_GPR_U32(ctx, 31, 0x14BF1Cu);
    ctx->pc = 0x14BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF14u;
    // 0x14bf18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B550u, 0x14BF14u, 0x14BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF1Cu;
label_14bf1c:
    // 0x14bf1c: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x14BF1Cu;
    {
        const bool branch_taken_0x14bf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf1c) {
            ctx->pc = 0x14BF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BF1Cu;
            // 0x14bf20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BF24u;
    // 0x14bf24: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14bf28: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14bf2c: 0x90635d28  lbu         $v1, 0x5D28($v1)
    ctx->pc = 0x14bf2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23848)));
    // 0x14bf30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14bf34: 0xa0435d28  sb          $v1, 0x5D28($v0)
    ctx->pc = 0x14bf34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23848), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bf38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14bf38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf3c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x14BF3Cu;
    {
        const bool branch_taken_0x14bf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf3c) {
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BF44u;
label_14bf44:
    // 0x14bf44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14bf48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bf4c: 0x9044dcc0  lbu         $a0, -0x2340($v0)
    ctx->pc = 0x14bf4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958272)));
    // 0x14bf50: 0xc052d54  jal         func_14B550
    ctx->pc = 0x14BF50u;
    SET_GPR_U32(ctx, 31, 0x14BF58u);
    ctx->pc = 0x14BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF50u;
    // 0x14bf54: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B550u, 0x14BF50u, 0x14BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF58u;
label_14bf58:
    // 0x14bf58: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x14BF58u;
    {
        const bool branch_taken_0x14bf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf58) {
            ctx->pc = 0x14BF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BF58u;
            // 0x14bf5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BF60u;
    // 0x14bf60: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14bf64: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14bf68: 0x90635d28  lbu         $v1, 0x5D28($v1)
    ctx->pc = 0x14bf68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23848)));
    // 0x14bf6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14bf70: 0xa0435d28  sb          $v1, 0x5D28($v0)
    ctx->pc = 0x14bf70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23848), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bf74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14bf74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf78: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x14BF78u;
    {
        const bool branch_taken_0x14bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf78) {
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BF80u;
label_14bf80:
    // 0x14bf80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14bf84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14bf88: 0x9044dce0  lbu         $a0, -0x2320($v0)
    ctx->pc = 0x14bf88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958304)));
    // 0x14bf8c: 0xc052d54  jal         func_14B550
    ctx->pc = 0x14BF8Cu;
    SET_GPR_U32(ctx, 31, 0x14BF94u);
    ctx->pc = 0x14BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BF8Cu;
    // 0x14bf90: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B550u, 0x14BF8Cu, 0x14BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BF94u;
label_14bf94:
    // 0x14bf94: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x14BF94u;
    {
        const bool branch_taken_0x14bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf94) {
            ctx->pc = 0x14BF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BF94u;
            // 0x14bf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BF9Cu;
    // 0x14bf9c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14bfa0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14bfa4: 0x90635d28  lbu         $v1, 0x5D28($v1)
    ctx->pc = 0x14bfa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23848)));
    // 0x14bfa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14bfac: 0xa0435d28  sb          $v1, 0x5D28($v0)
    ctx->pc = 0x14bfacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23848), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bfb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14bfb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bfb4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x14BFB4u;
    {
        const bool branch_taken_0x14bfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bfb4) {
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BFBCu;
label_14bfbc:
    // 0x14bfbc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14bfc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14bfc4: 0x9044dee8  lbu         $a0, -0x2118($v0)
    ctx->pc = 0x14bfc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958824)));
    // 0x14bfc8: 0xc052d54  jal         func_14B550
    ctx->pc = 0x14BFC8u;
    SET_GPR_U32(ctx, 31, 0x14BFD0u);
    ctx->pc = 0x14BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BFC8u;
    // 0x14bfcc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B550u, 0x14BFC8u, 0x14BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BFD0u;
label_14bfd0:
    // 0x14bfd0: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x14BFD0u;
    {
        const bool branch_taken_0x14bfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bfd0) {
            ctx->pc = 0x14BFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BFD0u;
            // 0x14bfd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BFD8u;
    // 0x14bfd8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14bfdc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14bfe0: 0x90635d28  lbu         $v1, 0x5D28($v1)
    ctx->pc = 0x14bfe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23848)));
    // 0x14bfe4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14bfe8: 0xa0435d28  sb          $v1, 0x5D28($v0)
    ctx->pc = 0x14bfe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23848), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bfec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14bfecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bff0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14BFF0u;
    {
        const bool branch_taken_0x14bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bff0) {
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14BFF8u;
label_14bff8:
    // 0x14bff8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14bffc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c000: 0x9044df08  lbu         $a0, -0x20F8($v0)
    ctx->pc = 0x14c000u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958856)));
    // 0x14c004: 0xc052d54  jal         func_14B550
    ctx->pc = 0x14C004u;
    SET_GPR_U32(ctx, 31, 0x14C00Cu);
    ctx->pc = 0x14C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C004u;
    // 0x14c008: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B550u, 0x14C004u, 0x14C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C00Cu;
label_14c00c:
    // 0x14c00c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x14C00Cu;
    {
        const bool branch_taken_0x14c00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c00c) {
            ctx->pc = 0x14C010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C00Cu;
            // 0x14c010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14C014u;
    // 0x14c014: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14c014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14c018: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c01c: 0x90635d28  lbu         $v1, 0x5D28($v1)
    ctx->pc = 0x14c01cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23848)));
    // 0x14c020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c024: 0xa0435d28  sb          $v1, 0x5D28($v0)
    ctx->pc = 0x14c024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23848), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14c028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c02c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14C02Cu;
    {
        const bool branch_taken_0x14c02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c02c) {
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14C034u;
label_14c034:
    // 0x14c034: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14c034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x14c038: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14c038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c03c: 0x9044df28  lbu         $a0, -0x20D8($v0)
    ctx->pc = 0x14c03cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958888)));
    // 0x14c040: 0xc052d54  jal         func_14B550
    ctx->pc = 0x14C040u;
    SET_GPR_U32(ctx, 31, 0x14C048u);
    ctx->pc = 0x14C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C040u;
    // 0x14c044: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B550u, 0x14C040u, 0x14C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C048u;
label_14c048:
    // 0x14c048: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x14C048u;
    {
        const bool branch_taken_0x14c048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c048) {
            ctx->pc = 0x14C04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C048u;
            // 0x14c04c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14C050u;
    // 0x14c050: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14c054: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c058: 0xa0435d28  sb          $v1, 0x5D28($v0)
    ctx->pc = 0x14c058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23848), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c05c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14c05cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c060: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14C060u;
    {
        const bool branch_taken_0x14c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c060) {
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14C068u;
label_14c068:
    // 0x14c068: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14c06c: 0xc052e9c  jal         func_14BA70
    ctx->pc = 0x14C06Cu;
    SET_GPR_U32(ctx, 31, 0x14C074u);
    ctx->pc = 0x14C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C06Cu;
    // 0x14c070: 0x8044f340  lb          $a0, -0xCC0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BA70u, 0x14C06Cu, 0x14C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C074u;
label_14c074:
    // 0x14c074: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14C074u;
    {
        const bool branch_taken_0x14c074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c074) {
            ctx->pc = 0x14C078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C074u;
            // 0x14c078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14C07Cu;
    // 0x14c07c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14c080: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14c080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14c084: 0x90635d28  lbu         $v1, 0x5D28($v1)
    ctx->pc = 0x14c084u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23848)));
    // 0x14c088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c08c: 0xa0435d28  sb          $v1, 0x5D28($v0)
    ctx->pc = 0x14c08cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23848), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c090: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14c090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14C094u;
    {
        const bool branch_taken_0x14c094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c094) {
            ctx->pc = 0x14C0A8u;
            goto label_14c0a8;
        }
    }
    ctx->pc = 0x14C09Cu;
label_14c09c:
    // 0x14c09c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14c0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c0a4: 0xa0605d28  sb          $zero, 0x5D28($v1)
    ctx->pc = 0x14c0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23848), (uint8_t)GPR_U32(ctx, 0));
label_14c0a8:
    // 0x14c0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c0ac:
    // 0x14c0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x14C0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0ACu;
        // 0x14c0b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C0B4u;
    // 0x14c0b4: 0x0  nop
    ctx->pc = 0x14c0b4u;
    // NOP
    // 0x14c0b8: 0x0  nop
    ctx->pc = 0x14c0b8u;
    // NOP
    // 0x14c0bc: 0x0  nop
    ctx->pc = 0x14c0bcu;
    // NOP
}
